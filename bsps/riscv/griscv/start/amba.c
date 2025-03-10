
/*
 *  Find and initialize irqmp and gptimer.
 */

/*
 * Copyright (C) 2019 Jiri Gaisler <jiri@gaisler.se>
 * Copyright (C) 2021 embedded brains GmbH & Co. KG
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <bsp.h>
#include <bsp/fatal.h>
#include <amba.h>

rtems_interrupt_lock GRLIB_IrqCtrl_Lock =
  RTEMS_INTERRUPT_LOCK_INITIALIZER("GRLIB IrqCtrl");

/* Pointers to Interrupt Controller configuration registers */
volatile struct irqmp_regs *GRLIB_IrqCtrl_Regs;
struct ambapp_dev *GRLIB_IrqCtrl_Adev;

/* GRLIB extended IRQ controller IRQ number */
int GRLIB_IrqCtrl_EIrq = -1;

/* Initialize Extended Interrupt controller */
static void grlib_ext_irq_init(void)
{
  if ( (GRLIB_IrqCtrl_Regs->mpstat >> 16) & 0xf ) {
    /* Extended IRQ controller available */
    GRLIB_IrqCtrl_EIrq = (GRLIB_IrqCtrl_Regs->mpstat >> 16) & 0xf;
  }
}

/*
 *  irqmp_initialize
 *
 *  Probes for IRQMP and initialises necessary registers.
 *
 */

void irqmp_initialize(void)
{
  int icsel;
  struct ambapp_dev *adev;

  /* Find GRLIB Interrupt controller */
  adev = (void *)ambapp_for_each(ambapp_plb(), (OPTIONS_ALL|OPTIONS_APB_SLVS),
                                 VENDOR_GAISLER, GAISLER_IRQMP,
                                 ambapp_find_by_idx, NULL);
  if (adev != NULL) {

    GRLIB_IrqCtrl_Regs = (volatile struct irqmp_regs *)DEV_TO_APB(adev)->start;
    GRLIB_IrqCtrl_Adev = adev;
    if ((GRLIB_IrqCtrl_Regs->ampctrl >> 28) > 0) {
    /* IRQ Controller has support for multiple IRQ Controllers, each
     * CPU can be routed to different Controllers, we find out which
     * controller by looking at the IRQCTRL Select Register for this CPU.
     * Each Controller is located at a 4KByte offset.
     */
      icsel = GRLIB_IrqCtrl_Regs->icsel[GRLIB_Cpu_Index/8];
      icsel = (icsel >> ((7 - (GRLIB_Cpu_Index & 0x7)) * 4)) & 0xf;
      GRLIB_IrqCtrl_Regs += icsel;
    }
    GRLIB_IrqCtrl_Regs->mask[GRLIB_Cpu_Index] = 0;
    GRLIB_IrqCtrl_Regs->force[GRLIB_Cpu_Index] = 0;
    GRLIB_IrqCtrl_Regs->iclear = 0xffffffff;

  /* Init Extended IRQ controller if available */
    grlib_ext_irq_init();

  }

}


/* GPTIMER */

unsigned int grlib_timer_prescaler __attribute__((weak)) = 0;
int grlib_timer_core_index __attribute__((weak)) = 0;

volatile struct gptimer_regs *GRLIB_Timer_Regs;
struct ambapp_dev *GRLIB_Timer_Adev;

/*
 *  gptimer_initialize
 *
 */

void gptimer_initialize(void)
{
  struct ambapp_dev *adev;

  /* find GP Timer */
  adev = (void *)ambapp_for_each(ambapp_plb(), (OPTIONS_ALL|OPTIONS_APB_SLVS),
                                 VENDOR_GAISLER, GAISLER_GPTIMER,
                                 ambapp_find_by_idx, &grlib_timer_core_index);
  if (adev) {
    GRLIB_Timer_Regs = (volatile struct gptimer_regs *)DEV_TO_APB(adev)->start;
    GRLIB_Timer_Adev = adev;

    /* Register AMBA Bus Frequency */
    ambapp_freq_init(
      ambapp_plb(),
      GRLIB_Timer_Adev,
      (GRLIB_Timer_Regs->scaler_reload + 1)
        * GRLIB_GPTIMER_0_FREQUENCY_SET_BY_BOOT_LOADER
    );
    /* Set user prescaler configuration. Use this to increase accuracy of timer
     * and accociated services like cpucounter.
     * Note that minimum value is the number of timer instances present in
     * GRTIMER/GPTIMER hardware. See HW manual.
     */
    if (grlib_timer_prescaler)
      GRLIB_Timer_Regs->scaler_reload = grlib_timer_prescaler;
  }

}

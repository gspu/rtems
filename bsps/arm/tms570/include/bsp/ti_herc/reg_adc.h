/* SPDX-License-Identifier: BSD-2-Clause */

/**
 * @file
 *
 * @ingroup RTEMSBSPsARMTMS570
 *
 * @brief This header file provides ADC interfaces.
 */

/* The header file is generated by make_header.py from ADC.json */
/* Current script's version can be found at: */
/* https://github.com/AoLaD/rtems-tms570-utils/tree/headers/headers/python */

/*
 * Copyright (c) 2014-2015, Premysl Houdek <kom541000@gmail.com>
 *
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
*/
#ifndef LIBBSP_ARM_TMS570_ADC
#define LIBBSP_ARM_TMS570_ADC

#include <bsp/utility.h>

typedef struct{
  uint32_t BUF0;              /*Group 0-2 result buffer 0 register*/
  uint32_t BUF1;              /*Group 0-2 result buffer 1 register*/
  uint32_t BUF2;              /*Group 0-2 result buffer 2 register*/
  uint32_t BUF3;              /*Group 0-2 result buffer 3 register*/
  uint32_t BUF4;              /*Group 0-2 result buffer 4 register*/
  uint32_t BUF5;              /*Group 0-2 result buffer 5 register*/
  uint32_t BUF6;              /*Group 0-2 result buffer 6 register*/
  uint32_t BUF7;              /*Group 0-2 result buffer 7 register*/
} tms570_gxbuf_t;

typedef struct{
  uint32_t RSTCR;             /*ADC Reset Control Register*/
  uint32_t OPMODECR;          /*ADC Operating Mode Control Register*/
  uint32_t CLOCKCR;           /*ADC Clock Control Register*/
  uint32_t CALCR;             /*ADC Calibration Mode Control Register*/
  uint32_t GxMODECR[3];       /*ADC Event Group Operating Mode Control Register*/
  uint32_t EVSRC;             /*ADC Trigger Source Select Register*/
  uint32_t G1SRC;             /*ADC Group1 Trigger Source Select Register*/
  uint32_t G2SRC;             /*ADC Group2 Trigger Source Select Register*/
  uint32_t GxINTENA[3];       /*ADC Event Interrupt Enable Control Register*/
  uint32_t GxINTFLG[3];       /*ADC Event Group Interrupt Flag Register*/
  uint32_t GxINTCR[3];        /*ADC Event Group Threshold Interrupt Control Register*/
  uint32_t EVDMACR;           /*ADC Event Group DMA Control Register*/
  uint32_t G1DMACR;           /*ADC Group1 DMA Control Register*/
  uint32_t G2DMACR;           /*ADC Group2 DMA Control Register*/
  uint32_t BNDCR;             /*ADC Results Memory Configuration Register*/
  uint32_t BNDEND;            /*ADC Results Memory Size Configuration Register*/
  uint32_t EVSAMP;            /*ADC Event Group Sampling Time Configuration Register*/
  uint32_t G1SAMP;            /*ADC Group1 Sampling Time Configuration Register()*/
  uint32_t G2SAMP;            /*ADC Group2 Sampling Time Configuration Register*/
  uint32_t EVSR;              /*ADC Event Group Status Register*/
  uint32_t G1SR;              /*ADC Group1 Status Register*/
  uint32_t G2SR;              /*ADC Group2 Status Register*/
  uint32_t GxSEL[3];          /*ADC Event Group Channel Select Register*/
  uint32_t CALR;              /*ADC Calibration and Error Offset Correction Register*/
  uint32_t SMSTATE;           /*ADC State Machine Status Register*/
  uint32_t LASTCONV;          /*ADC Channel Last Conversion Value Register*/
  tms570_gxbuf_t GxBUF[3];    /*ADC Event Group Results Emulation FIFO Register*/
  uint32_t EVEMUBUFFER;       /*ADC Event Group Results Emulation FIFO Register*/
  uint32_t G1EMUBUFFER;       /*ADC Group1 Results Emulation FIFO Register*/
  uint32_t G2EMUBUFFER;       /*ADC Group2 Results Emulation FIFO Register*/
  uint32_t EVTDIR;            /*ADC ADEVT Pin Direction Control Register*/
  uint32_t EVTOUT;            /*ADC ADEVT Pin Output Value Control Register*/
  uint32_t EVTIN;             /*ADC ADEVT Pin Input Value Register*/
  uint32_t EVTSET;            /*ADC ADEVT Pin Set Register*/
  uint32_t EVTCLR;            /*ADC ADEVT Pin Clear Register*/
  uint32_t EVTPDR;            /*ADC ADEVT Pin Open Drain Enable Register*/
  uint32_t EVTPDIS;           /*ADC ADEVT Pin Pull Control Disable Register*/
  uint32_t EVTPSEL;           /*ADC ADEVT Pin Pull Control Select Register*/
  uint32_t EVSAMPDISEN;       /*ADC Event Group Sample Cap Discharge Control Register*/
  uint32_t G1SAMPDISEN;       /*ADC Group1 Sample Cap Discharge Control Register*/
  uint32_t G2SAMPDISEN;       /*ADC Group2 Sample Cap Discharge Control Register*/
  uint32_t MAGINTCR1;         /*ADC Magnitude Compare Interrupt Control Register 2*/
  uint32_t MAGINT1MASK;       /*ADC Magnitude Compare Mask Register 0*/
  uint32_t MAGINTCR2;         /*ADC Magnitude Compare Interrupt Control Register 2*/
  uint32_t MAGINT2MASK;       /*ADC Magnitude Compare Mask Register 0*/
  uint32_t MAGINTCR3;         /*ADC Magnitude Compare Interrupt Control Register 2*/
  uint32_t MAGINT3MASK;       /*ADC Magnitude Compare Mask Register 0*/
  uint8_t reserved1 [24];
  uint32_t MAGTHRINTENASET;   /*ADC Magnitude Compare Interrupt Enable Set Register*/
  uint32_t MAGTHRINTENACLR;   /*ADC Magnitude Compare Interrupt Enable Clear Register*/
  uint32_t MAGTHRINTFLG;      /*ADC Magnitude Compare Interrupt Flag Register*/
  uint32_t MAGTHRINTOFFSET;   /*ADC Magnitude Compare Interrupt Offset Register*/
  uint32_t GxFIFORESETCR[3];  /*ADC Event Group FIFO Reset Control Register*/
  uint32_t EVRAMWRADDR;       /*ADC Event Group RAM Write Address Register*/
  uint32_t G1RAMWRADDR;       /*ADC Group1 RAM Write Address Register*/
  uint32_t G2RAMWRADDR;       /*ADC Group2 RAM Write Address Register*/
  uint32_t PARCR;             /*ADC Parity Control Register*/
  uint32_t PARADDR;           /*ADC Parity Error Address Register*/
  uint32_t PWRUPDLYCTRL;      /*ADC Power-Up Delay Control Register*/
} tms570_adc_t;


/*----------------------TMS570_ADC_BUFx----------------------*/
/* field: G2_EMPTY_10bit_mode - Group2 FIFO Empty. */
#define TMS570_ADC_BUFx_G2_EMPTY_10bit_mode BSP_BIT32(15)

/* field: G2_CHID_10bit_mode - Group2 Channel Id. */
#define TMS570_ADC_BUFx_G2_CHID_10bit_mode(val) BSP_FLD32(val,10, 14)
#define TMS570_ADC_BUFx_G2_CHID_10bit_mode_GET(reg) BSP_FLD32GET(reg,10, 14)
#define TMS570_ADC_BUFx_G2_CHID_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,10, 14)

/* field: G2_DR_10bit_mode - Group2 Digital Conversion Result. */
#define TMS570_ADC_BUFx_G2_DR_10bit_mode(val) BSP_FLD32(val,0, 9)
#define TMS570_ADC_BUFx_G2_DR_10bit_mode_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_ADC_BUFx_G2_DR_10bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)

/* field: G2_EMPTY_12bit_mode - Group2 FIFO Empty. */
#define TMS570_ADC_BUFx_G2_EMPTY_12bit_mode BSP_BIT32(31)

/* field: G2_CHID_12bit_mode - Group2 Channel Id. */
#define TMS570_ADC_BUFx_G2_CHID_12bit_mode(val) BSP_FLD32(val,16, 20)
#define TMS570_ADC_BUFx_G2_CHID_12bit_mode_GET(reg) BSP_FLD32GET(reg,16, 20)
#define TMS570_ADC_BUFx_G2_CHID_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,16, 20)

/* field: G2_DR_12bit_mode - Group2 Digital Conversion Result. */
#define TMS570_ADC_BUFx_G2_DR_12bit_mode(val) BSP_FLD32(val,0, 11)
#define TMS570_ADC_BUFx_G2_DR_12bit_mode_GET(reg) BSP_FLD32GET(reg,0, 11)
#define TMS570_ADC_BUFx_G2_DR_12bit_mode_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*----------------------TMS570_ADC_RSTCR----------------------*/
/* field: RESET - This bit is used to reset the ADC internal state machines and control/status registers. */
#define TMS570_ADC_RSTCR_RESET BSP_BIT32(0)


/*--------------------TMS570_ADC_OPMODECR--------------------*/
/* field: 10_12_BIT - This bit controls the resolution of the ADC core. */
#define TMS570_ADC_OPMODECR_10_12_BIT BSP_BIT32(31)


/*---------------------TMS570_ADC_CLOCKCR---------------------*/
/* field: PS - ADC Clock Prescaler. These bits define the prescaler value for the ADC core clock (ADCLK). */
#define TMS570_ADC_CLOCKCR_PS(val) BSP_FLD32(val,0, 4)
#define TMS570_ADC_CLOCKCR_PS_GET(reg) BSP_FLD32GET(reg,0, 4)
#define TMS570_ADC_CLOCKCR_PS_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*----------------------TMS570_ADC_CALCR----------------------*/
/* field: SELF_TEST - ADC Self Test Enable. */
#define TMS570_ADC_CALCR_SELF_TEST BSP_BIT32(24)

/* field: CAL_ST - ADC Calibration Conversion Start. */
#define TMS570_ADC_CALCR_CAL_ST BSP_BIT32(16)

/* field: BRIDGE_EN - Bridge Enable. */
#define TMS570_ADC_CALCR_BRIDGE_EN BSP_BIT32(9)

/* field: HILO - ADC Self Test mode and Calibration Mode Reference Source Selection. */
#define TMS570_ADC_CALCR_HILO BSP_BIT32(8)

/* field: CAL_EN - ADC Calibration Enable. */
#define TMS570_ADC_CALCR_CAL_EN BSP_BIT32(0)


/*--------------------TMS570_ADC_GxMODECR--------------------*/
/* field: No_Reset_on_ChnSel - No Event Group Results Memory Reset on New Channel Select. */
#define TMS570_ADC_GxMODECR_No_Reset_on_ChnSel BSP_BIT32(16)

/* field: EV_DATA_FMT - Event Group Read Data Format. */
#define TMS570_ADC_GxMODECR_EV_DATA_FMT(val) BSP_FLD32(val,8, 9)
#define TMS570_ADC_GxMODECR_EV_DATA_FMT_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_ADC_GxMODECR_EV_DATA_FMT_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)


/*----------------------TMS570_ADC_EVSRC----------------------*/
/* field: EV_EDG_BOTH - rising and falling edge detected on the selected trigger source. */
#define TMS570_ADC_EVSRC_EV_EDG_BOTH BSP_BIT32(4)

/* field: EV_EDG_SEL - Event Group Trigger Edge Polarity Select. */
#define TMS570_ADC_EVSRC_EV_EDG_SEL BSP_BIT32(3)

/* field: EV_SRC - Event Group Trigger Source. */
#define TMS570_ADC_EVSRC_EV_SRC(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_EVSRC_EV_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_EVSRC_EV_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------------TMS570_ADC_G1SRC----------------------*/
/* field: GI_EDG_BOTH - Group1 Trigger Edge Polarity Select. */
#define TMS570_ADC_G1SRC_GI_EDG_BOTH BSP_BIT32(4)

/* field: G1_EDG_SEL - Group1 Trigger Edge Polarity Select. */
#define TMS570_ADC_G1SRC_G1_EDG_SEL BSP_BIT32(3)

/* field: G1_SRC - Group1 Trigger Source. */
#define TMS570_ADC_G1SRC_G1_SRC(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_G1SRC_G1_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_G1SRC_G1_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------------TMS570_ADC_G2SRC----------------------*/
/* field: G2_EDG_BOTH - Group2 Trigger Edge Polarity Select. */
#define TMS570_ADC_G2SRC_G2_EDG_BOTH BSP_BIT32(4)

/* field: G2_EDG_SEL - Group2 Trigger Edge Polarity Select. */
#define TMS570_ADC_G2SRC_G2_EDG_SEL BSP_BIT32(3)

/* field: G2_SRC - Group2 Trigger Source. */
#define TMS570_ADC_G2SRC_G2_SRC(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_G2SRC_G2_SRC_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_G2SRC_G2_SRC_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*--------------------TMS570_ADC_GxINTENA--------------------*/
/* field: EV_END_INT_EN - Event Group Conversion End Interrupt Enable. Please refer to Section 19.5. */
#define TMS570_ADC_GxINTENA_EV_END_INT_EN BSP_BIT32(3)

/* field: EV_OVR_INT_EN - write a new conversion result to the Event Group results memory which is already full. */
#define TMS570_ADC_GxINTENA_EV_OVR_INT_EN BSP_BIT32(1)

/* field: EV_THR_INT_EN - Event Group Threshold Interrupt Enable. */
#define TMS570_ADC_GxINTENA_EV_THR_INT_EN BSP_BIT32(0)


/*--------------------TMS570_ADC_GxINTFLG--------------------*/
/* field: EV_END - Event Group Conversion End. */
#define TMS570_ADC_GxINTFLG_EV_END BSP_BIT32(3)

/* field: EV_MEM_EMPTY - Event Group Results Memory Empty. This is a read-only bit; writes have no effect. It is not asource of an interrupt from the ADC module. */
#define TMS570_ADC_GxINTFLG_EV_MEM_EMPTY BSP_BIT32(2)

/* field: EV_MEM_OVERRUN - Event Group Memory Overrun. This is a read-only bit; writes have no effect. */
#define TMS570_ADC_GxINTFLG_EV_MEM_OVERRUN BSP_BIT32(1)

/* field: EV_THR_INT_FLG - Event Group Threshold Interrupt Flag. */
#define TMS570_ADC_GxINTFLG_EV_THR_INT_FLG BSP_BIT32(0)


/*---------------------TMS570_ADC_GxINTCR---------------------*/
/* field: Sign_Extension - These bits always read the same as the bit 8 of this register. */
#define TMS570_ADC_GxINTCR_Sign_Extension(val) BSP_FLD32(val,9, 15)
#define TMS570_ADC_GxINTCR_Sign_Extension_GET(reg) BSP_FLD32GET(reg,9, 15)
#define TMS570_ADC_GxINTCR_Sign_Extension_SET(reg,val) BSP_FLD32SET(reg, val,9, 15)

/* field: EV_THR - Event Group Threshold Counter. */
#define TMS570_ADC_GxINTCR_EV_THR(val) BSP_FLD32(val,0, 8)
#define TMS570_ADC_GxINTCR_EV_THR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_ADC_GxINTCR_EV_THR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*---------------------TMS570_ADC_EVDMACR---------------------*/
/* field: EV_BLOCKS - Number of Event Group Result buffers to be transferred using DMA if the ADC module is */
#define TMS570_ADC_EVDMACR_EV_BLOCKS(val) BSP_FLD32(val,16, 24)
#define TMS570_ADC_EVDMACR_EV_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define TMS570_ADC_EVDMACR_EV_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_EV_END - Event Group Conversion End DMA Transfer Enable. */
#define TMS570_ADC_EVDMACR_DMA_EV_END BSP_BIT32(3)

/* field: EV_BLK_XFER - Event Group Block DMA Transfer Enable. */
#define TMS570_ADC_EVDMACR_EV_BLK_XFER BSP_BIT32(2)

/* field: EV_DMA_EN - Event Group DMA Transfer Enable. */
#define TMS570_ADC_EVDMACR_EV_DMA_EN BSP_BIT32(0)


/*---------------------TMS570_ADC_G1DMACR---------------------*/
/* field: G1_BLOCKS - Number of Group1 Result buffers to be transferred using DMA if the ADC module is configured */
#define TMS570_ADC_G1DMACR_G1_BLOCKS(val) BSP_FLD32(val,16, 24)
#define TMS570_ADC_G1DMACR_G1_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define TMS570_ADC_G1DMACR_G1_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_G1_END - Group1 Conversion End DMA Transfer Enable. */
#define TMS570_ADC_G1DMACR_DMA_G1_END BSP_BIT32(3)

/* field: G1_BLK_XFER - Group1 Block DMA Transfer Enable. */
#define TMS570_ADC_G1DMACR_G1_BLK_XFER BSP_BIT32(2)

/* field: G1_DMA_EN - Group1 DMA Transfer Enable. */
#define TMS570_ADC_G1DMACR_G1_DMA_EN BSP_BIT32(0)


/*---------------------TMS570_ADC_G2DMACR---------------------*/
/* field: G2_BLOCKS - Number of Group2 Result buffers to be transferred using DMA if the ADC module is configured */
#define TMS570_ADC_G2DMACR_G2_BLOCKS(val) BSP_FLD32(val,16, 24)
#define TMS570_ADC_G2DMACR_G2_BLOCKS_GET(reg) BSP_FLD32GET(reg,16, 24)
#define TMS570_ADC_G2DMACR_G2_BLOCKS_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: DMA_G2_END - Group2 Conversion End DMA Transfer Enable. */
#define TMS570_ADC_G2DMACR_DMA_G2_END BSP_BIT32(3)

/* field: G2_BLK_XFER - Group2 Block DMA Transfer Enable. */
#define TMS570_ADC_G2DMACR_G2_BLK_XFER BSP_BIT32(2)

/* field: G2_DMA_EN - Group2 DMA Transfer Enable. */
#define TMS570_ADC_G2DMACR_G2_DMA_EN BSP_BIT32(0)


/*----------------------TMS570_ADC_BNDCR----------------------*/
/* field: BNDA - Buffer Boundary A. */
#define TMS570_ADC_BNDCR_BNDA(val) BSP_FLD32(val,16, 24)
#define TMS570_ADC_BNDCR_BNDA_GET(reg) BSP_FLD32GET(reg,16, 24)
#define TMS570_ADC_BNDCR_BNDA_SET(reg,val) BSP_FLD32SET(reg, val,16, 24)

/* field: BNDB - Buffer Boundary B. */
#define TMS570_ADC_BNDCR_BNDB(val) BSP_FLD32(val,0, 8)
#define TMS570_ADC_BNDCR_BNDB_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_ADC_BNDCR_BNDB_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*---------------------TMS570_ADC_BNDEND---------------------*/
/* field: BUF_INIT_ACTIVE - ADC Results Memory Auto-initialization Status. */
#define TMS570_ADC_BNDEND_BUF_INIT_ACTIVE BSP_BIT32(16)

/* field: BNDEND - Buffer Boundary End. */
#define TMS570_ADC_BNDEND_BNDEND(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_BNDEND_BNDEND_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_BNDEND_BNDEND_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------TMS570_ADC_EVSAMP---------------------*/
/* field: EV_ACQ - Event Group Acquisition Time. */
#define TMS570_ADC_EVSAMP_EV_ACQ(val) BSP_FLD32(val,0, 11)
#define TMS570_ADC_EVSAMP_EV_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define TMS570_ADC_EVSAMP_EV_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*---------------------TMS570_ADC_G1SAMP---------------------*/
/* field: G1_ACQ - Group1 Acquisition Time. These bits define the sampling window (SW) for the Group1 conversions. */
#define TMS570_ADC_G1SAMP_G1_ACQ(val) BSP_FLD32(val,0, 11)
#define TMS570_ADC_G1SAMP_G1_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define TMS570_ADC_G1SAMP_G1_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*---------------------TMS570_ADC_G2SAMP---------------------*/
/* field: G2_ACQ - Group2 Acquisition Time. These bits define the sampling window (SW) for the Group2 conversions. */
#define TMS570_ADC_G2SAMP_G2_ACQ(val) BSP_FLD32(val,0, 11)
#define TMS570_ADC_G2SAMP_G2_ACQ_GET(reg) BSP_FLD32GET(reg,0, 11)
#define TMS570_ADC_G2SAMP_G2_ACQ_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*----------------------TMS570_ADC_EVSR----------------------*/
/* field: EV_MEM_EMPTY - Event Group Results Memory Empty. */
#define TMS570_ADC_EVSR_EV_MEM_EMPTY BSP_BIT32(3)

/* field: EV_BUSY - Event Group Conversion Busy. */
#define TMS570_ADC_EVSR_EV_BUSY BSP_BIT32(2)

/* field: EV_STOP - Event Group Conversion Stopped. */
#define TMS570_ADC_EVSR_EV_STOP BSP_BIT32(1)

/* field: EV_END - Event Group Conversions Ended. */
#define TMS570_ADC_EVSR_EV_END BSP_BIT32(0)


/*----------------------TMS570_ADC_G1SR----------------------*/
/* field: G1_MEM_EMPTY - Group1 Results Memory Empty. */
#define TMS570_ADC_G1SR_G1_MEM_EMPTY BSP_BIT32(3)

/* field: G1_BUSY - Group1 Conversion Busy. */
#define TMS570_ADC_G1SR_G1_BUSY BSP_BIT32(2)

/* field: G1_STOP - Group1 Conversion Stopped. */
#define TMS570_ADC_G1SR_G1_STOP BSP_BIT32(1)

/* field: G1_END - Group1 Conversions Ended. */
#define TMS570_ADC_G1SR_G1_END BSP_BIT32(0)


/*----------------------TMS570_ADC_G2SR----------------------*/
/* field: G2_MEM_EMPTY - Group2 Results Memory Empty. */
#define TMS570_ADC_G2SR_G2_MEM_EMPTY BSP_BIT32(3)

/* field: G2_BUSY - Group2 Conversion Busy. */
#define TMS570_ADC_G2SR_G2_BUSY BSP_BIT32(2)

/* field: G2_STOP - Group2 Conversion Stopped. */
#define TMS570_ADC_G2SR_G2_STOP BSP_BIT32(1)

/* field: G2_END - Group2 Conversions Ended. */
#define TMS570_ADC_G2SR_G2_END BSP_BIT32(0)


/*----------------------TMS570_ADC_GxSEL----------------------*/
/* field: EV_SEL - Event Group channels selected. */
#define TMS570_ADC_GxSEL_EV_SEL(val) BSP_FLD32(val,0, 15)
#define TMS570_ADC_GxSEL_EV_SEL_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_ADC_GxSEL_EV_SEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_ADC_CALR----------------------*/
/* field: ADCALR - ADC Calibration Result and Offset Error Correction Value. */
#define TMS570_ADC_CALR_ADCALR(val) BSP_FLD32(val,0, 11)
#define TMS570_ADC_CALR_ADCALR_GET(reg) BSP_FLD32GET(reg,0, 11)
#define TMS570_ADC_CALR_ADCALR_SET(reg,val) BSP_FLD32SET(reg, val,0, 11)


/*---------------------TMS570_ADC_SMSTATE---------------------*/
/* field: LAST_CONV - ADC Input Channel's Last Converted Value. */
#define TMS570_ADC_SMSTATE_LAST_CONV(val) BSP_FLD32(val,0, 23)
#define TMS570_ADC_SMSTATE_LAST_CONV_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_ADC_SMSTATE_LAST_CONV_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*--------------------TMS570_ADC_LASTCONV--------------------*/
/* field: LAST_CONV - ADC Input Channel's Last Converted Value. */
#define TMS570_ADC_LASTCONV_LAST_CONV(val) BSP_FLD32(val,0, 23)
#define TMS570_ADC_LASTCONV_LAST_CONV_GET(reg) BSP_FLD32GET(reg,0, 23)
#define TMS570_ADC_LASTCONV_LAST_CONV_SET(reg,val) BSP_FLD32SET(reg, val,0, 23)


/*----------------------TMS570_ADC_GxBUF----------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define TMS570_ADC_GxBUF_ADEVT_DIR BSP_BIT32(0)


/*-------------------TMS570_ADC_EVEMUBUFFER-------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define TMS570_ADC_EVEMUBUFFER_ADEVT_DIR BSP_BIT32(0)


/*-------------------TMS570_ADC_G1EMUBUFFER-------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define TMS570_ADC_G1EMUBUFFER_ADEVT_DIR BSP_BIT32(0)


/*-------------------TMS570_ADC_G2EMUBUFFER-------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define TMS570_ADC_G2EMUBUFFER_ADEVT_DIR BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTDIR---------------------*/
/* field: ADEVT_DIR - ADEVT Pin Direction. */
#define TMS570_ADC_EVTDIR_ADEVT_DIR BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTOUT---------------------*/
/* field: ADEVT_OUT - ADEVT Pin Output Value. */
#define TMS570_ADC_EVTOUT_ADEVT_OUT BSP_BIT32(0)


/*----------------------TMS570_ADC_EVTIN----------------------*/
/* field: ADEVT_IN - ADEVT Pin Input Value. This is a read-only bit which reflects the logic level on the ADEVT pin. */
#define TMS570_ADC_EVTIN_ADEVT_IN BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTSET---------------------*/
/* field: ADEVT_SET - ADEVT Pin Set. This bit drives the output of the ADEVT pin high. */
#define TMS570_ADC_EVTSET_ADEVT_SET BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTCLR---------------------*/
/* field: ADEVT_CLR - ADEVT Pin Clear. A read from this bit always returns the current state of the ADEVT pin. */
#define TMS570_ADC_EVTCLR_ADEVT_CLR BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTPDR---------------------*/
/* field: ADEVT_PDR - ADEVT Pin Open Drain Enable. */
#define TMS570_ADC_EVTPDR_ADEVT_PDR BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTPDIS---------------------*/
/* field: ADEVT_PDIS - ADEVT Pin Pull Control Disable. */
#define TMS570_ADC_EVTPDIS_ADEVT_PDIS BSP_BIT32(0)


/*---------------------TMS570_ADC_EVTPSEL---------------------*/
/* field: ADEVT_PSEL - ADEVT Pin Pull Control Select. */
#define TMS570_ADC_EVTPSEL_ADEVT_PSEL BSP_BIT32(0)


/*-------------------TMS570_ADC_EVSAMPDISEN-------------------*/
/* field: EV_SAMP_DIS_CYC - Event Group sample cap discharge cycles. */
#define TMS570_ADC_EVSAMPDISEN_EV_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define TMS570_ADC_EVSAMPDISEN_EV_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_ADC_EVSAMPDISEN_EV_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: EV_SAMP_DIS_EN - Event Group sample cap discharge enable. */
#define TMS570_ADC_EVSAMPDISEN_EV_SAMP_DIS_EN BSP_BIT32(0)


/*-------------------TMS570_ADC_G1SAMPDISEN-------------------*/
/* field: G1_SAMP_DIS_CYC - Group1 sample cap discharge cycles. */
#define TMS570_ADC_G1SAMPDISEN_G1_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define TMS570_ADC_G1SAMPDISEN_G1_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_ADC_G1SAMPDISEN_G1_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: G1_SAMP_DIS_EN - Group1 sample cap discharge enable. */
#define TMS570_ADC_G1SAMPDISEN_G1_SAMP_DIS_EN BSP_BIT32(0)


/*-------------------TMS570_ADC_G2SAMPDISEN-------------------*/
/* field: G2_SAMP_DIS_CYC - for which the ADC internal sampling capacitor is allowed to discharge before sampling the input */
#define TMS570_ADC_G2SAMPDISEN_G2_SAMP_DIS_CYC(val) BSP_FLD32(val,8, 15)
#define TMS570_ADC_G2SAMPDISEN_G2_SAMP_DIS_CYC_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_ADC_G2SAMPDISEN_G2_SAMP_DIS_CYC_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: G2_SAMP_DIS_EN - Group2 sample cap discharge enable. */
#define TMS570_ADC_G2SAMPDISEN_G2_SAMP_DIS_EN BSP_BIT32(0)


/*--------------------TMS570_ADC_MAGINTCRx--------------------*/
/* field: MAG_CHID2 - These bits specify the channel number from 0 to 31 for which the conversion result needs to be */
#define TMS570_ADC_MAGINTCRx_MAG_CHID2(val) BSP_FLD32(val,26, 30)
#define TMS570_ADC_MAGINTCRx_MAG_CHID2_GET(reg) BSP_FLD32GET(reg,26, 30)
#define TMS570_ADC_MAGINTCRx_MAG_CHID2_SET(reg,val) BSP_FLD32SET(reg, val,26, 30)

/* field: MAG_THR2 - These bits specify the 10-bit compare value which the ADC will use for the comparison with the */
#define TMS570_ADC_MAGINTCRx_MAG_THR2(val) BSP_FLD32(val,16, 25)
#define TMS570_ADC_MAGINTCRx_MAG_THR2_GET(reg) BSP_FLD32GET(reg,16, 25)
#define TMS570_ADC_MAGINTCRx_MAG_THR2_SET(reg,val) BSP_FLD32SET(reg, val,16, 25)

/* field: COMP_CHID2 - These bits specify the channel number from 0 to 31 whose last conversion result is compared */
#define TMS570_ADC_MAGINTCRx_COMP_CHID2(val) BSP_FLD32(val,8, 12)
#define TMS570_ADC_MAGINTCRx_COMP_CHID2_GET(reg) BSP_FLD32GET(reg,8, 12)
#define TMS570_ADC_MAGINTCRx_COMP_CHID2_SET(reg,val) BSP_FLD32SET(reg, val,8, 12)

/* field: CHN_THR_COMP2 - Channel OR Threshold comparison. */
#define TMS570_ADC_MAGINTCRx_CHN_THR_COMP2 BSP_BIT32(1)

/* field: CMP_GE_LT2 - Greater than or equal to OR Less than comparison operator. */
#define TMS570_ADC_MAGINTCRx_CMP_GE_LT2 BSP_BIT32(0)


/*-------------------TMS570_ADC_MAGINTxMASK-------------------*/
/* field: MAG_INT0_MASK - These bits specify the mask for the comparison in order to generate the magnitude compare */
#define TMS570_ADC_MAGINTxMASK_MAG_INT0_MASK(val) BSP_FLD32(val,0, 9)
#define TMS570_ADC_MAGINTxMASK_MAG_INT0_MASK_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_ADC_MAGINTxMASK_MAG_INT0_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*-----------------TMS570_ADC_MAGTHRINTENASET-----------------*/
/* field: MAG_INT_ENA_SET - Each of these three bits, when set, enable the corresponding magnitude compare interrupt. */
#define TMS570_ADC_MAGTHRINTENASET_MAG_INT_ENA_SET(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_MAGTHRINTENASET_MAG_INT_ENA_SET_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_MAGTHRINTENASET_MAG_INT_ENA_SET_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------TMS570_ADC_MAGTHRINTENACLR-----------------*/
/* field: MAG_INT_ENA_CLR - Each of these three bits, when set, enable the corresponding magnitude compare interrupt. */
#define TMS570_ADC_MAGTHRINTENACLR_MAG_INT_ENA_CLR(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_MAGTHRINTENACLR_MAG_INT_ENA_CLR_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_MAGTHRINTENACLR_MAG_INT_ENA_CLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*------------------TMS570_ADC_MAGTHRINTFLG------------------*/
/* field: MAG_INT_FLG - Magnitude Compare Interrupt Flags. */
#define TMS570_ADC_MAGTHRINTFLG_MAG_INT_FLG(val) BSP_FLD32(val,0, 2)
#define TMS570_ADC_MAGTHRINTFLG_MAG_INT_FLG_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_ADC_MAGTHRINTFLG_MAG_INT_FLG_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------TMS570_ADC_MAGTHRINTOFFSET-----------------*/
/* field: MAG_INT_OFF - Magnitude Compare Interrupt Offset. */
#define TMS570_ADC_MAGTHRINTOFFSET_MAG_INT_OFF(val) BSP_FLD32(val,0, 3)
#define TMS570_ADC_MAGTHRINTOFFSET_MAG_INT_OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_ADC_MAGTHRINTOFFSET_MAG_INT_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------TMS570_ADC_GxFIFORESETCR------------------*/
/* field: EV_FIFO_RESET - allows the ADC module to overwrite the contents of the Event Group results memory starting from */
#define TMS570_ADC_GxFIFORESETCR_EV_FIFO_RESET BSP_BIT32(0)


/*-------------------TMS570_ADC_EVRAMWRADDR-------------------*/
/* field: G1_RAM_ADDR - Group1 results memory write pointer. */
#define TMS570_ADC_EVRAMWRADDR_G1_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define TMS570_ADC_EVRAMWRADDR_G1_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_ADC_EVRAMWRADDR_G1_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*-------------------TMS570_ADC_G1RAMWRADDR-------------------*/
/* field: G1_RAM_ADDR - Group1 results memory write pointer. */
#define TMS570_ADC_G1RAMWRADDR_G1_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define TMS570_ADC_G1RAMWRADDR_G1_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_ADC_G1RAMWRADDR_G1_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*-------------------TMS570_ADC_G2RAMWRADDR-------------------*/
/* field: G2_RAM_ADDR - Group2 results memory write pointer. */
#define TMS570_ADC_G2RAMWRADDR_G2_RAM_ADDR(val) BSP_FLD32(val,0, 8)
#define TMS570_ADC_G2RAMWRADDR_G2_RAM_ADDR_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_ADC_G2RAMWRADDR_G2_RAM_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*----------------------TMS570_ADC_PARCR----------------------*/
/* field: TEST - This bit maps the parity bits into the ADC results' RAM frame so that the application can access */
#define TMS570_ADC_PARCR_TEST BSP_BIT32(8)

/* field: PARITY_ENA - PARITY ENA */
#define TMS570_ADC_PARCR_PARITY_ENA(val) BSP_FLD32(val,0, 3)
#define TMS570_ADC_PARCR_PARITY_ENA_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_ADC_PARCR_PARITY_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_ADC_PARADDR---------------------*/
/* field: ERROR_ADDRESS - These bits hold the address of the first parity error generated in the ADC results' RAM. */
#define TMS570_ADC_PARADDR_ERROR_ADDRESS(val) BSP_FLD32(val,2, 11)
#define TMS570_ADC_PARADDR_ERROR_ADDRESS_GET(reg) BSP_FLD32GET(reg,2, 11)
#define TMS570_ADC_PARADDR_ERROR_ADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,2, 11)


/*------------------TMS570_ADC_PWRUPDLYCTRL------------------*/
/* field: PWRUP_DLY - This register defines the number of VCLK cycles that the ADC state machine has to wait after */
#define TMS570_ADC_PWRUPDLYCTRL_PWRUP_DLY(val) BSP_FLD32(val,0, 9)
#define TMS570_ADC_PWRUPDLYCTRL_PWRUP_DLY_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_ADC_PWRUPDLYCTRL_PWRUP_DLY_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)



#endif /* LIBBSP_ARM_TMS570_ADC */

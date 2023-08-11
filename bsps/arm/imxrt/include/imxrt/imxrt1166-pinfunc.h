/* SPDX-License-Identifier: BSD-3-Clause */

/**
 * @file
 *
 * @ingroup RTEMSBSPsARMimxrt
 *
 * @brief Pin function definitions for i.MXRT1166.
 *
 * Note: This file is basically a reformatted version of the fsl_iomuxc.h. RTEMS
 * uses a driver based on the FreeBSD iomux driver for the i.mx6. That driver
 * expects a different order of the values.
 */

/*
 * Copyright 2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2021 NXP
 * Copyright (C) 2023 embedded brains GmbH & Co. KG
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
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

#ifndef LIBBSP_ARM_IMXRT_IMXRT1166_PINFUNC_H
#define LIBBSP_ARM_IMXRT_IMXRT1166_PINFUNC_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* LPSR pins. Base address is 0x40c08000 */

#define IMXRT_PAD_GPIO_LPSR_00_FLEXCAN3_TX           0x000 0x040 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_00_MIC_CLK               0x000 0x040 0     0x1 0
#define IMXRT_PAD_GPIO_LPSR_00_MQS_RIGHT             0x000 0x040 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_00_ARM_CM4_EVENTO        0x000 0x040 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_00_GPIO_MUX6_IO00        0x000 0x040 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_00_LPUART12_TXD          0x000 0x040 0x0B0 0x6 0
#define IMXRT_PAD_GPIO_LPSR_00_SAI4_MCLK             0x000 0x040 0x0C8 0x7 0
#define IMXRT_PAD_GPIO_LPSR_00_GPIO12_IO00           0x000 0x040 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_01_FLEXCAN3_RX           0x004 0x044 0x080 0x0 0
#define IMXRT_PAD_GPIO_LPSR_01_MIC_BITSTREAM0        0x004 0x044 0x0B4 0x1 0
#define IMXRT_PAD_GPIO_LPSR_01_MQS_LEFT              0x004 0x044 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_01_ARM_CM4_EVENTI        0x004 0x044 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_01_GPIO_MUX6_IO01        0x004 0x044 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_01_LPUART12_RXD          0x004 0x044 0x0AC 0x6 0
#define IMXRT_PAD_GPIO_LPSR_01_GPIO12_IO01           0x004 0x044 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_02_GPIO12_IO02           0x008 0x048 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_02_SRC_BOOT_MODE00       0x008 0x048 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_02_LPSPI5_SCK            0x008 0x048 0x098 0x1 0
#define IMXRT_PAD_GPIO_LPSR_02_SAI4_TX_DATA          0x008 0x048 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_02_MQS_RIGHT             0x008 0x048 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_02_GPIO_MUX6_IO02        0x008 0x048 0     0x5 0

#define IMXRT_PAD_GPIO_LPSR_03_SRC_BOOT_MODE01       0x00C 0x04C 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_03_LPSPI5_PCS0           0x00C 0x04C 0x094 0x1 0
#define IMXRT_PAD_GPIO_LPSR_03_SAI4_TX_SYNC          0x00C 0x04C 0x0DC 0x2 0
#define IMXRT_PAD_GPIO_LPSR_03_MQS_LEFT              0x00C 0x04C 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_03_GPIO_MUX6_IO03        0x00C 0x04C 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_03_GPIO12_IO03           0x00C 0x04C 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_04_LPI2C5_SDA            0x010 0x050 0x088 0x0 0
#define IMXRT_PAD_GPIO_LPSR_04_LPSPI5_SOUT           0x010 0x050 0x0A0 0x1 0
#define IMXRT_PAD_GPIO_LPSR_04_SAI4_TX_BCLK          0x010 0x050 0x0D8 0x2 0
#define IMXRT_PAD_GPIO_LPSR_04_LPUART12_RTS_B        0x010 0x050 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_04_GPIO_MUX6_IO04        0x010 0x050 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_04_LPUART11_TXD          0x010 0x050 0x0A8 0x6 0
#define IMXRT_PAD_GPIO_LPSR_04_GPIO12_IO04           0x010 0x050 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_05_GPIO12_IO05           0x014 0x054 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_05_LPI2C5_SCL            0x014 0x054 0x084 0x0 0
#define IMXRT_PAD_GPIO_LPSR_05_LPSPI5_SIN            0x014 0x054 0x09C 0x1 0
#define IMXRT_PAD_GPIO_LPSR_05_SAI4_MCLK             0x014 0x054 0x0C8 0x2 1
#define IMXRT_PAD_GPIO_LPSR_05_LPUART12_CTS_B        0x014 0x054 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_05_GPIO_MUX6_IO05        0x014 0x054 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_05_LPUART11_RXD          0x014 0x054 0x0A4 0x6 0
#define IMXRT_PAD_GPIO_LPSR_05_NMI_GLUE_NMI          0x014 0x054 0x0C4 0x7 0

#define IMXRT_PAD_GPIO_LPSR_06_LPI2C6_SDA            0x018 0x058 0x090 0x0 0
#define IMXRT_PAD_GPIO_LPSR_06_SAI4_RX_DATA          0x018 0x058 0x0D0 0x2 0
#define IMXRT_PAD_GPIO_LPSR_06_LPUART12_TXD          0x018 0x058 0x0B0 0x3 1
#define IMXRT_PAD_GPIO_LPSR_06_LPSPI6_PCS3           0x018 0x058 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_06_GPIO_MUX6_IO06        0x018 0x058 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_06_FLEXCAN3_TX           0x018 0x058 0     0x6 0
#define IMXRT_PAD_GPIO_LPSR_06_PIT2_TRIGGER3         0x018 0x058 0     0x7 0
#define IMXRT_PAD_GPIO_LPSR_06_LPSPI5_PCS1           0x018 0x058 0     0x8 0
#define IMXRT_PAD_GPIO_LPSR_06_GPIO12_IO06           0x018 0x058 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_07_LPI2C6_SCL            0x01C 0x05C 0x08C 0x0 0
#define IMXRT_PAD_GPIO_LPSR_07_SAI4_RX_BCLK          0x01C 0x05C 0x0CC 0x2 0
#define IMXRT_PAD_GPIO_LPSR_07_LPUART12_RXD          0x01C 0x05C 0x0AC 0x3 1
#define IMXRT_PAD_GPIO_LPSR_07_LPSPI6_PCS2           0x01C 0x05C 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_07_GPIO_MUX6_IO07        0x01C 0x05C 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_07_FLEXCAN3_RX           0x01C 0x05C 0x080 0x6 1
#define IMXRT_PAD_GPIO_LPSR_07_PIT2_TRIGGER2         0x01C 0x05C 0     0x7 0
#define IMXRT_PAD_GPIO_LPSR_07_LPSPI5_PCS2           0x01C 0x05C 0     0x8 0
#define IMXRT_PAD_GPIO_LPSR_07_GPIO12_IO07           0x01C 0x05C 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_08_GPIO12_IO08           0x020 0x060 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_08_LPUART11_TXD          0x020 0x060 0x0A8 0x0 1
#define IMXRT_PAD_GPIO_LPSR_08_FLEXCAN3_TX           0x020 0x060 0     0x1 0
#define IMXRT_PAD_GPIO_LPSR_08_SAI4_RX_SYNC          0x020 0x060 0x0D4 0x2 0
#define IMXRT_PAD_GPIO_LPSR_08_MIC_CLK               0x020 0x060 0     0x3 0
#define IMXRT_PAD_GPIO_LPSR_08_LPSPI6_PCS1           0x020 0x060 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_08_GPIO_MUX6_IO08        0x020 0x060 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_08_LPI2C5_SDA            0x020 0x060 0x088 0x6 1
#define IMXRT_PAD_GPIO_LPSR_08_PIT2_TRIGGER1         0x020 0x060 0     0x7 0
#define IMXRT_PAD_GPIO_LPSR_08_LPSPI5_PCS3           0x020 0x060 0     0x8 0

#define IMXRT_PAD_GPIO_LPSR_09_GPIO12_IO09           0x024 0x064 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_09_LPUART11_RXD          0x024 0x064 0x0A4 0x0 1
#define IMXRT_PAD_GPIO_LPSR_09_FLEXCAN3_RX           0x024 0x064 0x080 0x1 2
#define IMXRT_PAD_GPIO_LPSR_09_PIT2_TRIGGER0         0x024 0x064 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_09_MIC_BITSTREAM0        0x024 0x064 0x0B4 0x3 1
#define IMXRT_PAD_GPIO_LPSR_09_LPSPI6_PCS0           0x024 0x064 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_09_GPIO_MUX6_IO09        0x024 0x064 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_09_LPI2C5_SCL            0x024 0x064 0x084 0x6 1
#define IMXRT_PAD_GPIO_LPSR_09_SAI4_TX_DATA          0x024 0x064 0     0x7 0

#define IMXRT_PAD_GPIO_LPSR_10_GPIO12_IO10           0x028 0x068 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_10_JTAG_MUX_TRSTB        0x028 0x068 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_10_LPUART11_CTS_B        0x028 0x068 0     0x1 0
#define IMXRT_PAD_GPIO_LPSR_10_LPI2C6_SDA            0x028 0x068 0x090 0x2 1
#define IMXRT_PAD_GPIO_LPSR_10_MIC_BITSTREAM1        0x028 0x068 0x0B8 0x3 0
#define IMXRT_PAD_GPIO_LPSR_10_LPSPI6_SCK            0x028 0x068 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_10_GPIO_MUX6_IO10        0x028 0x068 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_10_LPI2C5_SCLS           0x028 0x068 0     0x6 0
#define IMXRT_PAD_GPIO_LPSR_10_SAI4_TX_SYNC          0x028 0x068 0x0DC 0x7 1
#define IMXRT_PAD_GPIO_LPSR_10_LPUART12_TXD          0x028 0x068 0x0B0 0x8 2

#define IMXRT_PAD_GPIO_LPSR_11_JTAG_MUX_TDO          0x02C 0x06C 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_11_LPUART11_RTS_B        0x02C 0x06C 0     0x1 0
#define IMXRT_PAD_GPIO_LPSR_11_LPI2C6_SCL            0x02C 0x06C 0x08C 0x2 1
#define IMXRT_PAD_GPIO_LPSR_11_MIC_BITSTREAM2        0x02C 0x06C 0x0BC 0x3 0
#define IMXRT_PAD_GPIO_LPSR_11_LPSPI6_SOUT           0x02C 0x06C 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_11_GPIO_MUX6_IO11        0x02C 0x06C 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_11_LPI2C5_SDAS           0x02C 0x06C 0     0x6 0
#define IMXRT_PAD_GPIO_LPSR_11_ARM_TRACE_SWO         0x02C 0x06C 0     0x7 0
#define IMXRT_PAD_GPIO_LPSR_11_LPUART12_RXD          0x02C 0x06C 0x0AC 0x8 2
#define IMXRT_PAD_GPIO_LPSR_11_GPIO12_IO11           0x02C 0x06C 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_12_GPIO12_IO12           0x030 0x070 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_12_JTAG_MUX_TDI          0x030 0x070 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_12_PIT2_TRIGGER0         0x030 0x070 0     0x1 0
#define IMXRT_PAD_GPIO_LPSR_12_MIC_BITSTREAM3        0x030 0x070 0x0C0 0x3 0
#define IMXRT_PAD_GPIO_LPSR_12_LPSPI6_SIN            0x030 0x070 0     0x4 0
#define IMXRT_PAD_GPIO_LPSR_12_GPIO_MUX6_IO12        0x030 0x070 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_12_LPI2C5_HREQ           0x030 0x070 0     0x6 0
#define IMXRT_PAD_GPIO_LPSR_12_SAI4_TX_BCLK          0x030 0x070 0x0D8 0x7 1
#define IMXRT_PAD_GPIO_LPSR_12_LPSPI5_SCK            0x030 0x070 0x098 0x8 1

#define IMXRT_PAD_GPIO_LPSR_13_GPIO12_IO13           0x034 0x074 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_13_JTAG_MUX_MOD          0x034 0x074 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_13_MIC_BITSTREAM1        0x034 0x074 0x0B8 0x1 1
#define IMXRT_PAD_GPIO_LPSR_13_PIT2_TRIGGER1         0x034 0x074 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_13_GPIO_MUX6_IO13        0x034 0x074 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_13_SAI4_RX_DATA          0x034 0x074 0x0D0 0x7 1
#define IMXRT_PAD_GPIO_LPSR_13_LPSPI5_PCS0           0x034 0x074 0x094 0x8 1

#define IMXRT_PAD_GPIO_LPSR_14_JTAG_MUX_TCK          0x038 0x078 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_14_MIC_BITSTREAM2        0x038 0x078 0x0BC 0x1 1
#define IMXRT_PAD_GPIO_LPSR_14_PIT2_TRIGGER2         0x038 0x078 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_14_GPIO_MUX6_IO14        0x038 0x078 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_14_SAI4_RX_BCLK          0x038 0x078 0x0CC 0x7 1
#define IMXRT_PAD_GPIO_LPSR_14_LPSPI5_SOUT           0x038 0x078 0x0A0 0x8 1
#define IMXRT_PAD_GPIO_LPSR_14_GPIO12_IO14           0x038 0x078 0     0xA 0

#define IMXRT_PAD_GPIO_LPSR_15_GPIO12_IO15           0x03C 0x07C 0     0xA 0
#define IMXRT_PAD_GPIO_LPSR_15_JTAG_MUX_TMS          0x03C 0x07C 0     0x0 0
#define IMXRT_PAD_GPIO_LPSR_15_MIC_BITSTREAM3        0x03C 0x07C 0x0C0 0x1 1
#define IMXRT_PAD_GPIO_LPSR_15_PIT2_TRIGGER3         0x03C 0x07C 0     0x2 0
#define IMXRT_PAD_GPIO_LPSR_15_GPIO_MUX6_IO15        0x03C 0x07C 0     0x5 0
#define IMXRT_PAD_GPIO_LPSR_15_SAI4_RX_SYNC          0x03C 0x07C 0x0D4 0x7 1
#define IMXRT_PAD_GPIO_LPSR_15_LPSPI5_SIN            0x03C 0x07C 0x09C 0x8 1

/* SNVS pins. Base address is 0x40c94000 */

#define IMXRT_PAD_WAKEUP_DIG_GPIO13_IO00               0x000 0x040 0 0x5 0
/* NOTE: Can't handle that pin. It's distributed between SNVS and LPSR */
// #define IMXRT_PAD_WAKEUP_DIG_NMI_GLUE_NMI           0x000 0x040 0x40C080C4 0x7 1

#define IMXRT_PAD_PMIC_ON_REQ_DIG_SNVS_LP_PMIC_ON_REQ  0x004 0x044 0 0x0 0
#define IMXRT_PAD_PMIC_ON_REQ_DIG_GPIO13_IO01          0x004 0x044 0 0x5 0

#define IMXRT_PAD_PMIC_STBY_REQ_DIG_CCM_PMIC_VSTBY_REQ 0x008 0x048 0 0x0 0
#define IMXRT_PAD_PMIC_STBY_REQ_DIG_GPIO13_IO02        0x008 0x048 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_00_DIG_SNVS_TAMPER0        0x00C 0x04C 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_00_DIG_GPIO13_IO03         0x00C 0x04C 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_01_DIG_SNVS_TAMPER1        0x010 0x050 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_01_DIG_GPIO13_IO04         0x010 0x050 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_02_DIG_SNVS_TAMPER2        0x014 0x054 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_02_DIG_GPIO13_IO05         0x014 0x054 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_03_DIG_SNVS_TAMPER3        0x018 0x058 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_03_DIG_GPIO13_IO06         0x018 0x058 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_04_DIG_SNVS_TAMPER4        0x01C 0x05C 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_04_DIG_GPIO13_IO07         0x01C 0x05C 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_05_DIG_SNVS_TAMPER5        0x020 0x060 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_05_DIG_GPIO13_IO08         0x020 0x060 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_06_DIG_SNVS_TAMPER6        0x024 0x064 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_06_DIG_GPIO13_IO09         0x024 0x064 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_07_DIG_SNVS_TAMPER7        0x028 0x068 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_07_DIG_GPIO13_IO10         0x028 0x068 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_08_DIG_SNVS_TAMPER8        0x02C 0x06C 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_08_DIG_GPIO13_IO11         0x02C 0x06C 0 0x5 0

#define IMXRT_PAD_GPIO_SNVS_09_DIG_SNVS_TAMPER9        0x030 0x070 0 0x0 0
#define IMXRT_PAD_GPIO_SNVS_09_DIG_GPIO13_IO12         0x030 0x070 0 0x5 0

#define IMXRT_PAD_TEST_MODE_DIG                        0     0x034 0 0   0

#define IMXRT_PAD_POR_B_DIG                            0     0x038 0 0   0

#define IMXRT_PAD_ONOFF_DIG                            0     0x03C 0 0   0

/* Normal pins. Base address is 0x400e8000 */

#define IMXRT_PAD_GPIO_EMC_B1_00_SEMC_DATA00                   0x010 0x254 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_00_FLEXPWM4_PWM0_A               0x010 0x254 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_00_GPIO_MUX1_IO00                0x010 0x254 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_00_FLEXIO1_D00                   0x010 0x254 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_00_GPIO7_IO00                    0x010 0x254 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_01_GPIO7_IO01                    0x014 0x258 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_01_SEMC_DATA01                   0x014 0x258 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_01_FLEXPWM4_PWM0_B               0x014 0x258 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_01_GPIO_MUX1_IO01                0x014 0x258 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_01_FLEXIO1_D01                   0x014 0x258 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_02_SEMC_DATA02                   0x018 0x25C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_02_FLEXPWM4_PWM1_A               0x018 0x25C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_02_GPIO_MUX1_IO02                0x018 0x25C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_02_FLEXIO1_D02                   0x018 0x25C 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_02_GPIO7_IO02                    0x018 0x25C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_03_SEMC_DATA03                   0x01C 0x260 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_03_FLEXPWM4_PWM1_B               0x01C 0x260 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_03_GPIO_MUX1_IO03                0x01C 0x260 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_03_FLEXIO1_D03                   0x01C 0x260 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_03_GPIO7_IO03                    0x01C 0x260 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_04_GPIO7_IO04                    0x020 0x264 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_04_SEMC_DATA04                   0x020 0x264 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_04_FLEXPWM4_PWM2_A               0x020 0x264 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_04_GPIO_MUX1_IO04                0x020 0x264 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_04_FLEXIO1_D04                   0x020 0x264 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_05_SEMC_DATA05                   0x024 0x268 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_05_FLEXPWM4_PWM2_B               0x024 0x268 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_05_GPIO_MUX1_IO05                0x024 0x268 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_05_FLEXIO1_D05                   0x024 0x268 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_05_GPIO7_IO05                    0x024 0x268 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_06_SEMC_DATA06                   0x028 0x26C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_06_FLEXPWM2_PWM0_A               0x028 0x26C 0x518 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_06_GPIO_MUX1_IO06                0x028 0x26C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_06_FLEXIO1_D06                   0x028 0x26C 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_06_GPIO7_IO06                    0x028 0x26C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_07_GPIO7_IO07                    0x02C 0x270 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_07_SEMC_DATA07                   0x02C 0x270 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_07_FLEXPWM2_PWM0_B               0x02C 0x270 0x524 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_07_GPIO_MUX1_IO07                0x02C 0x270 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_07_FLEXIO1_D07                   0x02C 0x270 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_08_SEMC_DM00                     0x030 0x274 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_08_FLEXPWM2_PWM1_A               0x030 0x274 0x51C 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_08_GPIO_MUX1_IO08                0x030 0x274 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_08_FLEXIO1_D08                   0x030 0x274 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_08_GPIO7_IO08                    0x030 0x274 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_09_SEMC_ADDR00                   0x034 0x278 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_09_FLEXPWM2_PWM1_B               0x034 0x278 0x528 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_09_GPT5_CAPTURE1                 0x034 0x278 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_09_GPIO_MUX1_IO09                0x034 0x278 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_09_FLEXIO1_D09                   0x034 0x278 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_09_GPIO7_IO09                    0x034 0x278 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_10_SEMC_ADDR01                   0x038 0x27C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_10_FLEXPWM2_PWM2_A               0x038 0x27C 0x520 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_10_GPT5_CAPTURE2                 0x038 0x27C 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_10_GPIO_MUX1_IO10                0x038 0x27C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_10_FLEXIO1_D10                   0x038 0x27C 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_10_GPIO7_IO10                    0x038 0x27C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_11_GPIO7_IO11                    0x03C 0x280 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_11_SEMC_ADDR02                   0x03C 0x280 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_11_FLEXPWM2_PWM2_B               0x03C 0x280 0x52C 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_11_GPT5_COMPARE1                 0x03C 0x280 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_11_GPIO_MUX1_IO11                0x03C 0x280 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_11_FLEXIO1_D11                   0x03C 0x280 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_12_SEMC_ADDR03                   0x040 0x284 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_12_XBAR1_INOUT04                 0x040 0x284 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_12_GPT5_COMPARE2                 0x040 0x284 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_12_GPIO_MUX1_IO12                0x040 0x284 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_12_FLEXIO1_D12                   0x040 0x284 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_12_GPIO7_IO12                    0x040 0x284 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_13_SEMC_ADDR04                   0x044 0x288 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_13_XBAR1_INOUT05                 0x044 0x288 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_13_GPT5_COMPARE3                 0x044 0x288 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_13_GPIO_MUX1_IO13                0x044 0x288 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_13_FLEXIO1_D13                   0x044 0x288 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_13_GPIO7_IO13                    0x044 0x288 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_14_GPIO7_IO14                    0x048 0x28C 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_14_SEMC_ADDR05                   0x048 0x28C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_14_XBAR1_INOUT06                 0x048 0x28C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_14_GPT5_CLK                      0x048 0x28C 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_14_GPIO_MUX1_IO14                0x048 0x28C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_14_FLEXIO1_D14                   0x048 0x28C 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_15_SEMC_ADDR06                   0x04C 0x290 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_15_XBAR1_INOUT07                 0x04C 0x290 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_15_GPIO_MUX1_IO15                0x04C 0x290 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_15_FLEXIO1_D15                   0x04C 0x290 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_15_GPIO7_IO15                    0x04C 0x290 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_16_SEMC_ADDR07                   0x050 0x294 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_16_XBAR1_INOUT08                 0x050 0x294 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_16_GPIO_MUX1_IO16                0x050 0x294 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_16_FLEXIO1_D16                   0x050 0x294 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_16_GPIO7_IO16                    0x050 0x294 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_17_GPIO7_IO17                    0x054 0x298 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_17_SEMC_ADDR08                   0x054 0x298 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_17_FLEXPWM4_PWM3_A               0x054 0x298 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_17_TMR1_TIMER0                   0x054 0x298 0x63C 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_17_GPIO_MUX1_IO17                0x054 0x298 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_17_FLEXIO1_D17                   0x054 0x298 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_18_SEMC_ADDR09                   0x058 0x29C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_18_FLEXPWM4_PWM3_B               0x058 0x29C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_18_TMR2_TIMER0                   0x058 0x29C 0x648 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_18_GPIO_MUX1_IO18                0x058 0x29C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_18_FLEXIO1_D18                   0x058 0x29C 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_18_GPIO7_IO18                    0x058 0x29C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_19_SEMC_ADDR11                   0x05C 0x2A0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_19_FLEXPWM2_PWM3_A               0x05C 0x2A0 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_19_TMR3_TIMER0                   0x05C 0x2A0 0x654 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_19_GPIO_MUX1_IO19                0x05C 0x2A0 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_19_FLEXIO1_D19                   0x05C 0x2A0 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_19_GPIO7_IO19                    0x05C 0x2A0 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_20_SEMC_ADDR12                   0x060 0x2A4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_20_FLEXPWM2_PWM3_B               0x060 0x2A4 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_20_TMR4_TIMER0                   0x060 0x2A4 0x660 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_20_GPIO_MUX1_IO20                0x060 0x2A4 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_20_FLEXIO1_D20                   0x060 0x2A4 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_20_GPIO7_IO20                    0x060 0x2A4 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_21_GPIO7_IO21                    0x064 0x2A8 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_21_SEMC_BA0                      0x064 0x2A8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_21_FLEXPWM3_PWM3_A               0x064 0x2A8 0x53C 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_21_GPIO_MUX1_IO21                0x064 0x2A8 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_21_FLEXIO1_D21                   0x064 0x2A8 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_22_GPIO7_IO22                    0x068 0x2AC 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_22_SEMC_BA1                      0x068 0x2AC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_22_FLEXPWM3_PWM3_B               0x068 0x2AC 0x54C 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_22_GPIO_MUX1_IO22                0x068 0x2AC 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_22_FLEXIO1_D22                   0x068 0x2AC 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_23_SEMC_ADDR10                   0x06C 0x2B0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_23_FLEXPWM1_PWM0_A               0x06C 0x2B0 0x500 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_23_GPIO_MUX1_IO23                0x06C 0x2B0 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_23_FLEXIO1_D23                   0x06C 0x2B0 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_23_GPIO7_IO23                    0x06C 0x2B0 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_24_GPIO7_IO24                    0x070 0x2B4 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_24_SEMC_CAS                      0x070 0x2B4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_24_FLEXPWM1_PWM0_B               0x070 0x2B4 0x50C 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_24_GPIO_MUX1_IO24                0x070 0x2B4 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_24_FLEXIO1_D24                   0x070 0x2B4 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_25_GPIO7_IO25                    0x074 0x2B8 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_25_SEMC_RAS                      0x074 0x2B8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_25_FLEXPWM1_PWM1_A               0x074 0x2B8 0x504 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_25_GPIO_MUX1_IO25                0x074 0x2B8 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_25_FLEXIO1_D25                   0x074 0x2B8 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_26_SEMC_CLK                      0x078 0x2BC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_26_FLEXPWM1_PWM1_B               0x078 0x2BC 0x510 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_26_GPIO_MUX1_IO26                0x078 0x2BC 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_26_FLEXIO1_D26                   0x078 0x2BC 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_26_GPIO7_IO26                    0x078 0x2BC 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_27_GPIO7_IO27                    0x07C 0x2C0 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_27_SEMC_CKE                      0x07C 0x2C0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_27_FLEXPWM1_PWM2_A               0x07C 0x2C0 0x508 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_27_GPIO_MUX1_IO27                0x07C 0x2C0 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_27_FLEXIO1_D27                   0x07C 0x2C0 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_28_GPIO7_IO28                    0x080 0x2C4 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_28_SEMC_WE                       0x080 0x2C4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_28_FLEXPWM1_PWM2_B               0x080 0x2C4 0x514 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_28_GPIO_MUX1_IO28                0x080 0x2C4 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_28_FLEXIO1_D28                   0x080 0x2C4 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_29_SEMC_CS0                      0x084 0x2C8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_29_FLEXPWM3_PWM0_A               0x084 0x2C8 0x530 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_29_GPIO_MUX1_IO29                0x084 0x2C8 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_29_FLEXIO1_D29                   0x084 0x2C8 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_29_GPIO7_IO29                    0x084 0x2C8 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_30_SEMC_DATA08                   0x088 0x2CC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_30_FLEXPWM3_PWM0_B               0x088 0x2CC 0x540 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_30_GPIO_MUX1_IO30                0x088 0x2CC 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_30_FLEXIO1_D30                   0x088 0x2CC 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B1_30_GPIO7_IO30                    0x088 0x2CC 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_31_GPIO7_IO31                    0x08C 0x2D0 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_31_SEMC_DATA09                   0x08C 0x2D0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_31_FLEXPWM3_PWM1_A               0x08C 0x2D0 0x534 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_31_GPIO_MUX1_IO31                0x08C 0x2D0 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_31_FLEXIO1_D31                   0x08C 0x2D0 0     0x8 0

#define IMXRT_PAD_GPIO_EMC_B1_32_GPIO8_IO00                    0x090 0x2D4 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_32_SEMC_DATA10                   0x090 0x2D4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_32_FLEXPWM3_PWM1_B               0x090 0x2D4 0x544 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_32_GPIO_MUX2_IO00                0x090 0x2D4 0     0x5 0

#define IMXRT_PAD_GPIO_EMC_B1_33_SEMC_DATA11                   0x094 0x2D8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_33_FLEXPWM3_PWM2_A               0x094 0x2D8 0x538 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_33_GPIO_MUX2_IO01                0x094 0x2D8 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_33_GPIO8_IO01                    0x094 0x2D8 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_34_GPIO8_IO02                    0x098 0x2DC 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_34_SEMC_DATA12                   0x098 0x2DC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_34_FLEXPWM3_PWM2_B               0x098 0x2DC 0x548 0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_34_GPIO_MUX2_IO02                0x098 0x2DC 0     0x5 0

#define IMXRT_PAD_GPIO_EMC_B1_35_GPIO8_IO03                    0x09C 0x2E0 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_35_SEMC_DATA13                   0x09C 0x2E0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_35_XBAR1_INOUT09                 0x09C 0x2E0 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_35_GPIO_MUX2_IO03                0x09C 0x2E0 0     0x5 0

#define IMXRT_PAD_GPIO_EMC_B1_36_SEMC_DATA14                   0x0A0 0x2E4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_36_XBAR1_INOUT10                 0x0A0 0x2E4 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_36_GPIO_MUX2_IO04                0x0A0 0x2E4 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_36_GPIO8_IO04                    0x0A0 0x2E4 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_37_GPIO8_IO05                    0x0A4 0x2E8 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_37_SEMC_DATA15                   0x0A4 0x2E8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_37_XBAR1_INOUT11                 0x0A4 0x2E8 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_37_GPIO_MUX2_IO05                0x0A4 0x2E8 0     0x5 0

#define IMXRT_PAD_GPIO_EMC_B1_38_GPIO8_IO06                    0x0A8 0x2EC 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_38_SEMC_DM01                     0x0A8 0x2EC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_38_FLEXPWM1_PWM3_A               0x0A8 0x2EC 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_38_TMR1_TIMER1                   0x0A8 0x2EC 0x640 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_38_GPIO_MUX2_IO06                0x0A8 0x2EC 0     0x5 0

#define IMXRT_PAD_GPIO_EMC_B1_39_SEMC_DQS                      0x0AC 0x2F0 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_39_FLEXPWM1_PWM3_B               0x0AC 0x2F0 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_39_TMR2_TIMER1                   0x0AC 0x2F0 0x64C 0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_39_GPIO_MUX2_IO07                0x0AC 0x2F0 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_39_GPIO8_IO07                    0x0AC 0x2F0 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_40_SEMC_RDY                      0x0B0 0x2F4 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_40_XBAR1_INOUT12                 0x0B0 0x2F4 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_40_MQS_RIGHT                     0x0B0 0x2F4 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_40_LPUART6_TXD                   0x0B0 0x2F4 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B1_40_GPIO_MUX2_IO08                0x0B0 0x2F4 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_40_ENET_1G_MDC                   0x0B0 0x2F4 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B1_40_CCM_CLKO1                     0x0B0 0x2F4 0     0x9 0
#define IMXRT_PAD_GPIO_EMC_B1_40_GPIO8_IO08                    0x0B0 0x2F4 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B1_41_GPIO8_IO09                    0x0B4 0x2F8 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B1_41_SEMC_CSX00                    0x0B4 0x2F8 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B1_41_XBAR1_INOUT13                 0x0B4 0x2F8 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B1_41_MQS_LEFT                      0x0B4 0x2F8 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B1_41_LPUART6_RXD                   0x0B4 0x2F8 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B1_41_FLEXSPI2_B_DATA07             0x0B4 0x2F8 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B1_41_GPIO_MUX2_IO09                0x0B4 0x2F8 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B1_41_ENET_1G_MDIO                  0x0B4 0x2F8 0x4C8 0x7 0
#define IMXRT_PAD_GPIO_EMC_B1_41_CCM_CLKO2                     0x0B4 0x2F8 0     0x9 0

#define IMXRT_PAD_GPIO_EMC_B2_00_SEMC_DATA16                   0x0B8 0x2FC 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_00_CCM_ENET_REF_CLK_25M          0x0B8 0x2FC 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_00_TMR3_TIMER1                   0x0B8 0x2FC 0x658 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_00_LPUART6_CTS_B                 0x0B8 0x2FC 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_00_FLEXSPI2_B_DATA06             0x0B8 0x2FC 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_00_GPIO_MUX2_IO10                0x0B8 0x2FC 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_00_XBAR1_INOUT20                 0x0B8 0x2FC 0x6D8 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_00_ENET_QOS_1588_EVENT1_OUT      0x0B8 0x2FC 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_00_LPSPI1_SCK                    0x0B8 0x2FC 0x5D0 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_00_LPI2C2_SCL                    0x0B8 0x2FC 0x5B4 0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_00_GPIO8_IO10                    0x0B8 0x2FC 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_00_FLEXPWM3_PWM0_A               0x0B8 0x2FC 0x530 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_01_SEMC_DATA17                   0x0BC 0x300 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_01_USDHC2_CD_B                   0x0BC 0x300 0x6D0 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_01_TMR4_TIMER1                   0x0BC 0x300 0x664 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_01_LPUART6_RTS_B                 0x0BC 0x300 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_01_FLEXSPI2_B_DATA05             0x0BC 0x300 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_01_GPIO_MUX2_IO11                0x0BC 0x300 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_01_XBAR1_INOUT21                 0x0BC 0x300 0x6DC 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_01_ENET_QOS_1588_EVENT1_IN       0x0BC 0x300 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_01_LPSPI1_PCS0                   0x0BC 0x300 0x5CC 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_01_LPI2C2_SDA                    0x0BC 0x300 0x5B8 0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_01_GPIO8_IO11                    0x0BC 0x300 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_01_FLEXPWM3_PWM0_B               0x0BC 0x300 0x540 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_02_SEMC_DATA18                   0x0C0 0x304 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_02_USDHC2_WP                     0x0C0 0x304 0x6D4 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_02_VIDEO_MUX_CSI_DATA23          0x0C0 0x304 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_02_FLEXSPI2_B_DATA04             0x0C0 0x304 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_02_GPIO_MUX2_IO12                0x0C0 0x304 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_02_XBAR1_INOUT22                 0x0C0 0x304 0x6E0 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_02_ENET_QOS_1588_EVENT1_AUX_IN   0x0C0 0x304 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_02_LPSPI1_SOUT                   0x0C0 0x304 0x5D8 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_02_GPIO8_IO12                    0x0C0 0x304 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_02_FLEXPWM3_PWM1_A               0x0C0 0x304 0x534 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_03_SEMC_DATA19                   0x0C4 0x308 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_03_USDHC2_VSELECT                0x0C4 0x308 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_03_VIDEO_MUX_CSI_DATA22          0x0C4 0x308 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_03_FLEXSPI2_B_DATA03             0x0C4 0x308 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_03_GPIO_MUX2_IO13                0x0C4 0x308 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_03_XBAR1_INOUT23                 0x0C4 0x308 0x6E4 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_03_ENET_1G_TX_DATA03             0x0C4 0x308 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_03_LPSPI1_SIN                    0x0C4 0x308 0x5D4 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_03_GPIO8_IO13                    0x0C4 0x308 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_03_FLEXPWM3_PWM1_B               0x0C4 0x308 0x544 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_04_SEMC_DATA20                   0x0C8 0x30C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_04_USDHC2_RESET_B                0x0C8 0x30C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_04_SAI2_MCLK                     0x0C8 0x30C 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_04_VIDEO_MUX_CSI_DATA21          0x0C8 0x30C 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_04_FLEXSPI2_B_DATA02             0x0C8 0x30C 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_04_GPIO_MUX2_IO14                0x0C8 0x30C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_04_XBAR1_INOUT24                 0x0C8 0x30C 0x6E8 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_04_ENET_1G_TX_DATA02             0x0C8 0x30C 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_04_LPSPI3_SCK                    0x0C8 0x30C 0x600 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_04_GPIO8_IO14                    0x0C8 0x30C 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_04_FLEXPWM3_PWM2_A               0x0C8 0x30C 0x538 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_05_SEMC_DATA21                   0x0CC 0x310 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_05_GPT3_CLK                      0x0CC 0x310 0x598 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_05_SAI2_RX_SYNC                  0x0CC 0x310 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_05_VIDEO_MUX_CSI_DATA20          0x0CC 0x310 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_05_FLEXSPI2_B_DATA01             0x0CC 0x310 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_05_GPIO_MUX2_IO15                0x0CC 0x310 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_05_XBAR1_INOUT25                 0x0CC 0x310 0x6EC 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_05_ENET_1G_RX_CLK                0x0CC 0x310 0x4CC 0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_05_LPSPI3_PCS0                   0x0CC 0x310 0x5F0 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_05_PIT1_TRIGGER0                 0x0CC 0x310 0     0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_05_GPIO8_IO15                    0x0CC 0x310 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_05_FLEXPWM3_PWM2_B               0x0CC 0x310 0x548 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_06_SEMC_DATA22                   0x0D0 0x314 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_06_GPT3_CAPTURE1                 0x0D0 0x314 0x590 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_06_GPIO8_IO16                    0x0D0 0x314 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_06_SAI2_RX_BCLK                  0x0D0 0x314 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_06_FLEXPWM3_PWM3_A               0x0D0 0x314 0x53C 0xB 1
#define IMXRT_PAD_GPIO_EMC_B2_06_VIDEO_MUX_CSI_DATA19          0x0D0 0x314 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_06_FLEXSPI2_B_DATA00             0x0D0 0x314 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_06_GPIO_MUX2_IO16                0x0D0 0x314 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_06_XBAR1_INOUT26                 0x0D0 0x314 0x6F0 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_06_ENET_1G_TX_ER                 0x0D0 0x314 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_06_LPSPI3_SOUT                   0x0D0 0x314 0x608 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_06_PIT1_TRIGGER1                 0x0D0 0x314 0     0x9 0

#define IMXRT_PAD_GPIO_EMC_B2_07_SEMC_DATA23                   0x0D4 0x318 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_07_GPT3_CAPTURE2                 0x0D4 0x318 0x594 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_07_SAI2_RX_DATA                  0x0D4 0x318 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_07_VIDEO_MUX_CSI_DATA18          0x0D4 0x318 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_07_FLEXSPI2_B_DQS                0x0D4 0x318 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_07_GPIO_MUX2_IO17                0x0D4 0x318 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_07_XBAR1_INOUT27                 0x0D4 0x318 0x6F4 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_07_ENET_1G_RX_DATA03             0x0D4 0x318 0x4DC 0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_07_LPSPI3_SIN                    0x0D4 0x318 0x604 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_07_PIT1_TRIGGER2                 0x0D4 0x318 0     0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_07_GPIO8_IO17                    0x0D4 0x318 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_07_FLEXPWM3_PWM3_B               0x0D4 0x318 0x54C 0xB 1

#define IMXRT_PAD_GPIO_EMC_B2_08_SEMC_DM02                     0x0D8 0x31C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_08_GPT3_COMPARE1                 0x0D8 0x31C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_08_SAI2_TX_DATA                  0x0D8 0x31C 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_08_VIDEO_MUX_CSI_DATA17          0x0D8 0x31C 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_08_FLEXSPI2_B_SS0_B              0x0D8 0x31C 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_08_GPIO_MUX2_IO18                0x0D8 0x31C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_08_XBAR1_INOUT28                 0x0D8 0x31C 0x6F8 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_08_ENET_1G_RX_DATA02             0x0D8 0x31C 0x4D8 0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_08_LPSPI3_PCS1                   0x0D8 0x31C 0x5F4 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_08_PIT1_TRIGGER3                 0x0D8 0x31C 0     0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_08_GPIO8_IO18                    0x0D8 0x31C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_09_GPIO8_IO19                    0x0DC 0x320 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_09_SEMC_DATA24                   0x0DC 0x320 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_09_GPT3_COMPARE2                 0x0DC 0x320 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_09_SAI2_TX_BCLK                  0x0DC 0x320 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_09_VIDEO_MUX_CSI_DATA16          0x0DC 0x320 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_09_FLEXSPI2_B_SCLK               0x0DC 0x320 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_09_GPIO_MUX2_IO19                0x0DC 0x320 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_09_XBAR1_INOUT29                 0x0DC 0x320 0x6FC 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_09_ENET_1G_CRS                   0x0DC 0x320 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_09_LPSPI3_PCS2                   0x0DC 0x320 0x5F8 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_09_TMR1_TIMER0                   0x0DC 0x320 0x63C 0x9 1

#define IMXRT_PAD_GPIO_EMC_B2_10_GPIO8_IO20                    0x0E0 0x324 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_10_SEMC_DATA25                   0x0E0 0x324 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_10_GPT3_COMPARE3                 0x0E0 0x324 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_10_SAI2_TX_SYNC                  0x0E0 0x324 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_10_VIDEO_MUX_CSI_FIELD           0x0E0 0x324 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_10_FLEXSPI2_A_SCLK               0x0E0 0x324 0x58C 0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_10_GPIO_MUX2_IO20                0x0E0 0x324 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_10_XBAR1_INOUT30                 0x0E0 0x324 0x700 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_10_ENET_1G_COL                   0x0E0 0x324 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_10_LPSPI3_PCS3                   0x0E0 0x324 0x5FC 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_10_TMR1_TIMER1                   0x0E0 0x324 0x640 0x9 1

#define IMXRT_PAD_GPIO_EMC_B2_11_SEMC_DATA26                   0x0E4 0x328 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_11_SPDIF_IN                      0x0E4 0x328 0x6B4 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_11_ENET_1G_TX_DATA00             0x0E4 0x328 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_11_SAI3_RX_SYNC                  0x0E4 0x328 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_11_FLEXSPI2_A_SS0_B              0x0E4 0x328 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_11_GPIO_MUX2_IO21                0x0E4 0x328 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_11_XBAR1_INOUT31                 0x0E4 0x328 0x704 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_11_EMVSIM1_IO                    0x0E4 0x328 0x69C 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_11_TMR1_TIMER2                   0x0E4 0x328 0x644 0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_11_GPIO8_IO21                    0x0E4 0x328 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_12_SEMC_DATA27                   0x0E8 0x32C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_12_SPDIF_OUT                     0x0E8 0x32C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_12_ENET_1G_TX_DATA01             0x0E8 0x32C 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_12_SAI3_RX_BCLK                  0x0E8 0x32C 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_12_FLEXSPI2_A_DQS                0x0E8 0x32C 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_12_GPIO_MUX2_IO22                0x0E8 0x32C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_12_XBAR1_INOUT32                 0x0E8 0x32C 0x708 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_12_EMVSIM1_CLK                   0x0E8 0x32C 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_12_TMR1_TIMER3                   0x0E8 0x32C 0     0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_12_GPIO8_IO22                    0x0E8 0x32C 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_13_GPIO8_IO23                    0x0EC 0x330 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_13_SEMC_DATA28                   0x0EC 0x330 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_13_ENET_1G_TX_EN                 0x0EC 0x330 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_13_SAI3_RX_DATA                  0x0EC 0x330 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_13_FLEXSPI2_A_DATA00             0x0EC 0x330 0x57C 0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_13_GPIO_MUX2_IO23                0x0EC 0x330 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_13_XBAR1_INOUT33                 0x0EC 0x330 0x70C 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_13_EMVSIM1_RST                   0x0EC 0x330 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_13_TMR2_TIMER0                   0x0EC 0x330 0x648 0x9 1

#define IMXRT_PAD_GPIO_EMC_B2_14_SEMC_DATA29                   0x0F0 0x334 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_14_ENET_1G_TX_CLK_IO             0x0F0 0x334 0x4E8 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_14_SAI3_TX_DATA                  0x0F0 0x334 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_14_FLEXSPI2_A_DATA01             0x0F0 0x334 0x580 0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_14_GPIO_MUX2_IO24                0x0F0 0x334 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_14_XBAR1_INOUT34                 0x0F0 0x334 0x710 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_14_SFA_ipp_do_atx_clk_under_test 0x0F0 0x334 0     0x7 0
#define IMXRT_PAD_GPIO_EMC_B2_14_EMVSIM1_SVEN                  0x0F0 0x334 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_14_TMR2_TIMER1                   0x0F0 0x334 0x64C 0x9 1
#define IMXRT_PAD_GPIO_EMC_B2_14_GPIO8_IO24                    0x0F0 0x334 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_15_SEMC_DATA30                   0x0F4 0x338 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_15_ENET_1G_RX_DATA00             0x0F4 0x338 0x4D0 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_15_SAI3_TX_BCLK                  0x0F4 0x338 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_15_FLEXSPI2_A_DATA02             0x0F4 0x338 0x584 0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_15_GPIO_MUX2_IO25                0x0F4 0x338 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_15_XBAR1_INOUT35                 0x0F4 0x338 0x714 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_15_EMVSIM1_PD                    0x0F4 0x338 0x6A0 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_15_TMR2_TIMER2                   0x0F4 0x338 0x650 0x9 0
#define IMXRT_PAD_GPIO_EMC_B2_15_GPIO8_IO25                    0x0F4 0x338 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_16_GPIO8_IO26                    0x0F8 0x33C 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_16_SEMC_DATA31                   0x0F8 0x33C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_16_XBAR1_INOUT14                 0x0F8 0x33C 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_16_ENET_1G_RX_DATA01             0x0F8 0x33C 0x4D4 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_16_SAI3_TX_SYNC                  0x0F8 0x33C 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_16_FLEXSPI2_A_DATA03             0x0F8 0x33C 0x588 0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_16_GPIO_MUX2_IO26                0x0F8 0x33C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_16_EMVSIM1_POWER_FAIL            0x0F8 0x33C 0x6A4 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_16_TMR2_TIMER3                   0x0F8 0x33C 0     0x9 0

#define IMXRT_PAD_GPIO_EMC_B2_17_SEMC_DM03                     0x0FC 0x340 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_17_XBAR1_INOUT15                 0x0FC 0x340 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_17_ENET_1G_RX_EN                 0x0FC 0x340 0x4E0 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_17_SAI3_MCLK                     0x0FC 0x340 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_17_FLEXSPI2_A_DATA04             0x0FC 0x340 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_17_GPIO_MUX2_IO27                0x0FC 0x340 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_17_WDOG1_ANY                     0x0FC 0x340 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_17_TMR3_TIMER0                   0x0FC 0x340 0x654 0x9 1
#define IMXRT_PAD_GPIO_EMC_B2_17_GPIO8_IO27                    0x0FC 0x340 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_18_SEMC_DQS4                     0x100 0x344 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_18_XBAR1_INOUT16                 0x100 0x344 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_18_ENET_1G_RX_ER                 0x100 0x344 0x4E4 0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_18_EWM_OUT_B                     0x100 0x344 0     0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_18_FLEXSPI2_A_DATA05             0x100 0x344 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_18_GPIO_MUX2_IO28                0x100 0x344 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_18_FLEXSPI1_A_DQS                0x100 0x344 0x550 0x6 0
#define IMXRT_PAD_GPIO_EMC_B2_18_WDOG1_B                       0x100 0x344 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_18_TMR3_TIMER1                   0x100 0x344 0x658 0x9 1
#define IMXRT_PAD_GPIO_EMC_B2_18_GPIO8_IO28                    0x100 0x344 0     0xA 0

#define IMXRT_PAD_GPIO_EMC_B2_19_GPIO8_IO29                    0x104 0x348 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_19_SEMC_CLKX00                   0x104 0x348 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_19_ENET_MDC                      0x104 0x348 0     0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_19_ENET_1G_MDC                   0x104 0x348 0     0x2 0
#define IMXRT_PAD_GPIO_EMC_B2_19_ENET_1G_REF_CLK               0x104 0x348 0x4C4 0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_19_FLEXSPI2_A_DATA06             0x104 0x348 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_19_GPIO_MUX2_IO29                0x104 0x348 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_19_ENET_QOS_MDC                  0x104 0x348 0     0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_19_TMR3_TIMER2                   0x104 0x348 0x65C 0x9 0

#define IMXRT_PAD_GPIO_EMC_B2_20_GPIO8_IO30                    0x108 0x34C 0     0xA 0
#define IMXRT_PAD_GPIO_EMC_B2_20_SEMC_CLKX01                   0x108 0x34C 0     0x0 0
#define IMXRT_PAD_GPIO_EMC_B2_20_ENET_MDIO                     0x108 0x34C 0x4AC 0x1 0
#define IMXRT_PAD_GPIO_EMC_B2_20_ENET_1G_MDIO                  0x108 0x34C 0x4C8 0x2 1
#define IMXRT_PAD_GPIO_EMC_B2_20_ENET_QOS_REF_CLK              0x108 0x34C 0x4A0 0x3 0
#define IMXRT_PAD_GPIO_EMC_B2_20_FLEXSPI2_A_DATA07             0x108 0x34C 0     0x4 0
#define IMXRT_PAD_GPIO_EMC_B2_20_GPIO_MUX2_IO30                0x108 0x34C 0     0x5 0
#define IMXRT_PAD_GPIO_EMC_B2_20_ENET_QOS_MDIO                 0x108 0x34C 0x4EC 0x8 0
#define IMXRT_PAD_GPIO_EMC_B2_20_TMR3_TIMER3                   0x108 0x34C 0     0x9 0

#define IMXRT_PAD_GPIO_AD_00_GPIO8_IO31                        0x10C 0x350 0     0xA 0
#define IMXRT_PAD_GPIO_AD_00_EMVSIM1_IO                        0x10C 0x350 0x69C 0x0 1
#define IMXRT_PAD_GPIO_AD_00_FLEXCAN2_TX                       0x10C 0x350 0     0x1 0
#define IMXRT_PAD_GPIO_AD_00_ENET_1G_1588_EVENT1_IN            0x10C 0x350 0     0x2 0
#define IMXRT_PAD_GPIO_AD_00_GPT2_CAPTURE1                     0x10C 0x350 0     0x3 0
#define IMXRT_PAD_GPIO_AD_00_FLEXPWM1_PWM0_A                   0x10C 0x350 0x500 0x4 1
#define IMXRT_PAD_GPIO_AD_00_GPIO_MUX2_IO31                    0x10C 0x350 0     0x5 0
#define IMXRT_PAD_GPIO_AD_00_LPUART7_TXD                       0x10C 0x350 0x630 0x6 0
#define IMXRT_PAD_GPIO_AD_00_FLEXIO2_D00                       0x10C 0x350 0     0x8 0
#define IMXRT_PAD_GPIO_AD_00_FLEXSPI2_B_SS1_B                  0x10C 0x350 0     0x9 0

#define IMXRT_PAD_GPIO_AD_01_GPIO9_IO00                        0x110 0x354 0     0xA 0
#define IMXRT_PAD_GPIO_AD_01_EMVSIM1_CLK                       0x110 0x354 0     0x0 0
#define IMXRT_PAD_GPIO_AD_01_FLEXCAN2_RX                       0x110 0x354 0x49C 0x1 0
#define IMXRT_PAD_GPIO_AD_01_ENET_1G_1588_EVENT1_OUT           0x110 0x354 0     0x2 0
#define IMXRT_PAD_GPIO_AD_01_GPT2_CAPTURE2                     0x110 0x354 0     0x3 0
#define IMXRT_PAD_GPIO_AD_01_FLEXPWM1_PWM0_B                   0x110 0x354 0x50C 0x4 1
#define IMXRT_PAD_GPIO_AD_01_GPIO_MUX3_IO00                    0x110 0x354 0     0x5 0
#define IMXRT_PAD_GPIO_AD_01_LPUART7_RXD                       0x110 0x354 0x62C 0x6 0
#define IMXRT_PAD_GPIO_AD_01_FLEXIO2_D01                       0x110 0x354 0     0x8 0
#define IMXRT_PAD_GPIO_AD_01_FLEXSPI2_A_SS1_B                  0x110 0x354 0     0x9 0

#define IMXRT_PAD_GPIO_AD_02_GPIO9_IO01                        0x114 0x358 0     0xA 0
#define IMXRT_PAD_GPIO_AD_02_EMVSIM1_RST                       0x114 0x358 0     0x0 0
#define IMXRT_PAD_GPIO_AD_02_LPUART7_CTS_B                     0x114 0x358 0     0x1 0
#define IMXRT_PAD_GPIO_AD_02_ENET_1G_1588_EVENT2_IN            0x114 0x358 0     0x2 0
#define IMXRT_PAD_GPIO_AD_02_GPT2_COMPARE1                     0x114 0x358 0     0x3 0
#define IMXRT_PAD_GPIO_AD_02_FLEXPWM1_PWM1_A                   0x114 0x358 0x504 0x4 1
#define IMXRT_PAD_GPIO_AD_02_GPIO_MUX3_IO01                    0x114 0x358 0     0x5 0
#define IMXRT_PAD_GPIO_AD_02_LPUART8_TXD                       0x114 0x358 0x638 0x6 0
#define IMXRT_PAD_GPIO_AD_02_FLEXIO2_D02                       0x114 0x358 0     0x8 0
#define IMXRT_PAD_GPIO_AD_02_VIDEO_MUX_EXT_DCIC1               0x114 0x358 0     0x9 0

#define IMXRT_PAD_GPIO_AD_03_GPIO9_IO02                        0x118 0x35C 0     0xA 0
#define IMXRT_PAD_GPIO_AD_03_EMVSIM1_SVEN                      0x118 0x35C 0     0x0 0
#define IMXRT_PAD_GPIO_AD_03_LPUART7_RTS_B                     0x118 0x35C 0     0x1 0
#define IMXRT_PAD_GPIO_AD_03_ENET_1G_1588_EVENT2_OUT           0x118 0x35C 0     0x2 0
#define IMXRT_PAD_GPIO_AD_03_GPT2_COMPARE2                     0x118 0x35C 0     0x3 0
#define IMXRT_PAD_GPIO_AD_03_FLEXPWM1_PWM1_B                   0x118 0x35C 0x510 0x4 1
#define IMXRT_PAD_GPIO_AD_03_GPIO_MUX3_IO02                    0x118 0x35C 0     0x5 0
#define IMXRT_PAD_GPIO_AD_03_LPUART8_RXD                       0x118 0x35C 0x634 0x6 0
#define IMXRT_PAD_GPIO_AD_03_FLEXIO2_D03                       0x118 0x35C 0     0x8 0
#define IMXRT_PAD_GPIO_AD_03_VIDEO_MUX_EXT_DCIC2               0x118 0x35C 0     0x9 0

#define IMXRT_PAD_GPIO_AD_04_EMVSIM1_PD                        0x11C 0x360 0x6A0 0x0 1
#define IMXRT_PAD_GPIO_AD_04_LPUART8_CTS_B                     0x11C 0x360 0     0x1 0
#define IMXRT_PAD_GPIO_AD_04_ENET_1G_1588_EVENT3_IN            0x11C 0x360 0     0x2 0
#define IMXRT_PAD_GPIO_AD_04_GPT2_COMPARE3                     0x11C 0x360 0     0x3 0
#define IMXRT_PAD_GPIO_AD_04_FLEXPWM1_PWM2_A                   0x11C 0x360 0x508 0x4 1
#define IMXRT_PAD_GPIO_AD_04_GPIO_MUX3_IO03                    0x11C 0x360 0     0x5 0
#define IMXRT_PAD_GPIO_AD_04_WDOG1_B                           0x11C 0x360 0     0x6 0
#define IMXRT_PAD_GPIO_AD_04_FLEXIO2_D04                       0x11C 0x360 0     0x8 0
#define IMXRT_PAD_GPIO_AD_04_TMR4_TIMER0                       0x11C 0x360 0x660 0x9 1
#define IMXRT_PAD_GPIO_AD_04_GPIO9_IO03                        0x11C 0x360 0     0xA 0

#define IMXRT_PAD_GPIO_AD_05_EMVSIM1_POWER_FAIL                0x120 0x364 0x6A4 0x0 1
#define IMXRT_PAD_GPIO_AD_05_LPUART8_RTS_B                     0x120 0x364 0     0x1 0
#define IMXRT_PAD_GPIO_AD_05_ENET_1G_1588_EVENT3_OUT           0x120 0x364 0     0x2 0
#define IMXRT_PAD_GPIO_AD_05_GPT2_CLK                          0x120 0x364 0     0x3 0
#define IMXRT_PAD_GPIO_AD_05_FLEXPWM1_PWM2_B                   0x120 0x364 0x514 0x4 1
#define IMXRT_PAD_GPIO_AD_05_GPIO_MUX3_IO04                    0x120 0x364 0     0x5 0
#define IMXRT_PAD_GPIO_AD_05_WDOG2_B                           0x120 0x364 0     0x6 0
#define IMXRT_PAD_GPIO_AD_05_FLEXIO2_D05                       0x120 0x364 0     0x8 0
#define IMXRT_PAD_GPIO_AD_05_TMR4_TIMER1                       0x120 0x364 0x664 0x9 1
#define IMXRT_PAD_GPIO_AD_05_GPIO9_IO04                        0x120 0x364 0     0xA 0

#define IMXRT_PAD_GPIO_AD_06_USB_OTG2_OC                       0x124 0x368 0x6B8 0x0 0
#define IMXRT_PAD_GPIO_AD_06_FLEXCAN1_TX                       0x124 0x368 0     0x1 0
#define IMXRT_PAD_GPIO_AD_06_EMVSIM2_IO                        0x124 0x368 0x6A8 0x2 0
#define IMXRT_PAD_GPIO_AD_06_GPT3_CAPTURE1                     0x124 0x368 0x590 0x3 1
#define IMXRT_PAD_GPIO_AD_06_VIDEO_MUX_CSI_DATA15              0x124 0x368 0     0x4 0
#define IMXRT_PAD_GPIO_AD_06_GPIO_MUX3_IO05                    0x124 0x368 0     0x5 0
#define IMXRT_PAD_GPIO_AD_06_ENET_1588_EVENT1_IN               0x124 0x368 0     0x6 0
#define IMXRT_PAD_GPIO_AD_06_FLEXIO2_D06                       0x124 0x368 0     0x8 0
#define IMXRT_PAD_GPIO_AD_06_TMR4_TIMER2                       0x124 0x368 0x668 0x9 0
#define IMXRT_PAD_GPIO_AD_06_GPIO9_IO05                        0x124 0x368 0     0xA 0
#define IMXRT_PAD_GPIO_AD_06_FLEXPWM1_PWM0_X                   0x124 0x368 0     0xB 0

#define IMXRT_PAD_GPIO_AD_07_USB_OTG2_PWR                      0x128 0x36C 0     0x0 0
#define IMXRT_PAD_GPIO_AD_07_FLEXCAN1_RX                       0x128 0x36C 0x498 0x1 0
#define IMXRT_PAD_GPIO_AD_07_EMVSIM2_CLK                       0x128 0x36C 0     0x2 0
#define IMXRT_PAD_GPIO_AD_07_GPT3_CAPTURE2                     0x128 0x36C 0x594 0x3 1
#define IMXRT_PAD_GPIO_AD_07_VIDEO_MUX_CSI_DATA14              0x128 0x36C 0     0x4 0
#define IMXRT_PAD_GPIO_AD_07_GPIO_MUX3_IO06                    0x128 0x36C 0     0x5 0
#define IMXRT_PAD_GPIO_AD_07_ENET_1588_EVENT1_OUT              0x128 0x36C 0     0x6 0
#define IMXRT_PAD_GPIO_AD_07_FLEXIO2_D07                       0x128 0x36C 0     0x8 0
#define IMXRT_PAD_GPIO_AD_07_TMR4_TIMER3                       0x128 0x36C 0     0x9 0
#define IMXRT_PAD_GPIO_AD_07_GPIO9_IO06                        0x128 0x36C 0     0xA 0
#define IMXRT_PAD_GPIO_AD_07_FLEXPWM1_PWM1_X                   0x128 0x36C 0     0xB 0

#define IMXRT_PAD_GPIO_AD_08_USBPHY2_OTG_ID                    0x12C 0x370 0x6C4 0x0 0
#define IMXRT_PAD_GPIO_AD_08_LPI2C1_SCL                        0x12C 0x370 0x5AC 0x1 0
#define IMXRT_PAD_GPIO_AD_08_EMVSIM2_RST                       0x12C 0x370 0     0x2 0
#define IMXRT_PAD_GPIO_AD_08_GPT3_COMPARE1                     0x12C 0x370 0     0x3 0
#define IMXRT_PAD_GPIO_AD_08_VIDEO_MUX_CSI_DATA13              0x12C 0x370 0     0x4 0
#define IMXRT_PAD_GPIO_AD_08_GPIO_MUX3_IO07                    0x12C 0x370 0     0x5 0
#define IMXRT_PAD_GPIO_AD_08_ENET_1588_EVENT2_IN               0x12C 0x370 0     0x6 0
#define IMXRT_PAD_GPIO_AD_08_FLEXIO2_D08                       0x12C 0x370 0     0x8 0
#define IMXRT_PAD_GPIO_AD_08_GPIO9_IO07                        0x12C 0x370 0     0xA 0
#define IMXRT_PAD_GPIO_AD_08_FLEXPWM1_PWM2_X                   0x12C 0x370 0     0xB 0

#define IMXRT_PAD_GPIO_AD_09_USBPHY1_OTG_ID                    0x130 0x374 0x6C0 0x0 0
#define IMXRT_PAD_GPIO_AD_09_LPI2C1_SDA                        0x130 0x374 0x5B0 0x1 0
#define IMXRT_PAD_GPIO_AD_09_EMVSIM2_SVEN                      0x130 0x374 0     0x2 0
#define IMXRT_PAD_GPIO_AD_09_GPT3_COMPARE2                     0x130 0x374 0     0x3 0
#define IMXRT_PAD_GPIO_AD_09_VIDEO_MUX_CSI_DATA12              0x130 0x374 0     0x4 0
#define IMXRT_PAD_GPIO_AD_09_GPIO_MUX3_IO08                    0x130 0x374 0     0x5 0
#define IMXRT_PAD_GPIO_AD_09_ENET_1588_EVENT2_OUT              0x130 0x374 0     0x6 0
#define IMXRT_PAD_GPIO_AD_09_FLEXIO2_D09                       0x130 0x374 0     0x8 0
#define IMXRT_PAD_GPIO_AD_09_GPIO9_IO08                        0x130 0x374 0     0xA 0
#define IMXRT_PAD_GPIO_AD_09_FLEXPWM1_PWM3_X                   0x130 0x374 0     0xB 0

#define IMXRT_PAD_GPIO_AD_10_USB_OTG1_PWR                      0x134 0x378 0     0x0 0
#define IMXRT_PAD_GPIO_AD_10_LPI2C1_SCLS                       0x134 0x378 0     0x1 0
#define IMXRT_PAD_GPIO_AD_10_EMVSIM2_PD                        0x134 0x378 0x6AC 0x2 0
#define IMXRT_PAD_GPIO_AD_10_GPT3_COMPARE3                     0x134 0x378 0     0x3 0
#define IMXRT_PAD_GPIO_AD_10_VIDEO_MUX_CSI_DATA11              0x134 0x378 0     0x4 0
#define IMXRT_PAD_GPIO_AD_10_GPIO_MUX3_IO09                    0x134 0x378 0     0x5 0
#define IMXRT_PAD_GPIO_AD_10_ENET_1588_EVENT3_IN               0x134 0x378 0     0x6 0
#define IMXRT_PAD_GPIO_AD_10_FLEXIO2_D10                       0x134 0x378 0     0x8 0
#define IMXRT_PAD_GPIO_AD_10_GPIO9_IO09                        0x134 0x378 0     0xA 0
#define IMXRT_PAD_GPIO_AD_10_FLEXPWM2_PWM0_X                   0x134 0x378 0     0xB 0

#define IMXRT_PAD_GPIO_AD_11_USB_OTG1_OC                       0x138 0x37C 0x6BC 0x0 0
#define IMXRT_PAD_GPIO_AD_11_LPI2C1_SDAS                       0x138 0x37C 0     0x1 0
#define IMXRT_PAD_GPIO_AD_11_EMVSIM2_POWER_FAIL                0x138 0x37C 0x6B0 0x2 0
#define IMXRT_PAD_GPIO_AD_11_GPT3_CLK                          0x138 0x37C 0x598 0x3 1
#define IMXRT_PAD_GPIO_AD_11_VIDEO_MUX_CSI_DATA10              0x138 0x37C 0     0x4 0
#define IMXRT_PAD_GPIO_AD_11_GPIO_MUX3_IO10                    0x138 0x37C 0     0x5 0
#define IMXRT_PAD_GPIO_AD_11_ENET_1588_EVENT3_OUT              0x138 0x37C 0     0x6 0
#define IMXRT_PAD_GPIO_AD_11_FLEXIO2_D11                       0x138 0x37C 0     0x8 0
#define IMXRT_PAD_GPIO_AD_11_GPIO9_IO10                        0x138 0x37C 0     0xA 0
#define IMXRT_PAD_GPIO_AD_11_FLEXPWM2_PWM1_X                   0x138 0x37C 0     0xB 0

#define IMXRT_PAD_GPIO_AD_12_SPDIF_LOCK                        0x13C 0x380 0     0x0 0
#define IMXRT_PAD_GPIO_AD_12_LPI2C1_HREQ                       0x13C 0x380 0     0x1 0
#define IMXRT_PAD_GPIO_AD_12_GPT1_CAPTURE1                     0x13C 0x380 0     0x2 0
#define IMXRT_PAD_GPIO_AD_12_FLEXSPI1_B_DATA03                 0x13C 0x380 0x570 0x3 0
#define IMXRT_PAD_GPIO_AD_12_VIDEO_MUX_CSI_PIXCLK              0x13C 0x380 0     0x4 0
#define IMXRT_PAD_GPIO_AD_12_GPIO_MUX3_IO11                    0x13C 0x380 0     0x5 0
#define IMXRT_PAD_GPIO_AD_12_ENET_TX_DATA03                    0x13C 0x380 0     0x6 0
#define IMXRT_PAD_GPIO_AD_12_FLEXIO2_D12                       0x13C 0x380 0     0x8 0
#define IMXRT_PAD_GPIO_AD_12_EWM_OUT_B                         0x13C 0x380 0     0x9 0
#define IMXRT_PAD_GPIO_AD_12_GPIO9_IO11                        0x13C 0x380 0     0xA 0
#define IMXRT_PAD_GPIO_AD_12_FLEXPWM2_PWM2_X                   0x13C 0x380 0     0xB 0

#define IMXRT_PAD_GPIO_AD_13_SPDIF_SR_CLK                      0x140 0x384 0     0x0 0
#define IMXRT_PAD_GPIO_AD_13_PIT1_TRIGGER0                     0x140 0x384 0     0x1 0
#define IMXRT_PAD_GPIO_AD_13_GPT1_CAPTURE2                     0x140 0x384 0     0x2 0
#define IMXRT_PAD_GPIO_AD_13_FLEXSPI1_B_DATA02                 0x140 0x384 0x56C 0x3 0
#define IMXRT_PAD_GPIO_AD_13_VIDEO_MUX_CSI_MCLK                0x140 0x384 0     0x4 0
#define IMXRT_PAD_GPIO_AD_13_GPIO_MUX3_IO12                    0x140 0x384 0     0x5 0
#define IMXRT_PAD_GPIO_AD_13_ENET_TX_DATA02                    0x140 0x384 0     0x6 0
#define IMXRT_PAD_GPIO_AD_13_FLEXIO2_D13                       0x140 0x384 0     0x8 0
#define IMXRT_PAD_GPIO_AD_13_REF_CLK_32K                       0x140 0x384 0     0x9 0
#define IMXRT_PAD_GPIO_AD_13_GPIO9_IO12                        0x140 0x384 0     0xA 0
#define IMXRT_PAD_GPIO_AD_13_FLEXPWM2_PWM3_X                   0x140 0x384 0     0xB 0

#define IMXRT_PAD_GPIO_AD_14_SPDIF_EXT_CLK                     0x144 0x388 0     0x0 0
#define IMXRT_PAD_GPIO_AD_14_REF_CLK_24M                       0x144 0x388 0     0x1 0
#define IMXRT_PAD_GPIO_AD_14_GPT1_COMPARE1                     0x144 0x388 0     0x2 0
#define IMXRT_PAD_GPIO_AD_14_FLEXSPI1_B_DATA01                 0x144 0x388 0x568 0x3 0
#define IMXRT_PAD_GPIO_AD_14_VIDEO_MUX_CSI_VSYNC               0x144 0x388 0     0x4 0
#define IMXRT_PAD_GPIO_AD_14_GPIO_MUX3_IO13                    0x144 0x388 0     0x5 0
#define IMXRT_PAD_GPIO_AD_14_ENET_RX_CLK                       0x144 0x388 0     0x6 0
#define IMXRT_PAD_GPIO_AD_14_FLEXIO2_D14                       0x144 0x388 0     0x8 0
#define IMXRT_PAD_GPIO_AD_14_CCM_ENET_REF_CLK_25M              0x144 0x388 0     0x9 0
#define IMXRT_PAD_GPIO_AD_14_GPIO9_IO13                        0x144 0x388 0     0xA 0
#define IMXRT_PAD_GPIO_AD_14_FLEXPWM3_PWM0_X                   0x144 0x388 0     0xB 0

#define IMXRT_PAD_GPIO_AD_15_GPIO9_IO14                        0x148 0x38C 0     0xA 0
#define IMXRT_PAD_GPIO_AD_15_FLEXPWM3_PWM1_X                   0x148 0x38C 0     0xB 0
#define IMXRT_PAD_GPIO_AD_15_SPDIF_IN                          0x148 0x38C 0x6B4 0x0 1
#define IMXRT_PAD_GPIO_AD_15_LPUART10_TXD                      0x148 0x38C 0x628 0x1 0
#define IMXRT_PAD_GPIO_AD_15_GPT1_COMPARE2                     0x148 0x38C 0     0x2 0
#define IMXRT_PAD_GPIO_AD_15_FLEXSPI1_B_DATA00                 0x148 0x38C 0x564 0x3 0
#define IMXRT_PAD_GPIO_AD_15_VIDEO_MUX_CSI_HSYNC               0x148 0x38C 0     0x4 0
#define IMXRT_PAD_GPIO_AD_15_GPIO_MUX3_IO14                    0x148 0x38C 0     0x5 0
#define IMXRT_PAD_GPIO_AD_15_ENET_TX_ER                        0x148 0x38C 0     0x6 0
#define IMXRT_PAD_GPIO_AD_15_FLEXIO2_D15                       0x148 0x38C 0     0x8 0

#define IMXRT_PAD_GPIO_AD_16_SPDIF_OUT                         0x14C 0x390 0     0x0 0
#define IMXRT_PAD_GPIO_AD_16_LPUART10_RXD                      0x14C 0x390 0x624 0x1 0
#define IMXRT_PAD_GPIO_AD_16_GPT1_COMPARE3                     0x14C 0x390 0     0x2 0
#define IMXRT_PAD_GPIO_AD_16_FLEXSPI1_B_SCLK                   0x14C 0x390 0x578 0x3 0
#define IMXRT_PAD_GPIO_AD_16_VIDEO_MUX_CSI_DATA09              0x14C 0x390 0     0x4 0
#define IMXRT_PAD_GPIO_AD_16_GPIO_MUX3_IO15                    0x14C 0x390 0     0x5 0
#define IMXRT_PAD_GPIO_AD_16_ENET_RX_DATA03                    0x14C 0x390 0     0x6 0
#define IMXRT_PAD_GPIO_AD_16_FLEXIO2_D16                       0x14C 0x390 0     0x8 0
#define IMXRT_PAD_GPIO_AD_16_ENET_1G_MDC                       0x14C 0x390 0     0x9 0
#define IMXRT_PAD_GPIO_AD_16_GPIO9_IO15                        0x14C 0x390 0     0xA 0
#define IMXRT_PAD_GPIO_AD_16_FLEXPWM3_PWM2_X                   0x14C 0x390 0     0xB 0

#define IMXRT_PAD_GPIO_AD_17_SAI1_MCLK                         0x150 0x394 0x66C 0x0 0
#define IMXRT_PAD_GPIO_AD_17_ACMP1_OUT                         0x150 0x394 0     0x1 0
#define IMXRT_PAD_GPIO_AD_17_GPT1_CLK                          0x150 0x394 0     0x2 0
#define IMXRT_PAD_GPIO_AD_17_FLEXSPI1_A_DQS                    0x150 0x394 0x550 0x3 1
#define IMXRT_PAD_GPIO_AD_17_VIDEO_MUX_CSI_DATA08              0x150 0x394 0     0x4 0
#define IMXRT_PAD_GPIO_AD_17_GPIO_MUX3_IO16                    0x150 0x394 0     0x5 0
#define IMXRT_PAD_GPIO_AD_17_ENET_RX_DATA02                    0x150 0x394 0     0x6 0
#define IMXRT_PAD_GPIO_AD_17_FLEXIO2_D17                       0x150 0x394 0     0x8 0
#define IMXRT_PAD_GPIO_AD_17_ENET_1G_MDIO                      0x150 0x394 0x4C8 0x9 2
#define IMXRT_PAD_GPIO_AD_17_GPIO9_IO16                        0x150 0x394 0     0xA 0
#define IMXRT_PAD_GPIO_AD_17_FLEXPWM3_PWM3_X                   0x150 0x394 0     0xB 0

#define IMXRT_PAD_GPIO_AD_18_GPIO9_IO17                        0x154 0x398 0     0xA 0
#define IMXRT_PAD_GPIO_AD_18_FLEXPWM4_PWM0_X                   0x154 0x398 0     0xB 0
#define IMXRT_PAD_GPIO_AD_18_SAI1_RX_SYNC                      0x154 0x398 0x678 0x0 0
#define IMXRT_PAD_GPIO_AD_18_ACMP2_OUT                         0x154 0x398 0     0x1 0
#define IMXRT_PAD_GPIO_AD_18_LPSPI1_PCS1                       0x154 0x398 0     0x2 0
#define IMXRT_PAD_GPIO_AD_18_FLEXSPI1_A_SS0_B                  0x154 0x398 0     0x3 0
#define IMXRT_PAD_GPIO_AD_18_VIDEO_MUX_CSI_DATA07              0x154 0x398 0     0x4 0
#define IMXRT_PAD_GPIO_AD_18_GPIO_MUX3_IO17                    0x154 0x398 0     0x5 0
#define IMXRT_PAD_GPIO_AD_18_ENET_CRS                          0x154 0x398 0     0x6 0
#define IMXRT_PAD_GPIO_AD_18_FLEXIO2_D18                       0x154 0x398 0     0x8 0
#define IMXRT_PAD_GPIO_AD_18_LPI2C2_SCL                        0x154 0x398 0x5B4 0x9 1

#define IMXRT_PAD_GPIO_AD_19_SAI1_RX_BCLK                      0x158 0x39C 0x670 0x0 0
#define IMXRT_PAD_GPIO_AD_19_ACMP3_OUT                         0x158 0x39C 0     0x1 0
#define IMXRT_PAD_GPIO_AD_19_LPSPI1_PCS2                       0x158 0x39C 0     0x2 0
#define IMXRT_PAD_GPIO_AD_19_FLEXSPI1_A_SCLK                   0x158 0x39C 0x574 0x3 0
#define IMXRT_PAD_GPIO_AD_19_VIDEO_MUX_CSI_DATA06              0x158 0x39C 0     0x4 0
#define IMXRT_PAD_GPIO_AD_19_GPIO_MUX3_IO18                    0x158 0x39C 0     0x5 0
#define IMXRT_PAD_GPIO_AD_19_ENET_COL                          0x158 0x39C 0     0x6 0
#define IMXRT_PAD_GPIO_AD_19_FLEXIO2_D19                       0x158 0x39C 0     0x8 0
#define IMXRT_PAD_GPIO_AD_19_LPI2C2_SDA                        0x158 0x39C 0x5B8 0x9 1
#define IMXRT_PAD_GPIO_AD_19_GPIO9_IO18                        0x158 0x39C 0     0xA 0
#define IMXRT_PAD_GPIO_AD_19_FLEXPWM4_PWM1_X                   0x158 0x39C 0     0xB 0

#define IMXRT_PAD_GPIO_AD_20_SAI1_RX_DATA00                    0x15C 0x3A0 0x674 0x0 0
#define IMXRT_PAD_GPIO_AD_20_ACMP4_OUT                         0x15C 0x3A0 0     0x1 0
#define IMXRT_PAD_GPIO_AD_20_LPSPI1_PCS3                       0x15C 0x3A0 0     0x2 0
#define IMXRT_PAD_GPIO_AD_20_FLEXSPI1_A_DATA00                 0x15C 0x3A0 0x554 0x3 0
#define IMXRT_PAD_GPIO_AD_20_VIDEO_MUX_CSI_DATA05              0x15C 0x3A0 0     0x4 0
#define IMXRT_PAD_GPIO_AD_20_GPIO_MUX3_IO19                    0x15C 0x3A0 0     0x5 0
#define IMXRT_PAD_GPIO_AD_20_KPP_ROW07                         0x15C 0x3A0 0x5A8 0x6 0
#define IMXRT_PAD_GPIO_AD_20_FLEXIO2_D20                       0x15C 0x3A0 0     0x8 0
#define IMXRT_PAD_GPIO_AD_20_ENET_QOS_1588_EVENT2_OUT          0x15C 0x3A0 0     0x9 0
#define IMXRT_PAD_GPIO_AD_20_GPIO9_IO19                        0x15C 0x3A0 0     0xA 0
#define IMXRT_PAD_GPIO_AD_20_FLEXPWM4_PWM2_X                   0x15C 0x3A0 0     0xB 0

#define IMXRT_PAD_GPIO_AD_21_SAI1_TX_DATA00                    0x160 0x3A4 0     0x0 0
#define IMXRT_PAD_GPIO_AD_21_LPSPI2_PCS1                       0x160 0x3A4 0x5E0 0x2 0
#define IMXRT_PAD_GPIO_AD_21_FLEXSPI1_A_DATA01                 0x160 0x3A4 0x558 0x3 0
#define IMXRT_PAD_GPIO_AD_21_VIDEO_MUX_CSI_DATA04              0x160 0x3A4 0     0x4 0
#define IMXRT_PAD_GPIO_AD_21_GPIO_MUX3_IO20                    0x160 0x3A4 0     0x5 0
#define IMXRT_PAD_GPIO_AD_21_KPP_COL07                         0x160 0x3A4 0x5A0 0x6 0
#define IMXRT_PAD_GPIO_AD_21_FLEXIO2_D21                       0x160 0x3A4 0     0x8 0
#define IMXRT_PAD_GPIO_AD_21_ENET_QOS_1588_EVENT2_IN           0x160 0x3A4 0     0x9 0
#define IMXRT_PAD_GPIO_AD_21_GPIO9_IO20                        0x160 0x3A4 0     0xA 0
#define IMXRT_PAD_GPIO_AD_21_FLEXPWM4_PWM3_X                   0x160 0x3A4 0     0xB 0

#define IMXRT_PAD_GPIO_AD_22_GPIO9_IO21                        0x164 0x3A8 0     0xA 0
#define IMXRT_PAD_GPIO_AD_22_SAI1_TX_BCLK                      0x164 0x3A8 0x67C 0x0 0
#define IMXRT_PAD_GPIO_AD_22_LPSPI2_PCS2                       0x164 0x3A8 0     0x2 0
#define IMXRT_PAD_GPIO_AD_22_FLEXSPI1_A_DATA02                 0x164 0x3A8 0x55C 0x3 0
#define IMXRT_PAD_GPIO_AD_22_VIDEO_MUX_CSI_DATA03              0x164 0x3A8 0     0x4 0
#define IMXRT_PAD_GPIO_AD_22_GPIO_MUX3_IO21                    0x164 0x3A8 0     0x5 0
#define IMXRT_PAD_GPIO_AD_22_KPP_ROW06                         0x164 0x3A8 0x5A4 0x6 0
#define IMXRT_PAD_GPIO_AD_22_FLEXIO2_D22                       0x164 0x3A8 0     0x8 0
#define IMXRT_PAD_GPIO_AD_22_ENET_QOS_1588_EVENT3_OUT          0x164 0x3A8 0     0x9 0

#define IMXRT_PAD_GPIO_AD_23_SAI1_TX_SYNC                      0x168 0x3AC 0x680 0x0 0
#define IMXRT_PAD_GPIO_AD_23_LPSPI2_PCS3                       0x168 0x3AC 0     0x2 0
#define IMXRT_PAD_GPIO_AD_23_FLEXSPI1_A_DATA03                 0x168 0x3AC 0x560 0x3 0
#define IMXRT_PAD_GPIO_AD_23_VIDEO_MUX_CSI_DATA02              0x168 0x3AC 0     0x4 0
#define IMXRT_PAD_GPIO_AD_23_GPIO_MUX3_IO22                    0x168 0x3AC 0     0x5 0
#define IMXRT_PAD_GPIO_AD_23_KPP_COL06                         0x168 0x3AC 0x59C 0x6 0
#define IMXRT_PAD_GPIO_AD_23_FLEXIO2_D23                       0x168 0x3AC 0     0x8 0
#define IMXRT_PAD_GPIO_AD_23_ENET_QOS_1588_EVENT3_IN           0x168 0x3AC 0     0x9 0
#define IMXRT_PAD_GPIO_AD_23_GPIO9_IO22                        0x168 0x3AC 0     0xA 0

#define IMXRT_PAD_GPIO_AD_24_LPUART1_TXD                       0x16C 0x3B0 0x620 0x0 0
#define IMXRT_PAD_GPIO_AD_24_LPSPI2_SCK                        0x16C 0x3B0 0x5E4 0x1 0
#define IMXRT_PAD_GPIO_AD_24_VIDEO_MUX_CSI_DATA00              0x16C 0x3B0 0     0x2 0
#define IMXRT_PAD_GPIO_AD_24_ENET_RX_EN                        0x16C 0x3B0 0x4B8 0x3 0
#define IMXRT_PAD_GPIO_AD_24_FLEXPWM2_PWM0_A                   0x16C 0x3B0 0x518 0x4 1
#define IMXRT_PAD_GPIO_AD_24_GPIO_MUX3_IO23                    0x16C 0x3B0 0     0x5 0
#define IMXRT_PAD_GPIO_AD_24_KPP_ROW05                         0x16C 0x3B0 0     0x6 0
#define IMXRT_PAD_GPIO_AD_24_FLEXIO2_D24                       0x16C 0x3B0 0     0x8 0
#define IMXRT_PAD_GPIO_AD_24_LPI2C4_SCL                        0x16C 0x3B0 0x5C4 0x9 0
#define IMXRT_PAD_GPIO_AD_24_GPIO9_IO23                        0x16C 0x3B0 0     0xA 0

#define IMXRT_PAD_GPIO_AD_25_GPIO9_IO24                        0x170 0x3B4 0     0xA 0
#define IMXRT_PAD_GPIO_AD_25_LPUART1_RXD                       0x170 0x3B4 0x61C 0x0 0
#define IMXRT_PAD_GPIO_AD_25_LPSPI2_PCS0                       0x170 0x3B4 0x5DC 0x1 0
#define IMXRT_PAD_GPIO_AD_25_VIDEO_MUX_CSI_DATA01              0x170 0x3B4 0     0x2 0
#define IMXRT_PAD_GPIO_AD_25_ENET_RX_ER                        0x170 0x3B4 0x4BC 0x3 0
#define IMXRT_PAD_GPIO_AD_25_FLEXPWM2_PWM0_B                   0x170 0x3B4 0x524 0x4 1
#define IMXRT_PAD_GPIO_AD_25_GPIO_MUX3_IO24                    0x170 0x3B4 0     0x5 0
#define IMXRT_PAD_GPIO_AD_25_KPP_COL05                         0x170 0x3B4 0     0x6 0
#define IMXRT_PAD_GPIO_AD_25_FLEXIO2_D25                       0x170 0x3B4 0     0x8 0
#define IMXRT_PAD_GPIO_AD_25_LPI2C4_SDA                        0x170 0x3B4 0x5C8 0x9 0

#define IMXRT_PAD_GPIO_AD_26_LPUART1_CTS_B                     0x174 0x3B8 0     0x0 0
#define IMXRT_PAD_GPIO_AD_26_LPSPI2_SOUT                       0x174 0x3B8 0x5EC 0x1 0
#define IMXRT_PAD_GPIO_AD_26_SEMC_CSX01                        0x174 0x3B8 0     0x2 0
#define IMXRT_PAD_GPIO_AD_26_ENET_RX_DATA00                    0x174 0x3B8 0x4B0 0x3 0
#define IMXRT_PAD_GPIO_AD_26_FLEXPWM2_PWM1_A                   0x174 0x3B8 0x51C 0x4 1
#define IMXRT_PAD_GPIO_AD_26_GPIO_MUX3_IO25                    0x174 0x3B8 0     0x5 0
#define IMXRT_PAD_GPIO_AD_26_KPP_ROW04                         0x174 0x3B8 0     0x6 0
#define IMXRT_PAD_GPIO_AD_26_FLEXIO2_D26                       0x174 0x3B8 0     0x8 0
#define IMXRT_PAD_GPIO_AD_26_ENET_QOS_MDC                      0x174 0x3B8 0     0x9 0
#define IMXRT_PAD_GPIO_AD_26_GPIO9_IO25                        0x174 0x3B8 0     0xA 0
#define IMXRT_PAD_GPIO_AD_26_USDHC2_CD_B                       0x174 0x3B8 0x6D0 0xB 1

#define IMXRT_PAD_GPIO_AD_27_LPUART1_RTS_B                     0x178 0x3BC 0     0x0 0
#define IMXRT_PAD_GPIO_AD_27_LPSPI2_SIN                        0x178 0x3BC 0x5E8 0x1 0
#define IMXRT_PAD_GPIO_AD_27_SEMC_CSX02                        0x178 0x3BC 0     0x2 0
#define IMXRT_PAD_GPIO_AD_27_ENET_RX_DATA01                    0x178 0x3BC 0x4B4 0x3 0
#define IMXRT_PAD_GPIO_AD_27_FLEXPWM2_PWM1_B                   0x178 0x3BC 0x528 0x4 1
#define IMXRT_PAD_GPIO_AD_27_GPIO_MUX3_IO26                    0x178 0x3BC 0     0x5 0
#define IMXRT_PAD_GPIO_AD_27_KPP_COL04                         0x178 0x3BC 0     0x6 0
#define IMXRT_PAD_GPIO_AD_27_FLEXIO2_D27                       0x178 0x3BC 0     0x8 0
#define IMXRT_PAD_GPIO_AD_27_ENET_QOS_MDIO                     0x178 0x3BC 0x4EC 0x9 1
#define IMXRT_PAD_GPIO_AD_27_GPIO9_IO26                        0x178 0x3BC 0     0xA 0
#define IMXRT_PAD_GPIO_AD_27_USDHC2_WP                         0x178 0x3BC 0x6D4 0xB 1

#define IMXRT_PAD_GPIO_AD_28_GPIO9_IO27                        0x17C 0x3C0 0     0xA 0
#define IMXRT_PAD_GPIO_AD_28_USDHC2_VSELECT                    0x17C 0x3C0 0     0xB 0
#define IMXRT_PAD_GPIO_AD_28_LPSPI1_SCK                        0x17C 0x3C0 0x5D0 0x0 1
#define IMXRT_PAD_GPIO_AD_28_LPUART5_TXD                       0x17C 0x3C0 0     0x1 0
#define IMXRT_PAD_GPIO_AD_28_SEMC_CSX03                        0x17C 0x3C0 0     0x2 0
#define IMXRT_PAD_GPIO_AD_28_ENET_TX_EN                        0x17C 0x3C0 0     0x3 0
#define IMXRT_PAD_GPIO_AD_28_FLEXPWM2_PWM2_A                   0x17C 0x3C0 0x520 0x4 1
#define IMXRT_PAD_GPIO_AD_28_GPIO_MUX3_IO27                    0x17C 0x3C0 0     0x5 0
#define IMXRT_PAD_GPIO_AD_28_KPP_ROW03                         0x17C 0x3C0 0     0x6 0
#define IMXRT_PAD_GPIO_AD_28_FLEXIO2_D28                       0x17C 0x3C0 0     0x8 0
#define IMXRT_PAD_GPIO_AD_28_VIDEO_MUX_EXT_DCIC1               0x17C 0x3C0 0     0x9 0

#define IMXRT_PAD_GPIO_AD_29_LPSPI1_PCS0                       0x180 0x3C4 0x5CC 0x0 1
#define IMXRT_PAD_GPIO_AD_29_LPUART5_RXD                       0x180 0x3C4 0     0x1 0
#define IMXRT_PAD_GPIO_AD_29_ENET_REF_CLK                      0x180 0x3C4 0x4A8 0x2 0
#define IMXRT_PAD_GPIO_AD_29_ENET_TX_CLK                       0x180 0x3C4 0x4C0 0x3 0
#define IMXRT_PAD_GPIO_AD_29_FLEXPWM2_PWM2_B                   0x180 0x3C4 0x52C 0x4 1
#define IMXRT_PAD_GPIO_AD_29_GPIO_MUX3_IO28                    0x180 0x3C4 0     0x5 0
#define IMXRT_PAD_GPIO_AD_29_KPP_COL03                         0x180 0x3C4 0     0x6 0
#define IMXRT_PAD_GPIO_AD_29_FLEXIO2_D29                       0x180 0x3C4 0     0x8 0
#define IMXRT_PAD_GPIO_AD_29_VIDEO_MUX_EXT_DCIC2               0x180 0x3C4 0     0x9 0
#define IMXRT_PAD_GPIO_AD_29_GPIO9_IO28                        0x180 0x3C4 0     0xA 0
#define IMXRT_PAD_GPIO_AD_29_USDHC2_RESET_B                    0x180 0x3C4 0     0xB 0

#define IMXRT_PAD_GPIO_AD_30_LPSPI1_SOUT                       0x184 0x3C8 0x5D8 0x0 1
#define IMXRT_PAD_GPIO_AD_30_USB_OTG2_OC                       0x184 0x3C8 0x6B8 0x1 1
#define IMXRT_PAD_GPIO_AD_30_FLEXCAN2_TX                       0x184 0x3C8 0     0x2 0
#define IMXRT_PAD_GPIO_AD_30_ENET_TX_DATA00                    0x184 0x3C8 0     0x3 0
#define IMXRT_PAD_GPIO_AD_30_LPUART3_TXD                       0x184 0x3C8 0     0x4 0
#define IMXRT_PAD_GPIO_AD_30_GPIO_MUX3_IO29                    0x184 0x3C8 0     0x5 0
#define IMXRT_PAD_GPIO_AD_30_KPP_ROW02                         0x184 0x3C8 0     0x6 0
#define IMXRT_PAD_GPIO_AD_30_FLEXIO2_D30                       0x184 0x3C8 0     0x8 0
#define IMXRT_PAD_GPIO_AD_30_WDOG2_RESET_B_DEB                 0x184 0x3C8 0     0x9 0
#define IMXRT_PAD_GPIO_AD_30_GPIO9_IO29                        0x184 0x3C8 0     0xA 0

#define IMXRT_PAD_GPIO_AD_31_LPSPI1_SIN                        0x188 0x3CC 0x5D4 0x0 1
#define IMXRT_PAD_GPIO_AD_31_USB_OTG2_PWR                      0x188 0x3CC 0     0x1 0
#define IMXRT_PAD_GPIO_AD_31_FLEXCAN2_RX                       0x188 0x3CC 0x49C 0x2 1
#define IMXRT_PAD_GPIO_AD_31_ENET_TX_DATA01                    0x188 0x3CC 0     0x3 0
#define IMXRT_PAD_GPIO_AD_31_LPUART3_RXD                       0x188 0x3CC 0     0x4 0
#define IMXRT_PAD_GPIO_AD_31_GPIO_MUX3_IO30                    0x188 0x3CC 0     0x5 0
#define IMXRT_PAD_GPIO_AD_31_KPP_COL02                         0x188 0x3CC 0     0x6 0
#define IMXRT_PAD_GPIO_AD_31_FLEXIO2_D31                       0x188 0x3CC 0     0x8 0
#define IMXRT_PAD_GPIO_AD_31_WDOG1_RESET_B_DEB                 0x188 0x3CC 0     0x9 0
#define IMXRT_PAD_GPIO_AD_31_GPIO9_IO30                        0x188 0x3CC 0     0xA 0

#define IMXRT_PAD_GPIO_AD_32_GPIO9_IO31                        0x18C 0x3D0 0     0xA 0
#define IMXRT_PAD_GPIO_AD_32_LPI2C1_SCL                        0x18C 0x3D0 0x5AC 0x0 1
#define IMXRT_PAD_GPIO_AD_32_USBPHY2_OTG_ID                    0x18C 0x3D0 0x6C4 0x1 1
#define IMXRT_PAD_GPIO_AD_32_PGMC_PMIC_RDY                     0x18C 0x3D0 0     0x2 0
#define IMXRT_PAD_GPIO_AD_32_ENET_MDC                          0x18C 0x3D0 0     0x3 0
#define IMXRT_PAD_GPIO_AD_32_USDHC1_CD_B                       0x18C 0x3D0 0x6C8 0x4 0
#define IMXRT_PAD_GPIO_AD_32_GPIO_MUX3_IO31                    0x18C 0x3D0 0     0x5 0
#define IMXRT_PAD_GPIO_AD_32_KPP_ROW01                         0x18C 0x3D0 0     0x6 0
#define IMXRT_PAD_GPIO_AD_32_LPUART10_TXD                      0x18C 0x3D0 0x628 0x8 1
#define IMXRT_PAD_GPIO_AD_32_ENET_1G_MDC                       0x18C 0x3D0 0     0x9 0

#define IMXRT_PAD_GPIO_AD_33_LPI2C1_SDA                        0x190 0x3D4 0x5B0 0x0 1
#define IMXRT_PAD_GPIO_AD_33_USBPHY1_OTG_ID                    0x190 0x3D4 0x6C0 0x1 1
#define IMXRT_PAD_GPIO_AD_33_XBAR1_INOUT17                     0x190 0x3D4 0     0x2 0
#define IMXRT_PAD_GPIO_AD_33_ENET_MDIO                         0x190 0x3D4 0x4AC 0x3 1
#define IMXRT_PAD_GPIO_AD_33_USDHC1_WP                         0x190 0x3D4 0x6CC 0x4 0
#define IMXRT_PAD_GPIO_AD_33_GPIO_MUX4_IO00                    0x190 0x3D4 0     0x5 0
#define IMXRT_PAD_GPIO_AD_33_KPP_COL01                         0x190 0x3D4 0     0x6 0
#define IMXRT_PAD_GPIO_AD_33_LPUART10_RXD                      0x190 0x3D4 0x624 0x8 1
#define IMXRT_PAD_GPIO_AD_33_ENET_1G_MDIO                      0x190 0x3D4 0x4C8 0x9 3
#define IMXRT_PAD_GPIO_AD_33_GPIO10_IO00                       0x190 0x3D4 0     0xA 0

#define IMXRT_PAD_GPIO_AD_34_ENET_1G_1588_EVENT0_IN            0x194 0x3D8 0     0x0 0
#define IMXRT_PAD_GPIO_AD_34_USB_OTG1_PWR                      0x194 0x3D8 0     0x1 0
#define IMXRT_PAD_GPIO_AD_34_XBAR1_INOUT18                     0x194 0x3D8 0     0x2 0
#define IMXRT_PAD_GPIO_AD_34_ENET_1588_EVENT0_IN               0x194 0x3D8 0     0x3 0
#define IMXRT_PAD_GPIO_AD_34_USDHC1_VSELECT                    0x194 0x3D8 0     0x4 0
#define IMXRT_PAD_GPIO_AD_34_GPIO_MUX4_IO01                    0x194 0x3D8 0     0x5 0
#define IMXRT_PAD_GPIO_AD_34_KPP_ROW00                         0x194 0x3D8 0     0x6 0
#define IMXRT_PAD_GPIO_AD_34_LPUART10_CTS_B                    0x194 0x3D8 0     0x8 0
#define IMXRT_PAD_GPIO_AD_34_WDOG1_ANY                         0x194 0x3D8 0     0x9 0
#define IMXRT_PAD_GPIO_AD_34_GPIO10_IO01                       0x194 0x3D8 0     0xA 0

#define IMXRT_PAD_GPIO_AD_35_GPIO10_IO02                       0x198 0x3DC 0     0xA 0
#define IMXRT_PAD_GPIO_AD_35_ENET_1G_1588_EVENT0_OUT           0x198 0x3DC 0     0x0 0
#define IMXRT_PAD_GPIO_AD_35_USB_OTG1_OC                       0x198 0x3DC 0x6BC 0x1 1
#define IMXRT_PAD_GPIO_AD_35_XBAR1_INOUT19                     0x198 0x3DC 0     0x2 0
#define IMXRT_PAD_GPIO_AD_35_ENET_1588_EVENT0_OUT              0x198 0x3DC 0     0x3 0
#define IMXRT_PAD_GPIO_AD_35_USDHC1_RESET_B                    0x198 0x3DC 0     0x4 0
#define IMXRT_PAD_GPIO_AD_35_GPIO_MUX4_IO02                    0x198 0x3DC 0     0x5 0
#define IMXRT_PAD_GPIO_AD_35_KPP_COL00                         0x198 0x3DC 0     0x6 0
#define IMXRT_PAD_GPIO_AD_35_LPUART10_RTS_B                    0x198 0x3DC 0     0x8 0
#define IMXRT_PAD_GPIO_AD_35_FLEXSPI1_B_SS1_B                  0x198 0x3DC 0     0x9 0

#define IMXRT_PAD_GPIO_SD_B1_00_USDHC1_CMD                     0x19C 0x3E0 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_00_XBAR1_INOUT20                  0x19C 0x3E0 0x6D8 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_00_GPT4_CAPTURE1                  0x19C 0x3E0 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_00_GPIO_MUX4_IO03                 0x19C 0x3E0 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_00_FLEXSPI2_A_SS0_B               0x19C 0x3E0 0     0x6 0
#define IMXRT_PAD_GPIO_SD_B1_00_KPP_ROW07                      0x19C 0x3E0 0x5A8 0x8 1
#define IMXRT_PAD_GPIO_SD_B1_00_GPIO10_IO03                    0x19C 0x3E0 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B1_01_USDHC1_CLK                     0x1A0 0x3E4 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_01_XBAR1_INOUT21                  0x1A0 0x3E4 0x6DC 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_01_GPT4_CAPTURE2                  0x1A0 0x3E4 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_01_GPIO_MUX4_IO04                 0x1A0 0x3E4 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_01_FLEXSPI2_A_SCLK                0x1A0 0x3E4 0x58C 0x6 1
#define IMXRT_PAD_GPIO_SD_B1_01_KPP_COL07                      0x1A0 0x3E4 0x5A0 0x8 1
#define IMXRT_PAD_GPIO_SD_B1_01_GPIO10_IO04                    0x1A0 0x3E4 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B1_02_GPIO10_IO05                    0x1A4 0x3E8 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B1_02_USDHC1_DATA0                   0x1A4 0x3E8 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_02_XBAR1_INOUT22                  0x1A4 0x3E8 0x6E0 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_02_GPT4_COMPARE1                  0x1A4 0x3E8 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_02_GPIO_MUX4_IO05                 0x1A4 0x3E8 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_02_FLEXSPI2_A_DATA00              0x1A4 0x3E8 0x57C 0x6 1
#define IMXRT_PAD_GPIO_SD_B1_02_KPP_ROW06                      0x1A4 0x3E8 0x5A4 0x8 1
#define IMXRT_PAD_GPIO_SD_B1_02_FLEXSPI1_A_SS1_B               0x1A4 0x3E8 0     0x9 0

#define IMXRT_PAD_GPIO_SD_B1_03_USDHC1_DATA1                   0x1A8 0x3EC 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_03_XBAR1_INOUT23                  0x1A8 0x3EC 0x6E4 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_03_GPT4_COMPARE2                  0x1A8 0x3EC 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_03_GPIO_MUX4_IO06                 0x1A8 0x3EC 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_03_FLEXSPI2_A_DATA01              0x1A8 0x3EC 0x580 0x6 1
#define IMXRT_PAD_GPIO_SD_B1_03_KPP_COL06                      0x1A8 0x3EC 0x59C 0x8 1
#define IMXRT_PAD_GPIO_SD_B1_03_FLEXSPI1_B_SS1_B               0x1A8 0x3EC 0     0x9 0
#define IMXRT_PAD_GPIO_SD_B1_03_GPIO10_IO06                    0x1A8 0x3EC 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B1_04_USDHC1_DATA2                   0x1AC 0x3F0 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_04_XBAR1_INOUT24                  0x1AC 0x3F0 0x6E8 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_04_GPT4_COMPARE3                  0x1AC 0x3F0 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_04_GPIO_MUX4_IO07                 0x1AC 0x3F0 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_04_FLEXSPI2_A_DATA02              0x1AC 0x3F0 0x584 0x6 1
#define IMXRT_PAD_GPIO_SD_B1_04_FLEXSPI1_B_SS0_B               0x1AC 0x3F0 0     0x8 0
#define IMXRT_PAD_GPIO_SD_B1_04_ENET_QOS_1588_EVENT2_AUX_IN    0x1AC 0x3F0 0     0x9 0
#define IMXRT_PAD_GPIO_SD_B1_04_GPIO10_IO07                    0x1AC 0x3F0 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B1_05_GPIO10_IO08                    0x1B0 0x3F4 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B1_05_USDHC1_DATA3                   0x1B0 0x3F4 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B1_05_XBAR1_INOUT25                  0x1B0 0x3F4 0x6EC 0x2 1
#define IMXRT_PAD_GPIO_SD_B1_05_GPT4_CLK                       0x1B0 0x3F4 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B1_05_GPIO_MUX4_IO08                 0x1B0 0x3F4 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B1_05_FLEXSPI2_A_DATA03              0x1B0 0x3F4 0x588 0x6 1
#define IMXRT_PAD_GPIO_SD_B1_05_FLEXSPI1_B_DQS                 0x1B0 0x3F4 0     0x8 0
#define IMXRT_PAD_GPIO_SD_B1_05_ENET_QOS_1588_EVENT3_AUX_IN    0x1B0 0x3F4 0     0x9 0

#define IMXRT_PAD_GPIO_SD_B2_00_GPIO10_IO09                    0x1B4 0x3F8 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_00_USDHC2_DATA3                   0x1B4 0x3F8 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_00_FLEXSPI1_B_DATA03              0x1B4 0x3F8 0x570 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_00_ENET_1G_RX_EN                  0x1B4 0x3F8 0x4E0 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_00_LPUART9_TXD                    0x1B4 0x3F8 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_00_LPSPI4_SCK                     0x1B4 0x3F8 0x610 0x4 0
#define IMXRT_PAD_GPIO_SD_B2_00_GPIO_MUX4_IO09                 0x1B4 0x3F8 0     0x5 0

#define IMXRT_PAD_GPIO_SD_B2_01_USDHC2_DATA2                   0x1B8 0x3FC 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_01_FLEXSPI1_B_DATA02              0x1B8 0x3FC 0x56C 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_01_ENET_1G_RX_CLK                 0x1B8 0x3FC 0x4CC 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_01_LPUART9_RXD                    0x1B8 0x3FC 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_01_LPSPI4_PCS0                    0x1B8 0x3FC 0x60C 0x4 0
#define IMXRT_PAD_GPIO_SD_B2_01_GPIO_MUX4_IO10                 0x1B8 0x3FC 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_01_GPIO10_IO10                    0x1B8 0x3FC 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B2_02_GPIO10_IO11                    0x1BC 0x400 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_02_USDHC2_DATA1                   0x1BC 0x400 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_02_FLEXSPI1_B_DATA01              0x1BC 0x400 0x568 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_02_ENET_1G_RX_DATA00              0x1BC 0x400 0x4D0 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_02_LPUART9_CTS_B                  0x1BC 0x400 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_02_LPSPI4_SOUT                    0x1BC 0x400 0x618 0x4 0
#define IMXRT_PAD_GPIO_SD_B2_02_GPIO_MUX4_IO11                 0x1BC 0x400 0     0x5 0

#define IMXRT_PAD_GPIO_SD_B2_03_GPIO10_IO12                    0x1C0 0x404 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_03_USDHC2_DATA0                   0x1C0 0x404 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_03_FLEXSPI1_B_DATA00              0x1C0 0x404 0x564 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_03_ENET_1G_RX_DATA01              0x1C0 0x404 0x4D4 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_03_LPUART9_RTS_B                  0x1C0 0x404 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_03_LPSPI4_SIN                     0x1C0 0x404 0x614 0x4 0
#define IMXRT_PAD_GPIO_SD_B2_03_GPIO_MUX4_IO12                 0x1C0 0x404 0     0x5 0

#define IMXRT_PAD_GPIO_SD_B2_04_USDHC2_CLK                     0x1C4 0x408 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_04_FLEXSPI1_B_SCLK                0x1C4 0x408 0x578 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_04_ENET_1G_RX_DATA02              0x1C4 0x408 0x4D8 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_04_FLEXSPI1_A_SS1_B               0x1C4 0x408 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_04_LPSPI4_PCS1                    0x1C4 0x408 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_04_GPIO_MUX4_IO13                 0x1C4 0x408 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_04_GPIO10_IO13                    0x1C4 0x408 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B2_05_GPIO10_IO14                    0x1C8 0x40C 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_05_USDHC2_CMD                     0x1C8 0x40C 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_05_FLEXSPI1_A_DQS                 0x1C8 0x40C 0x550 0x1 2
#define IMXRT_PAD_GPIO_SD_B2_05_ENET_1G_RX_DATA03              0x1C8 0x40C 0x4DC 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_05_FLEXSPI1_B_SS0_B               0x1C8 0x40C 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_05_LPSPI4_PCS2                    0x1C8 0x40C 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_05_GPIO_MUX4_IO14                 0x1C8 0x40C 0     0x5 0

#define IMXRT_PAD_GPIO_SD_B2_06_GPIO10_IO15                    0x1CC 0x410 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_06_USDHC2_RESET_B                 0x1CC 0x410 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_06_FLEXSPI1_A_SS0_B               0x1CC 0x410 0     0x1 0
#define IMXRT_PAD_GPIO_SD_B2_06_ENET_1G_TX_DATA03              0x1CC 0x410 0     0x2 0
#define IMXRT_PAD_GPIO_SD_B2_06_LPSPI4_PCS3                    0x1CC 0x410 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_06_GPT6_CAPTURE1                  0x1CC 0x410 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_06_GPIO_MUX4_IO15                 0x1CC 0x410 0     0x5 0

#define IMXRT_PAD_GPIO_SD_B2_07_USDHC2_STROBE                  0x1D0 0x414 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_07_FLEXSPI1_A_SCLK                0x1D0 0x414 0x574 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_07_ENET_1G_TX_DATA02              0x1D0 0x414 0     0x2 0
#define IMXRT_PAD_GPIO_SD_B2_07_LPUART3_CTS_B                  0x1D0 0x414 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_07_GPT6_CAPTURE2                  0x1D0 0x414 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_07_GPIO_MUX4_IO16                 0x1D0 0x414 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_07_LPSPI2_SCK                     0x1D0 0x414 0x5E4 0x6 1
#define IMXRT_PAD_GPIO_SD_B2_07_ENET_TX_ER                     0x1D0 0x414 0     0x8 0
#define IMXRT_PAD_GPIO_SD_B2_07_ENET_QOS_REF_CLK               0x1D0 0x414 0x4A0 0x9 1
#define IMXRT_PAD_GPIO_SD_B2_07_GPIO10_IO16                    0x1D0 0x414 0     0xA 0

#define IMXRT_PAD_GPIO_SD_B2_08_GPIO10_IO17                    0x1D4 0x418 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_08_USDHC2_DATA4                   0x1D4 0x418 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_08_FLEXSPI1_A_DATA00              0x1D4 0x418 0x554 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_08_ENET_1G_TX_DATA01              0x1D4 0x418 0     0x2 0
#define IMXRT_PAD_GPIO_SD_B2_08_LPUART3_RTS_B                  0x1D4 0x418 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_08_GPT6_COMPARE1                  0x1D4 0x418 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_08_GPIO_MUX4_IO17                 0x1D4 0x418 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_08_LPSPI2_PCS0                    0x1D4 0x418 0x5DC 0x6 1

#define IMXRT_PAD_GPIO_SD_B2_09_GPIO10_IO18                    0x1D8 0x41C 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_09_USDHC2_DATA5                   0x1D8 0x41C 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_09_FLEXSPI1_A_DATA01              0x1D8 0x41C 0x558 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_09_ENET_1G_TX_DATA00              0x1D8 0x41C 0     0x2 0
#define IMXRT_PAD_GPIO_SD_B2_09_LPUART5_CTS_B                  0x1D8 0x41C 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_09_GPT6_COMPARE2                  0x1D8 0x41C 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_09_GPIO_MUX4_IO18                 0x1D8 0x41C 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_09_LPSPI2_SOUT                    0x1D8 0x41C 0x5EC 0x6 1

#define IMXRT_PAD_GPIO_SD_B2_10_GPIO10_IO19                    0x1DC 0x420 0     0xA 0
#define IMXRT_PAD_GPIO_SD_B2_10_USDHC2_DATA6                   0x1DC 0x420 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_10_FLEXSPI1_A_DATA02              0x1DC 0x420 0x55C 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_10_ENET_1G_TX_EN                  0x1DC 0x420 0     0x2 0
#define IMXRT_PAD_GPIO_SD_B2_10_LPUART5_RTS_B                  0x1DC 0x420 0     0x3 0
#define IMXRT_PAD_GPIO_SD_B2_10_GPT6_COMPARE3                  0x1DC 0x420 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_10_GPIO_MUX4_IO19                 0x1DC 0x420 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_10_LPSPI2_SIN                     0x1DC 0x420 0x5E8 0x6 1

#define IMXRT_PAD_GPIO_SD_B2_11_USDHC2_DATA7                   0x1E0 0x424 0     0x0 0
#define IMXRT_PAD_GPIO_SD_B2_11_FLEXSPI1_A_DATA03              0x1E0 0x424 0x560 0x1 1
#define IMXRT_PAD_GPIO_SD_B2_11_ENET_1G_TX_CLK_IO              0x1E0 0x424 0x4E8 0x2 1
#define IMXRT_PAD_GPIO_SD_B2_11_ENET_1G_REF_CLK                0x1E0 0x424 0x4C4 0x3 1
#define IMXRT_PAD_GPIO_SD_B2_11_GPT6_CLK                       0x1E0 0x424 0     0x4 0
#define IMXRT_PAD_GPIO_SD_B2_11_GPIO_MUX4_IO20                 0x1E0 0x424 0     0x5 0
#define IMXRT_PAD_GPIO_SD_B2_11_LPSPI2_PCS1                    0x1E0 0x424 0x5E0 0x6 1
#define IMXRT_PAD_GPIO_SD_B2_11_GPIO10_IO20                    0x1E0 0x424 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_00_VIDEO_MUX_LCDIF_CLK          0x1E4 0x428 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_00_ENET_1G_RX_EN                0x1E4 0x428 0x4E0 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_00_TMR1_TIMER0                  0x1E4 0x428 0x63C 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_00_XBAR1_INOUT26                0x1E4 0x428 0x6F0 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_00_GPIO_MUX4_IO21               0x1E4 0x428 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_00_ENET_QOS_RX_EN               0x1E4 0x428 0x4F8 0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_00_GPIO10_IO21                  0x1E4 0x428 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_01_VIDEO_MUX_LCDIF_ENABLE       0x1E8 0x42C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_01_ENET_1G_RX_CLK               0x1E8 0x42C 0x4CC 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_01_ENET_1G_RX_ER                0x1E8 0x42C 0x4E4 0x2 1
#define IMXRT_PAD_GPIO_DISP_B1_01_TMR1_TIMER1                  0x1E8 0x42C 0x640 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_01_XBAR1_INOUT27                0x1E8 0x42C 0x6F4 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_01_GPIO_MUX4_IO22               0x1E8 0x42C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_01_ENET_QOS_RX_CLK              0x1E8 0x42C 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_01_ENET_QOS_RX_ER               0x1E8 0x42C 0x4FC 0x9 0
#define IMXRT_PAD_GPIO_DISP_B1_01_GPIO10_IO22                  0x1E8 0x42C 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_02_GPIO10_IO23                  0x1EC 0x430 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B1_02_VIDEO_MUX_LCDIF_HSYNC        0x1EC 0x430 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_02_ENET_1G_RX_DATA00            0x1EC 0x430 0x4D0 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_02_LPI2C3_SCL                   0x1EC 0x430 0x5BC 0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_02_TMR1_TIMER2                  0x1EC 0x430 0x644 0x3 1
#define IMXRT_PAD_GPIO_DISP_B1_02_XBAR1_INOUT28                0x1EC 0x430 0x6F8 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_02_GPIO_MUX4_IO23               0x1EC 0x430 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_02_ENET_QOS_RX_DATA00           0x1EC 0x430 0x4F0 0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_02_LPUART1_TXD                  0x1EC 0x430 0x620 0x9 1

#define IMXRT_PAD_GPIO_DISP_B1_03_VIDEO_MUX_LCDIF_VSYNC        0x1F0 0x434 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_03_ENET_1G_RX_DATA01            0x1F0 0x434 0x4D4 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_03_LPI2C3_SDA                   0x1F0 0x434 0x5C0 0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_03_TMR2_TIMER0                  0x1F0 0x434 0x648 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_03_XBAR1_INOUT29                0x1F0 0x434 0x6FC 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_03_GPIO_MUX4_IO24               0x1F0 0x434 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_03_ENET_QOS_RX_DATA01           0x1F0 0x434 0x4F4 0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_03_LPUART1_RXD                  0x1F0 0x434 0x61C 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_03_GPIO10_IO24                  0x1F0 0x434 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_04_VIDEO_MUX_LCDIF_DATA00       0x1F4 0x438 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_04_ENET_1G_RX_DATA02            0x1F4 0x438 0x4D8 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_04_LPUART4_RXD                  0x1F4 0x438 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_04_TMR2_TIMER1                  0x1F4 0x438 0x64C 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_04_XBAR1_INOUT30                0x1F4 0x438 0x700 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_04_GPIO_MUX4_IO25               0x1F4 0x438 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_04_ENET_QOS_RX_DATA02           0x1F4 0x438 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_04_LPSPI3_SCK                   0x1F4 0x438 0x600 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_04_GPIO10_IO25                  0x1F4 0x438 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_05_GPIO10_IO26                  0x1F8 0x43C 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B1_05_VIDEO_MUX_LCDIF_DATA01       0x1F8 0x43C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_05_ENET_1G_RX_DATA03            0x1F8 0x43C 0x4DC 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_05_LPUART4_CTS_B                0x1F8 0x43C 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_05_TMR2_TIMER2                  0x1F8 0x43C 0x650 0x3 1
#define IMXRT_PAD_GPIO_DISP_B1_05_XBAR1_INOUT31                0x1F8 0x43C 0x704 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_05_GPIO_MUX4_IO26               0x1F8 0x43C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_05_ENET_QOS_RX_DATA03           0x1F8 0x43C 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_05_LPSPI3_SIN                   0x1F8 0x43C 0x604 0x9 1

#define IMXRT_PAD_GPIO_DISP_B1_06_VIDEO_MUX_LCDIF_DATA02       0x1FC 0x440 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_06_ENET_1G_TX_DATA03            0x1FC 0x440 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B1_06_LPUART4_TXD                  0x1FC 0x440 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_06_TMR3_TIMER0                  0x1FC 0x440 0x654 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_06_XBAR1_INOUT32                0x1FC 0x440 0x708 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_06_GPIO_MUX4_IO27               0x1FC 0x440 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_06_SRC_BT_CFG00                 0x1FC 0x440 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_06_ENET_QOS_TX_DATA03           0x1FC 0x440 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_06_LPSPI3_SOUT                  0x1FC 0x440 0x608 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_06_GPIO10_IO27                  0x1FC 0x440 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_07_VIDEO_MUX_LCDIF_DATA03       0x200 0x444 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_07_ENET_1G_TX_DATA02            0x200 0x444 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B1_07_LPUART4_RTS_B                0x200 0x444 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_07_TMR3_TIMER1                  0x200 0x444 0x658 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_07_XBAR1_INOUT33                0x200 0x444 0x70C 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_07_GPIO_MUX4_IO28               0x200 0x444 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_07_SRC_BT_CFG01                 0x200 0x444 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_07_ENET_QOS_TX_DATA02           0x200 0x444 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_07_LPSPI3_PCS0                  0x200 0x444 0x5F0 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_07_GPIO10_IO28                  0x200 0x444 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_08_GPIO10_IO29                  0x204 0x448 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B1_08_VIDEO_MUX_LCDIF_DATA04       0x204 0x448 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_08_ENET_1G_TX_DATA01            0x204 0x448 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B1_08_USDHC1_CD_B                  0x204 0x448 0x6C8 0x2 1
#define IMXRT_PAD_GPIO_DISP_B1_08_TMR3_TIMER2                  0x204 0x448 0x65C 0x3 1
#define IMXRT_PAD_GPIO_DISP_B1_08_XBAR1_INOUT34                0x204 0x448 0x710 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_08_GPIO_MUX4_IO29               0x204 0x448 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_08_SRC_BT_CFG02                 0x204 0x448 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_08_ENET_QOS_TX_DATA01           0x204 0x448 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_08_LPSPI3_PCS1                  0x204 0x448 0x5F4 0x9 1

#define IMXRT_PAD_GPIO_DISP_B1_09_VIDEO_MUX_LCDIF_DATA05       0x208 0x44C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_09_ENET_1G_TX_DATA00            0x208 0x44C 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B1_09_USDHC1_WP                    0x208 0x44C 0x6CC 0x2 1
#define IMXRT_PAD_GPIO_DISP_B1_09_TMR4_TIMER0                  0x208 0x44C 0x660 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_09_XBAR1_INOUT35                0x208 0x44C 0x714 0x4 1
#define IMXRT_PAD_GPIO_DISP_B1_09_GPIO_MUX4_IO30               0x208 0x44C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_09_SRC_BT_CFG03                 0x208 0x44C 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_09_ENET_QOS_TX_DATA00           0x208 0x44C 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_09_LPSPI3_PCS2                  0x208 0x44C 0x5F8 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_09_GPIO10_IO30                  0x208 0x44C 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_10_VIDEO_MUX_LCDIF_DATA06       0x20C 0x450 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_10_ENET_1G_TX_EN                0x20C 0x450 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B1_10_USDHC1_RESET_B               0x20C 0x450 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B1_10_TMR4_TIMER1                  0x20C 0x450 0x664 0x3 2
#define IMXRT_PAD_GPIO_DISP_B1_10_XBAR1_INOUT36                0x20C 0x450 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B1_10_GPIO_MUX4_IO31               0x20C 0x450 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_10_SRC_BT_CFG04                 0x20C 0x450 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_10_ENET_QOS_TX_EN               0x20C 0x450 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_10_LPSPI3_PCS3                  0x20C 0x450 0x5FC 0x9 1
#define IMXRT_PAD_GPIO_DISP_B1_10_GPIO10_IO31                  0x20C 0x450 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B1_11_VIDEO_MUX_LCDIF_DATA07       0x210 0x454 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B1_11_ENET_1G_TX_CLK_IO            0x210 0x454 0x4E8 0x1 2
#define IMXRT_PAD_GPIO_DISP_B1_11_ENET_1G_REF_CLK              0x210 0x454 0x4C4 0x2 2
#define IMXRT_PAD_GPIO_DISP_B1_11_TMR4_TIMER2                  0x210 0x454 0x668 0x3 1
#define IMXRT_PAD_GPIO_DISP_B1_11_XBAR1_INOUT37                0x210 0x454 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B1_11_GPIO_MUX5_IO00               0x210 0x454 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B1_11_SRC_BT_CFG05                 0x210 0x454 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B1_11_ENET_QOS_TX_CLK              0x210 0x454 0x4A4 0x8 0
#define IMXRT_PAD_GPIO_DISP_B1_11_ENET_QOS_REF_CLK             0x210 0x454 0x4A0 0x9 2
#define IMXRT_PAD_GPIO_DISP_B1_11_GPIO11_IO00                  0x210 0x454 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B2_00_GPIO11_IO01                  0x214 0x458 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_00_VIDEO_MUX_LCDIF_DATA08       0x214 0x458 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_00_WDOG1_B                      0x214 0x458 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_00_MQS_RIGHT                    0x214 0x458 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_00_ENET_1G_TX_ER                0x214 0x458 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_00_SAI1_TX_DATA03               0x214 0x458 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_00_GPIO_MUX5_IO01               0x214 0x458 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_00_SRC_BT_CFG06                 0x214 0x458 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_00_ENET_QOS_TX_ER               0x214 0x458 0     0x8 0

#define IMXRT_PAD_GPIO_DISP_B2_01_VIDEO_MUX_LCDIF_DATA09       0x218 0x45C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_01_USDHC1_VSELECT               0x218 0x45C 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_01_MQS_LEFT                     0x218 0x45C 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_01_WDOG2_B                      0x218 0x45C 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_01_SAI1_TX_DATA02               0x218 0x45C 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_01_GPIO_MUX5_IO02               0x218 0x45C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_01_SRC_BT_CFG07                 0x218 0x45C 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_01_EWM_OUT_B                    0x218 0x45C 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_01_CCM_ENET_REF_CLK_25M         0x218 0x45C 0     0x9 0
#define IMXRT_PAD_GPIO_DISP_B2_01_GPIO11_IO02                  0x218 0x45C 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B2_02_GPIO11_IO03                  0x21C 0x460 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_02_VIDEO_MUX_LCDIF_DATA10       0x21C 0x460 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_02_ENET_TX_DATA00               0x21C 0x460 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_02_PIT1_TRIGGER3                0x21C 0x460 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_02_ARM_TRACE00                  0x21C 0x460 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_02_SAI1_TX_DATA01               0x21C 0x460 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_02_GPIO_MUX5_IO03               0x21C 0x460 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_02_SRC_BT_CFG08                 0x21C 0x460 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_02_ENET_QOS_TX_DATA00           0x21C 0x460 0     0x8 0

#define IMXRT_PAD_GPIO_DISP_B2_03_GPIO11_IO04                  0x220 0x464 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_03_VIDEO_MUX_LCDIF_DATA11       0x220 0x464 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_03_ENET_TX_DATA01               0x220 0x464 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_03_PIT1_TRIGGER2                0x220 0x464 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_03_ARM_TRACE01                  0x220 0x464 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_03_SAI1_MCLK                    0x220 0x464 0x66C 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_03_GPIO_MUX5_IO04               0x220 0x464 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_03_SRC_BT_CFG09                 0x220 0x464 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_03_ENET_QOS_TX_DATA01           0x220 0x464 0     0x8 0

#define IMXRT_PAD_GPIO_DISP_B2_04_VIDEO_MUX_LCDIF_DATA12       0x224 0x468 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_04_ENET_TX_EN                   0x224 0x468 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_04_PIT1_TRIGGER1                0x224 0x468 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_04_ARM_TRACE02                  0x224 0x468 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_04_SAI1_RX_SYNC                 0x224 0x468 0x678 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_04_GPIO_MUX5_IO05               0x224 0x468 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_04_SRC_BT_CFG10                 0x224 0x468 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_04_ENET_QOS_TX_EN               0x224 0x468 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_04_GPIO11_IO05                  0x224 0x468 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B2_05_GPIO11_IO06                  0x228 0x46C 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_05_VIDEO_MUX_LCDIF_DATA13       0x228 0x46C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_05_ENET_TX_CLK                  0x228 0x46C 0x4C0 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_05_ENET_REF_CLK                 0x228 0x46C 0x4A8 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_05_ARM_TRACE03                  0x228 0x46C 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_05_SAI1_RX_BCLK                 0x228 0x46C 0x670 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_05_GPIO_MUX5_IO06               0x228 0x46C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_05_SRC_BT_CFG11                 0x228 0x46C 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_05_ENET_QOS_TX_CLK              0x228 0x46C 0x4A4 0x8 1

#define IMXRT_PAD_GPIO_DISP_B2_06_GPIO11_IO07                  0x22C 0x470 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_06_VIDEO_MUX_LCDIF_DATA14       0x22C 0x470 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_06_ENET_RX_DATA00               0x22C 0x470 0x4B0 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_06_LPUART7_TXD                  0x22C 0x470 0x630 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_06_ARM_TRACE_CLK                0x22C 0x470 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_06_SAI1_RX_DATA00               0x22C 0x470 0x674 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_06_GPIO_MUX5_IO07               0x22C 0x470 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_06_ENET_QOS_RX_DATA00           0x22C 0x470 0x4F0 0x8 1

#define IMXRT_PAD_GPIO_DISP_B2_07_VIDEO_MUX_LCDIF_DATA15       0x230 0x474 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_07_ENET_RX_DATA01               0x230 0x474 0x4B4 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_07_LPUART7_RXD                  0x230 0x474 0x62C 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_07_ARM_TRACE_SWO                0x230 0x474 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_07_SAI1_TX_DATA00               0x230 0x474 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_07_GPIO_MUX5_IO08               0x230 0x474 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_07_ENET_QOS_RX_DATA01           0x230 0x474 0x4F4 0x8 1
#define IMXRT_PAD_GPIO_DISP_B2_07_GPIO11_IO08                  0x230 0x474 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B2_08_GPIO11_IO09                  0x234 0x478 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_08_VIDEO_MUX_LCDIF_DATA16       0x234 0x478 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_08_ENET_RX_EN                   0x234 0x478 0x4B8 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_08_LPUART8_TXD                  0x234 0x478 0x638 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_08_ARM_CM7_EVENTO               0x234 0x478 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_08_SAI1_TX_BCLK                 0x234 0x478 0x67C 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_08_GPIO_MUX5_IO09               0x234 0x478 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_08_ENET_QOS_RX_EN               0x234 0x478 0x4F8 0x8 1
#define IMXRT_PAD_GPIO_DISP_B2_08_LPUART1_TXD                  0x234 0x478 0x620 0x9 2

#define IMXRT_PAD_GPIO_DISP_B2_09_GPIO11_IO10                  0x238 0x47C 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_09_VIDEO_MUX_LCDIF_DATA17       0x238 0x47C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_09_ENET_RX_ER                   0x238 0x47C 0x4BC 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_09_LPUART8_RXD                  0x238 0x47C 0x634 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_09_ARM_CM7_EVENTI               0x238 0x47C 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_09_SAI1_TX_SYNC                 0x238 0x47C 0x680 0x4 1
#define IMXRT_PAD_GPIO_DISP_B2_09_GPIO_MUX5_IO10               0x238 0x47C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_09_ENET_QOS_RX_ER               0x238 0x47C 0x4FC 0x8 1
#define IMXRT_PAD_GPIO_DISP_B2_09_LPUART1_RXD                  0x238 0x47C 0x61C 0x9 2

#define IMXRT_PAD_GPIO_DISP_B2_10_GPIO11_IO11                  0x23C 0x480 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_10_VIDEO_MUX_LCDIF_DATA18       0x23C 0x480 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_10_EMVSIM2_IO                   0x23C 0x480 0x6A8 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_10_LPUART2_TXD                  0x23C 0x480 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_10_WDOG2_RESET_B_DEB            0x23C 0x480 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_10_XBAR1_INOUT38                0x23C 0x480 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_10_GPIO_MUX5_IO11               0x23C 0x480 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_10_LPI2C3_SCL                   0x23C 0x480 0x5BC 0x6 1
#define IMXRT_PAD_GPIO_DISP_B2_10_ENET_QOS_RX_ER               0x23C 0x480 0x4FC 0x8 2
#define IMXRT_PAD_GPIO_DISP_B2_10_SPDIF_IN                     0x23C 0x480 0x6B4 0x9 2

#define IMXRT_PAD_GPIO_DISP_B2_11_VIDEO_MUX_LCDIF_DATA19       0x240 0x484 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_11_EMVSIM2_CLK                  0x240 0x484 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_11_LPUART2_RXD                  0x240 0x484 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_11_WDOG1_RESET_B_DEB            0x240 0x484 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_11_XBAR1_INOUT39                0x240 0x484 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_11_GPIO_MUX5_IO12               0x240 0x484 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_11_LPI2C3_SDA                   0x240 0x484 0x5C0 0x6 1
#define IMXRT_PAD_GPIO_DISP_B2_11_ENET_QOS_CRS                 0x240 0x484 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_11_SPDIF_OUT                    0x240 0x484 0     0x9 0
#define IMXRT_PAD_GPIO_DISP_B2_11_GPIO11_IO12                  0x240 0x484 0     0xA 0

#define IMXRT_PAD_GPIO_DISP_B2_12_GPIO11_IO13                  0x244 0x488 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_12_VIDEO_MUX_LCDIF_DATA20       0x244 0x488 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_12_EMVSIM2_RST                  0x244 0x488 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_12_FLEXCAN1_TX                  0x244 0x488 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_12_LPUART2_CTS_B                0x244 0x488 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_12_XBAR1_INOUT40                0x244 0x488 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_12_GPIO_MUX5_IO13               0x244 0x488 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_12_LPI2C4_SCL                   0x244 0x488 0x5C4 0x6 1
#define IMXRT_PAD_GPIO_DISP_B2_12_ENET_QOS_COL                 0x244 0x488 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_12_LPSPI4_SCK                   0x244 0x488 0x610 0x9 1

#define IMXRT_PAD_GPIO_DISP_B2_13_GPIO11_IO14                  0x248 0x48C 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_13_VIDEO_MUX_LCDIF_DATA21       0x248 0x48C 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_13_EMVSIM2_SVEN                 0x248 0x48C 0     0x1 0
#define IMXRT_PAD_GPIO_DISP_B2_13_FLEXCAN1_RX                  0x248 0x48C 0x498 0x2 1
#define IMXRT_PAD_GPIO_DISP_B2_13_LPUART2_RTS_B                0x248 0x48C 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_13_ENET_REF_CLK                 0x248 0x48C 0x4A8 0x4 2
#define IMXRT_PAD_GPIO_DISP_B2_13_GPIO_MUX5_IO14               0x248 0x48C 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_13_LPI2C4_SDA                   0x248 0x48C 0x5C8 0x6 1
#define IMXRT_PAD_GPIO_DISP_B2_13_ENET_QOS_1588_EVENT0_OUT     0x248 0x48C 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_13_LPSPI4_SIN                   0x248 0x48C 0x614 0x9 1

#define IMXRT_PAD_GPIO_DISP_B2_14_GPIO_MUX5_IO15               0x24C 0x490 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_14_FLEXCAN1_TX                  0x24C 0x490 0     0x6 0
#define IMXRT_PAD_GPIO_DISP_B2_14_ENET_QOS_1588_EVENT0_IN      0x24C 0x490 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_14_LPSPI4_SOUT                  0x24C 0x490 0x618 0x9 1
#define IMXRT_PAD_GPIO_DISP_B2_14_GPIO11_IO15                  0x24C 0x490 0     0xA 0
#define IMXRT_PAD_GPIO_DISP_B2_14_VIDEO_MUX_LCDIF_DATA22       0x24C 0x490 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_14_EMVSIM2_PD                   0x24C 0x490 0x6AC 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_14_WDOG2_B                      0x24C 0x490 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_14_VIDEO_MUX_EXT_DCIC1          0x24C 0x490 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_14_ENET_1G_REF_CLK              0x24C 0x490 0x4C4 0x4 3

#define IMXRT_PAD_GPIO_DISP_B2_15_VIDEO_MUX_LCDIF_DATA23       0x250 0x494 0     0x0 0
#define IMXRT_PAD_GPIO_DISP_B2_15_EMVSIM2_POWER_FAIL           0x250 0x494 0x6B0 0x1 1
#define IMXRT_PAD_GPIO_DISP_B2_15_WDOG1_B                      0x250 0x494 0     0x2 0
#define IMXRT_PAD_GPIO_DISP_B2_15_VIDEO_MUX_EXT_DCIC2          0x250 0x494 0     0x3 0
#define IMXRT_PAD_GPIO_DISP_B2_15_PIT1_TRIGGER0                0x250 0x494 0     0x4 0
#define IMXRT_PAD_GPIO_DISP_B2_15_GPIO_MUX5_IO16               0x250 0x494 0     0x5 0
#define IMXRT_PAD_GPIO_DISP_B2_15_FLEXCAN1_RX                  0x250 0x494 0x498 0x6 2
#define IMXRT_PAD_GPIO_DISP_B2_15_ENET_QOS_1588_EVENT0_AUX_IN  0x250 0x494 0     0x8 0
#define IMXRT_PAD_GPIO_DISP_B2_15_LPSPI4_PCS0                  0x250 0x494 0x60C 0x9 1
#define IMXRT_PAD_GPIO_DISP_B2_15_GPIO11_IO16                  0x250 0x494 0     0xA 0

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBBSP_ARM_IMXRT_IMXRT1050_PINFUNC_H */
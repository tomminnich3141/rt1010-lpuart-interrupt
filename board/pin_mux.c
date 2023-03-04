/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: MIMXRT1011xxxxx
package_id: MIMXRT1011DAE5A
mcu_data: ksdk2_0
processor_version: 0.0.4
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '3', peripheral: LPUART1, signal: RXD, pin_signal: GPIO_09, software_input_on: Disable, open_drain: Disable, drive_strength: R0_4}
  - {pin_num: '2', peripheral: LPUART1, signal: TXD, pin_signal: GPIO_10, software_input_on: Disable, open_drain: Disable, drive_strength: R0_4}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

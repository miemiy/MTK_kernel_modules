/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

/*! \file   "cust_usb_id.h"
 *   \brief   Define USB vid/pid table for customers
 */


#ifndef _CUST_USB_ID_H
#define _CUST_USB_ID_H
/*******************************************************************************
*                         C O M P I L E R   F L A G S
********************************************************************************
*/

/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/

/*******************************************************************************
*                              C O N S T A N T S
********************************************************************************
*/

/*******************************************************************************
*                             D A T A   T Y P E S
********************************************************************************
*/

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

/*******************************************************************************
*                           P R I V A T E   D A T A
********************************************************************************
*/

/*******************************************************************************
*                                 M A C R O S
********************************************************************************
*/
#if CFG_CHIP_RESET_SUPPORT
	/**
	* For chip reset pin set low time
	*/
#define RESET_PIN_SET_LOW_TIME		500
	
	/**
	 * For chip reset pin number configureation
	 */
#define WIFI_DONGLE_RESET_GPIO_PIN	220
#endif

/*!
 * \brief Additional USB vid/pid tables for customers.
 *           Please add your vid/pid in table below as the example shows.
 *
 */
#define CUST_USB_ID_TABLES \
/*
*	{	USB_DEVICE_AND_INTERFACE_INFO(0x0E8D, 0x7618, 0xff, 0xff, 0xff), \
*		.driver_info = (kernel_ulong_t)&mt66xx_driver_data_mt7668},\
*	{	USB_DEVICE_AND_INTERFACE_INFO(0x0E8D, 0x7658, 0xff, 0xff, 0xff), \
*		.driver_info = (kernel_ulong_t)&mt66xx_driver_data_mt7668},\
*/

/*******************************************************************************
*                   F U N C T I O N   D E C L A R A T I O N S
********************************************************************************
*/

/*******************************************************************************
*                              F U N C T I O N S
********************************************************************************
*/
#endif /* _CUST_USB_ID_H */

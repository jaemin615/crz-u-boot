/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2023-2024 Texas Instruments Incorporated - https://www.ti.com/
 */

#ifndef _ASM_ARCH_J784S4_SPL_H_
#define _ASM_ARCH_J784S4_SPL_H_

/* With BootMode B = 0 */
#include <linux/bitops.h>

#define BOOT_DEVICE_HYPERFLASH		0x00
#define BOOT_DEVICE_OSPI		0x01
#define BOOT_DEVICE_QSPI		0x02
#define BOOT_DEVICE_SPI			0x03
#define BOOT_DEVICE_ETHERNET		0x04
#define BOOT_DEVICE_SPINAND		0x05
#define BOOT_DEVICE_I2C			0x06
#define BOOT_DEVICE_UART		0x07
#define BOOT_DEVICE_NOR			BOOT_DEVICE_HYPERFLASH

/* With BootMode B = 1 */
#define BOOT_DEVICE_MMC2		0x10
#define BOOT_DEVICE_MMC1		0x11
#define BOOT_DEVICE_DFU			0x12
#define BOOT_DEVICE_UFS			0x13
#define BOOT_DEVIE_GPMC			0x14
#define BOOT_DEVICE_PCIE		0x15
#define BOOT_DEVICE_XSPI		0x16
#define BOOT_DEVICE_RAM			0x17
#define BOOT_DEVICE_MMC2_2		0xFF /* Invalid value */

/* Backup boot modes with MCU Only = 0 */
#define BACKUP_BOOT_DEVICE_RAM		0x0
#define BACKUP_BOOT_DEVICE_USB		0x1
#define BACKUP_BOOT_DEVICE_UART		0x3
#define BACKUP_BOOT_DEVICE_ETHERNET	0x4
#define BACKUP_BOOT_DEVICE_MMC2		0x5
#define BACKUP_BOOT_DEVICE_SPI		0x6
#define BACKUP_BOOT_DEVICE_I2C		0x7

#define BOOT_MODE_B_SHIFT		4
#define BOOT_MODE_B_MASK		BIT(4)

#define K3_PRIMARY_BOOTMODE		0x0
#define K3_BACKUP_BOOTMODE		0x1

#endif

/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2012
 * Texas Instruments, <www.ti.com>
 */
#ifndef	_ASM_SPL_H_
#define	_ASM_SPL_H_

#if defined(CONFIG_ARCH_EXYNOS4) || defined(CONFIG_ARCH_EXYNOS5) || \
	defined(CONFIG_ARCH_K3) || defined(CONFIG_ARCH_OMAP2PLUS)
/* Platform-specific defines */
#include <asm/arch/spl.h>

#else
enum {
	BOOT_DEVICE_RAM,
	BOOT_DEVICE_MMC1,
	BOOT_DEVICE_MMC2,
	BOOT_DEVICE_MMC2_2,
	BOOT_DEVICE_NAND,
	BOOT_DEVICE_ONENAND,
	BOOT_DEVICE_NOR,
	BOOT_DEVICE_SPINAND,
	BOOT_DEVICE_UART,
	BOOT_DEVICE_SPI,
	BOOT_DEVICE_USB,
	BOOT_DEVICE_SATA,
	BOOT_DEVICE_I2C,
	BOOT_DEVICE_BOARD,
	BOOT_DEVICE_DFU,
	BOOT_DEVICE_XIP,
	BOOT_DEVICE_BOOTROM,
	BOOT_DEVICE_SMH,
	BOOT_DEVICE_NONE
};
#endif

#ifndef CONFIG_DM
extern gd_t gdata;
#endif

#endif

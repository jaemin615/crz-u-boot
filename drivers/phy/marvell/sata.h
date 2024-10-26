/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2015-2016 Marvell International Ltd.
 */

#ifndef _SATA_H_
#define _SATA_H_

/* SATA3 Unit address */
#define SATA3_VENDOR_ADDRESS		0xA0
#define SATA3_VENDOR_ADDR_OFSSET	0
#define SATA3_VENDOR_ADDR_MASK		(0xFFFFFFFF << SATA3_VENDOR_ADDR_OFSSET)
#define SATA3_VENDOR_DATA		0xA4

#define SATA_CONTROL_REG		0x0
#define SATA3_CTRL_SATA0_PD_OFFSET	6
#define SATA3_CTRL_SATA0_PD_MASK	(1 << SATA3_CTRL_SATA0_PD_OFFSET)
#define SATA3_CTRL_SATA1_PD_OFFSET	14
#define SATA3_CTRL_SATA1_PD_MASK	(1 << SATA3_CTRL_SATA1_PD_OFFSET)
#define SATA3_CTRL_SATA1_ENABLE_OFFSET	22
#define SATA3_CTRL_SATA1_ENABLE_MASK	(1 << SATA3_CTRL_SATA1_ENABLE_OFFSET)
#define SATA3_CTRL_SATA_SSU_OFFSET	23
#define SATA3_CTRL_SATA_SSU_MASK	(1 << SATA3_CTRL_SATA_SSU_OFFSET)

#define SATA_MBUS_SIZE_SELECT_REG	0x4
#define SATA_MBUS_REGRET_EN_OFFSET	7
#define SATA_MBUS_REGRET_EN_MASK	(0x1 << SATA_MBUS_REGRET_EN_OFFSET)

#endif /* _SATA_H_ */

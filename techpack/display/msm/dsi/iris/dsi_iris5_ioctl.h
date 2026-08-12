// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2015-2019, The Linux Foundation. All rights reserved.
 * Copyright (c) 2017-2020, Pixelworks, Inc.
 *
 * These files contain modifications made by Pixelworks, Inc., in 2019-2020.
 */
#ifndef _DSI_IRIS_IOCTL_H_
#define _DSI_IRIS_IOCTL_H_

struct msmfb_mipi_dsi_cmd {
	u32 flags;
	u32 vc;
	u32 dtype;
	u32 data_type;
	u32 length;
	u32 len;
	u32 reserved;
	u32 iris_ocp_type;
	u32 iris_ocp_addr;
	u32 iris_ocp_size;
	void __user *payload;
};

struct msm_iris_operate_value {
	u32 ip;
	u32 opt_id;
	u32 len;
	u32 *values;
};

#ifndef MSMFB_MIPI_DSI_COMMAND_LAST
#define MSMFB_MIPI_DSI_COMMAND_LAST 0x1
#define MSMFB_MIPI_DSI_COMMAND_ACK 0x2
#define MSMFB_MIPI_DSI_COMMAND_HS 0x4
#define MSMFB_MIPI_DSI_COMMAND_TO_PANEL 0x8
#define MSMFB_MIPI_DSI_COMMAND_T 0x10
#endif

int iris_configure(u32 display, u32 type, u32 value);
int iris_configure_ex(u32 display, u32 type, u32 count, u32 *values);
int iris_configure_get(u32 display, u32 type, u32 count, u32 *values);
int iris_dbgfs_adb_type_init(struct dsi_display *display);

#endif // _DSI_IRIS_IOCTL_H_

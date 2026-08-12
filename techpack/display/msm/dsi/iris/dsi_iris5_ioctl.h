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
	u32 iris_ocp_value;
	u32 response;
	void __user *payload;
};

struct msm_iris_operate_value {
	u32 ip;
	u32 opt_id;
	u32 type;
	u32 count;
	u32 len;
	u32 *values;
};

struct msmfb_iris_ambient_info {
	u32 ambient_lux;
	u32 ambient_bl_ratio;
	void __user *lut_lut2_payload;
};

struct msmfb_iris_maxcll_info {
	u32 mMAXCLL;
	void __user *lut_luty_payload;
	void __user *lut_lutuv_payload;
};

#ifndef IRIS_OPRT_TOOL_DSI
#define IRIS_OPRT_TOOL_DSI 0
#define IRIS_OPRT_CONFIGURE 1
#define IRIS_OPRT_CONFIGURE_NEW 2
#define IRIS_OPRT_CONFIGURE_NEW_GET 3
#endif

#ifndef DRM_MSM_IRIS_OPERATE_CONF
#define DRM_MSM_IRIS_OPERATE_CONF 0x30
#define DRM_MSM_IRIS_OPERATE_TOOL 0x31
#endif

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

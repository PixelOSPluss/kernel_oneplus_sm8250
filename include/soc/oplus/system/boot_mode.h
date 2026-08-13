/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef _OPLUS_BOOT_MODE_H_
#define _OPLUS_BOOT_MODE_H_

enum msm_boot_mode {
	MSM_BOOT_MODE__NORMAL = 0,
	MSM_BOOT_MODE__FACTORY,
	MSM_BOOT_MODE__RF,
	MSM_BOOT_MODE__WLAN,
	MSM_BOOT_MODE__MOS,
	MSM_BOOT_MODE__RECOVERY,
	MSM_BOOT_MODE__SILENCE,
	MSM_BOOT_MODE__SAU,
	MSM_BOOT_MODE__AGING,
	MSM_BOOT_MODE__SAFE,
	MSM_BOOT_MODE__CHARGE,
};

int get_boot_mode(void);
bool qpnp_is_power_off_charging(void);
bool op_is_monitorable_boot(void);
bool qpnp_is_charger_reboot(void);
#ifdef CONFIG_ARCH_LITO
int get_hw_board_version(void);
#endif
#endif

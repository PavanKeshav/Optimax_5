#ifndef FIMC_IS_VENDOR_CONFIG_J7_H
#define FIMC_IS_VENDOR_CONFIG_J7_H

#include "fimc-is-eeprom-rear-3l2_v001.h"
#include "fimc-is-otp-front-5e3_v001.h"

#define CAMERA_MODULE_ES_VERSION	FIMC_IS_LATEST_FROM_VERSION_A
#define CAL_MAP_ES_VERSION		FROM_VERSION_V001

#define CAMERA_SYSFS_V2
#define CONFIG_CAMERA_OTPROM_SUPPORT_FRONT
#define CONFIG_SKIP_TORCH_SET_FRONT
#define SEC_CAMERA_TRY_TIMEOUT_COUNT 4

#endif /* FIMC_IS_VENDOR_CONFIG_J7_H */
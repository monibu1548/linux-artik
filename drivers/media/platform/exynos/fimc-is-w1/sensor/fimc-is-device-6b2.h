/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_DEVICE_6B2_H
#define FIMC_IS_DEVICE_6B2_H

#if defined(CONFIG_SOC_EXYNOS3250)
#define SENSOR_S5K6B2_INSTANCE	0
#else
#define SENSOR_S5K6B2_INSTANCE	1
#endif

#define SENSOR_S5K6B2_NAME	SENSOR_NAME_S5K6B2
/* #define SENSOR_S5K6B2_DRIVING */

struct fimc_is_module_6b2 {
	u16		vis_duration;
	u16		frame_length_line;
	u32		line_length_pck;
	u32		system_clock;
};

int sensor_6b2_probe(struct i2c_client *client,
	const struct i2c_device_id *id);

#endif

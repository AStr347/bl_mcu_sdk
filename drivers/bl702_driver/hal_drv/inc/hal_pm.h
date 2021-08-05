/**
 * @file hal_pm.h
 * @brief
 *
 * Copyright (c) 2021 Bouffalolab team
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 */
#ifndef __HAL_PM__H__
#define __HAL_PM__H__

#include "drv_device.h"
#include "bl702_config.h"

enum pm_hbn_sleep_level {
    PM_HBN_LEVEL_0, /*!< HBN pd_core */
    PM_HBN_LEVEL_1, /*!< HBN pd_aon_hbncore + pd_core */
    PM_HBN_LEVEL_2, /*!< HBN pd_aon_hbncore + pd_core */
};

enum pm_hbn_event_type {
    PM_HBN_GPIO10_WAKEUP_EVENT,
    PM_HBN_GPIO11_WAKEUP_EVENT,
    PM_HBN_GPIO12_WAKEUP_EVENT,
    PM_HBN_RTC_WAKEUP_EVENT,
    PM_HBN_ACOMP0_WAKEUP_EVENT,
    PM_HBN_ACOMP1_WAKEUP_EVENT,
};

void pm_hbn_mode_enter(enum pm_hbn_sleep_level hbn_level);
void pm_hbn_irq_register(void (*hbn_irq)(uint8_t event));
#endif

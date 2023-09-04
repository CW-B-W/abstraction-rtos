/***********************************************************************************************//**
 * \file cyabs_rtos_internal.h
 *
 * \brief
 * Internal interface used for RTOS abstraction utilities.
 ***************************************************************************************************
 * \copyright
 * Copyright 2018-2022 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **************************************************************************************************/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

/** Checks to see if code is currently executing within an interrupt context.
 *
 * @return Boolean indicating whether this was executed from an interrupt context.
 */
static inline bool is_in_isr(void)
{
    return xPortInIsrContext();
}


#if defined(__cplusplus)
}
#endif

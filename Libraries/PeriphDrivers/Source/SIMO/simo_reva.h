/* ****************************************************************************
 * Copyright (C) 2017 Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 *************************************************************************** */

/****** Includes *******/
#include "mxc_device.h"
#include "mxc_sys.h"
#include "mxc_assert.h"
#include "simo_regs.h"
#include "simo.h"

/* **** Function Prototypes **** */
void MXC_SIMO_RevA_setVregO_A(uint32_t voltage);
void MXC_SIMO_RevA_setVregO_B(uint32_t voltage);
void MXC_SIMO_RevA_setVregO_C(uint32_t voltage);
void MXC_SIMO_RevA_setVregO_D(uint32_t voltage);

void MXC_SIMO_RevA_setIpkA(uint32_t peak_current);
void MXC_SIMO_RevA_setIpkB(uint32_t peak_current);
void MXC_SIMO_RevA_setIpkC(uint32_t peak_current);
void MXC_SIMO_RevA_setIpkD(uint32_t peak_current);

void MXC_SIMO_RevA_setMaxTon(uint32_t ontime);

void MXC_SIMO_RevA_setAlertThresholdA(uint32_t threshold);
void MXC_SIMO_RevA_setAlertThresholdB(uint32_t threshold);
void MXC_SIMO_RevA_setAlertThresholdC(uint32_t threshold);
void MXC_SIMO_RevA_setAlertThresholdD(uint32_t threshold);

void MXC_SIMO_RevA_setZeroCrossCalA(uint32_t zerocross);
void MXC_SIMO_RevA_setZeroCrossCalB(uint32_t zerocross);
void MXC_SIMO_RevA_setZeroCrossCalC(uint32_t zerocross);
void MXC_SIMO_RevA_setZeroCrossCalD(uint32_t zerocross);

uint32_t MXC_SIMO_RevA_getOutReadyA(void);
uint32_t MXC_SIMO_RevA_getOutReadyB(void);
uint32_t MXC_SIMO_RevA_getOutReadyC(void);
uint32_t MXC_SIMO_RevA_getOutReadyD(void);
/*
 * Copyright 2019 Xilinx Inc.
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
 */
// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 2016 Xilinx Inc. All rights reserved.
// 
// ==============================================================

//------------------------Address Info-------------------
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of a
//        bit 31~0 - a[31:0] (Read/Write)
// 0x14 : Data signal of a
//        bit 31~0 - a[63:32] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of b
//        bit 31~0 - b[31:0] (Read/Write)
// 0x20 : Data signal of b
//        bit 31~0 - b[63:32] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of c
//        bit 31~0 - c[31:0] (Read/Write)
// 0x2c : Data signal of c
//        bit 31~0 - c[63:32] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of length_r
//        bit 31~0 - length_r[31:0] (Read/Write)
// 0x38 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XVADD_CONTROL_ADDR_AP_CTRL              0x00
#define XVADD_CONTROL_ADDR_GIE                  0x04
#define XVADD_CONTROL_ADDR_IER                  0x08
#define XVADD_CONTROL_ADDR_ISR                  0x0c

#define XVADD_CONTROL_ADDR_RESET_0              0x14
#define XVADD_CONTROL_BITS_RESET_0              32
#define XVADD_CONTROL_ADDR_RESET_1              0x18
#define XVADD_CONTROL_BITS_RESET_1              32
#define XVADD_CONTROL_ADDR_PROFEN_0             0x1c
#define XVADD_CONTROL_BITS_PROFEN_0             32
#define XVADD_CONTROL_ADDR_START_0              0x20
#define XVADD_CONTROL_BITS_START_0              32
#define XVADD_CONTROL_ADDR_DONECLR_1            0x30
#define XVADD_CONTROL_BITS_DONECLR_1            32
#define XVADD_CONTROL_ADDR_DONECLR_0            0x34
#define XVADD_CONTROL_BITS_DONECLR_0            32

#define XVADD_CONTROL_ADDR_DPUCMD               0x200
#define XVADD_CONTROL_BITS_DPUCMD               32
#define XVADD_CONTROL_ADDR_INSTR                0x204
#define XVADD_CONTROL_BITS_INSTR                64
#define XVADD_CONTROL_ADDR_PROF                 0x20c
#define XVADD_CONTROL_BITS_PROF                 64
#define XVADD_CONTROL_ADDR_PROFEN               0x21c
#define XVADD_CONTROL_BITS_PROFEN               32
#define XVADD_CONTROL_ADDR_BASE0                0x224
#define XVADD_CONTROL_BITS_BASE0                64
#define XVADD_CONTROL_ADDR_BASE1                0x22c
#define XVADD_CONTROL_BITS_BASE1                64
#define XVADD_CONTROL_ADDR_BASE2                0x234
#define XVADD_CONTROL_BITS_BASE2                64
#define XVADD_CONTROL_ADDR_BASE3                0x23c
#define XVADD_CONTROL_BITS_BASE3                64
#define XVADD_CONTROL_ADDR_BASE4                0x244
#define XVADD_CONTROL_BITS_BASE4                64
#define XVADD_CONTROL_ADDR_BASE5                0x24c
#define XVADD_CONTROL_BITS_BASE5                64
#define XVADD_CONTROL_ADDR_BASE6                0x254
#define XVADD_CONTROL_BITS_BASE6                64
#define XVADD_CONTROL_ADDR_BASE7                0x25c
#define XVADD_CONTROL_BITS_BASE7                64
#define XVADD_CONTROL_ADDR_LENGTH_DATA          0x300
#define XVADD_CONTROL_BITS_LENGTH_DATA          32




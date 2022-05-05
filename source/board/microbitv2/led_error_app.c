/**
 * @file    led_error_app.c
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright 2020 Micro:bit Educational Foundation
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Program to display error code 0-999 on LEDs: face,E,digit,digit,digit

unsigned int g_led_error_bin_len = 2016;

// Offset of 2 byte error code, low byte first
unsigned int g_led_error_bin_code = 1908;

unsigned char g_led_error_bin_data[] =
{
    0x00, 0x00, 0x02, 0x20, 0xb5, 0x02, 0x00, 0x00, 0xdd, 0x02, 0x00, 0x00,
    0xdf, 0x02, 0x00, 0x00, 0xe1, 0x02, 0x00, 0x00, 0xe3, 0x02, 0x00, 0x00,
    0xe5, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x02, 0x00, 0x00,
    0xe9, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x02, 0x00, 0x00,
    0xed, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xef, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xb5, 0x05, 0x4c,
    0x23, 0x78, 0x33, 0xb9, 0x04, 0x4b, 0x13, 0xb1, 0x04, 0x48, 0xaf, 0xf3,
    0x00, 0x80, 0x01, 0x23, 0x23, 0x70, 0x10, 0xbd, 0x74, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x60, 0x07, 0x00, 0x00, 0x08, 0xb5, 0x03, 0x4b,
    0x1b, 0xb1, 0x03, 0x49, 0x03, 0x48, 0xaf, 0xf3, 0x00, 0x80, 0x08, 0xbd,
    0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x20, 0x60, 0x07, 0x00, 0x00,
    0x15, 0x4b, 0x00, 0x2b, 0x08, 0xbf, 0x13, 0x4b, 0x9d, 0x46, 0xa3, 0xf5,
    0x80, 0x3a, 0x00, 0x21, 0x8b, 0x46, 0x0f, 0x46, 0x13, 0x48, 0x14, 0x4a,
    0x12, 0x1a, 0x00, 0xf0, 0x47, 0xfa, 0x0f, 0x4b, 0x00, 0x2b, 0x00, 0xd0,
    0x98, 0x47, 0x0e, 0x4b, 0x00, 0x2b, 0x00, 0xd0, 0x98, 0x47, 0x00, 0x20,
    0x00, 0x21, 0x04, 0x00, 0x0d, 0x00, 0x0d, 0x48, 0x00, 0x28, 0x02, 0xd0,
    0x0c, 0x48, 0xaf, 0xf3, 0x00, 0x80, 0x00, 0xf0, 0x0f, 0xfa, 0x20, 0x00,
    0x29, 0x00, 0x00, 0xf0, 0xed, 0xf9, 0x00, 0xf0, 0xf5, 0xf9, 0x00, 0xbf,
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x20, 0x90, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x49, 0x07, 0x4a,
    0x07, 0x4b, 0x9b, 0x1a, 0x03, 0xdd, 0x04, 0x3b, 0xc8, 0x58, 0xd0, 0x50,
    0xfb, 0xdc, 0x00, 0xf0, 0x2f, 0xf8, 0xff, 0xf7, 0xb9, 0xff, 0x00, 0x00,
    0x6c, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x74, 0x00, 0x00, 0x20,
    0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7,
    0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xbf, 0xf3, 0x4f, 0x8f,
    0x05, 0x49, 0x06, 0x4b, 0xca, 0x68, 0x02, 0xf4, 0xe0, 0x62, 0x13, 0x43,
    0xcb, 0x60, 0xbf, 0xf3, 0x4f, 0x8f, 0x00, 0xbf, 0xfd, 0xe7, 0x00, 0xbf,
    0x00, 0xed, 0x00, 0xe0, 0x04, 0x00, 0xfa, 0x05, 0x03, 0x4b, 0x18, 0x68,
    0xa0, 0xf1, 0x0d, 0x03, 0x58, 0x42, 0x58, 0x41, 0x70, 0x47, 0x00, 0xbf,
    0x30, 0x01, 0x00, 0x10, 0x08, 0xb5, 0xff, 0xf7, 0xf3, 0xff, 0x40, 0xb1,
    0x4f, 0xf0, 0x80, 0x43, 0x00, 0x22, 0xc3, 0xf8, 0x0c, 0x21, 0xc3, 0xf8,
    0x10, 0x21, 0xc3, 0xf8, 0x38, 0x25, 0xff, 0xf7, 0xe7, 0xff, 0x00, 0x28,
    0x46, 0xd0, 0x4f, 0xf0, 0x80, 0x52, 0x59, 0x4b, 0xd2, 0xf8, 0x04, 0x14,
    0xc3, 0xf8, 0x20, 0x15, 0xd2, 0xf8, 0x08, 0x14, 0xc3, 0xf8, 0x24, 0x15,
    0xd2, 0xf8, 0x0c, 0x14, 0xc3, 0xf8, 0x28, 0x15, 0xd2, 0xf8, 0x10, 0x14,
    0xc3, 0xf8, 0x2c, 0x15, 0xd2, 0xf8, 0x14, 0x14, 0xc3, 0xf8, 0x30, 0x15,
    0xd2, 0xf8, 0x18, 0x14, 0xc3, 0xf8, 0x34, 0x15, 0xd2, 0xf8, 0x1c, 0x14,
    0xc3, 0xf8, 0x40, 0x15, 0xd2, 0xf8, 0x20, 0x14, 0xc3, 0xf8, 0x44, 0x15,
    0xd2, 0xf8, 0x24, 0x14, 0xc3, 0xf8, 0x48, 0x15, 0xd2, 0xf8, 0x28, 0x14,
    0xc3, 0xf8, 0x4c, 0x15, 0xd2, 0xf8, 0x2c, 0x14, 0xc3, 0xf8, 0x50, 0x15,
    0xd2, 0xf8, 0x30, 0x14, 0xc3, 0xf8, 0x54, 0x15, 0xd2, 0xf8, 0x34, 0x14,
    0xc3, 0xf8, 0x60, 0x15, 0xd2, 0xf8, 0x38, 0x14, 0xc3, 0xf8, 0x64, 0x15,
    0xd2, 0xf8, 0x3c, 0x14, 0xc3, 0xf8, 0x68, 0x15, 0xd2, 0xf8, 0x40, 0x14,
    0xc3, 0xf8, 0x6c, 0x15, 0xd2, 0xf8, 0x44, 0x24, 0xc3, 0xf8, 0x70, 0x25,
    0xff, 0xf7, 0x9c, 0xff, 0x48, 0xb1, 0x4f, 0xf0, 0x80, 0x43, 0xd3, 0xf8,
    0x00, 0x24, 0xd1, 0x07, 0x44, 0xbf, 0x6f, 0xf0, 0x01, 0x02, 0xc3, 0xf8,
    0x00, 0x24, 0x31, 0x4a, 0xd2, 0xf8, 0x88, 0x30, 0x43, 0xf4, 0x70, 0x03,
    0xc2, 0xf8, 0x88, 0x30, 0xbf, 0xf3, 0x4f, 0x8f, 0xbf, 0xf3, 0x6f, 0x8f,
    0x4f, 0xf0, 0x10, 0x23, 0xd3, 0xf8, 0x0c, 0x22, 0xd2, 0x07, 0x1e, 0xd5,
    0x29, 0x4b, 0x01, 0x22, 0xc3, 0xf8, 0x04, 0x25, 0xd3, 0xf8, 0x00, 0x24,
    0x00, 0x2a, 0xfb, 0xd0, 0x4f, 0xf0, 0x10, 0x22, 0xd2, 0xf8, 0x0c, 0x32,
    0x23, 0xf0, 0x01, 0x03, 0xc2, 0xf8, 0x0c, 0x32, 0x21, 0x4b, 0x1a, 0x46,
    0xd3, 0xf8, 0x00, 0x14, 0x00, 0x29, 0xfb, 0xd0, 0x00, 0x21, 0xc3, 0xf8,
    0x04, 0x15, 0xd2, 0xf8, 0x00, 0x34, 0x00, 0x2b, 0xfb, 0xd0, 0xff, 0xf7,
    0x4f, 0xff, 0xd3, 0xf8, 0x00, 0x22, 0x00, 0x2a, 0x03, 0xdb, 0xd3, 0xf8,
    0x04, 0x32, 0x00, 0x2b, 0x23, 0xda, 0x16, 0x4b, 0x01, 0x22, 0xc3, 0xf8,
    0x04, 0x25, 0xd3, 0xf8, 0x00, 0x24, 0x00, 0x2a, 0xfb, 0xd0, 0x4f, 0xf0,
    0x10, 0x22, 0x12, 0x21, 0xc2, 0xf8, 0x00, 0x12, 0xd3, 0xf8, 0x00, 0x24,
    0x00, 0x2a, 0xfb, 0xd0, 0x4f, 0xf0, 0x10, 0x23, 0x12, 0x22, 0xc3, 0xf8,
    0x04, 0x22, 0x0b, 0x4b, 0x1a, 0x46, 0xd3, 0xf8, 0x00, 0x14, 0x00, 0x29,
    0xfb, 0xd0, 0x00, 0x21, 0xc3, 0xf8, 0x04, 0x15, 0xd2, 0xf8, 0x00, 0x34,
    0x00, 0x2b, 0xfb, 0xd0, 0xd1, 0xe7, 0x05, 0x4b, 0x05, 0x4a, 0x1a, 0x60,
    0x08, 0xbd, 0x00, 0xbf, 0x00, 0xc0, 0x00, 0x40, 0x00, 0xed, 0x00, 0xe0,
    0x00, 0xe0, 0x01, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x90, 0xd0, 0x03,
    0x1f, 0x28, 0x86, 0xbf, 0x00, 0xf0, 0x1f, 0x00, 0x04, 0x4a, 0x4f, 0xf0,
    0xa0, 0x42, 0x01, 0x23, 0x03, 0xfa, 0x00, 0xf0, 0xc2, 0xf8, 0x08, 0x05,
    0x70, 0x47, 0x00, 0xbf, 0x00, 0x03, 0x00, 0x50, 0x80, 0x5c, 0xc1, 0xf1,
    0x04, 0x01, 0x08, 0x41, 0xc0, 0x43, 0x00, 0xf0, 0x01, 0x00, 0x70, 0x47,
    0x00, 0x23, 0x4f, 0xf0, 0xa0, 0x42, 0x83, 0x42, 0x00, 0xdb, 0x70, 0x47,
    0xd2, 0xf8, 0x04, 0x15, 0x01, 0x33, 0xf8, 0xe7, 0x38, 0xb5, 0x1c, 0x20,
    0xff, 0xf7, 0xda, 0xff, 0x0b, 0x20, 0xff, 0xf7, 0xd7, 0xff, 0x1f, 0x20,
    0xff, 0xf7, 0xd4, 0xff, 0x25, 0x20, 0xff, 0xf7, 0xd1, 0xff, 0x0b, 0x4c,
    0x0b, 0x4d, 0x1e, 0x20, 0xff, 0xf7, 0xcc, 0xff, 0x00, 0x22, 0x01, 0x20,
    0x13, 0x5d, 0x1f, 0x2b, 0x86, 0xbf, 0x03, 0xf0, 0x1f, 0x03, 0x29, 0x46,
    0x4f, 0xf0, 0xa0, 0x41, 0x01, 0x32, 0x00, 0xfa, 0x03, 0xf3, 0x05, 0x2a,
    0xc1, 0xf8, 0x0c, 0x35, 0xf0, 0xd1, 0x38, 0xbd, 0x54, 0x07, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x50, 0x2d, 0xe9, 0xf8, 0x4f, 0x80, 0x46, 0x3b, 0x48,
    0x3b, 0x4d, 0x00, 0x22, 0x82, 0x46, 0x03, 0x24, 0x13, 0x5c, 0x1f, 0x2b,
    0x86, 0xbf, 0x03, 0xf0, 0x1f, 0x03, 0x29, 0x46, 0x4f, 0xf0, 0xa0, 0x41,
    0x03, 0xf5, 0xe0, 0x73, 0x01, 0x32, 0x05, 0x2a, 0x41, 0xf8, 0x23, 0x40,
    0xf0, 0xd1, 0x33, 0x48, 0x31, 0x4d, 0x00, 0x22, 0x03, 0x24, 0x13, 0x5c,
    0x1f, 0x2b, 0x86, 0xbf, 0x03, 0xf0, 0x1f, 0x03, 0x29, 0x46, 0x4f, 0xf0,
    0xa0, 0x41, 0x03, 0xf5, 0xe0, 0x73, 0x01, 0x32, 0x05, 0x2a, 0x41, 0xf8,
    0x23, 0x40, 0xf0, 0xd1, 0xff, 0xf7, 0xac, 0xff, 0x4f, 0xf0, 0x01, 0x09,
    0x28, 0x4c, 0x00, 0x26, 0x32, 0x27, 0x00, 0x25, 0x25, 0x4b, 0x58, 0x5d,
    0xff, 0xf7, 0x80, 0xff, 0x4f, 0xf0, 0x00, 0x0b, 0x2a, 0x46, 0x59, 0x46,
    0x20, 0x46, 0x1a, 0xf8, 0x0b, 0x30, 0xff, 0xf7, 0x87, 0xff, 0xa0, 0xbb,
    0x1f, 0x2b, 0x86, 0xbf, 0x03, 0xf0, 0x1f, 0x03, 0x1b, 0x4a, 0x4f, 0xf0,
    0xa0, 0x42, 0x09, 0xfa, 0x03, 0xf3, 0xc2, 0xf8, 0x0c, 0x35, 0x0b, 0xf1,
    0x01, 0x0b, 0xbb, 0xf1, 0x05, 0x0f, 0xe7, 0xd1, 0x44, 0xf6, 0x20, 0x60,
    0x01, 0x35, 0xff, 0xf7, 0x79, 0xff, 0xff, 0xf7, 0x81, 0xff, 0x05, 0x2d,
    0xd8, 0xd1, 0x01, 0x3f, 0xd5, 0xd1, 0x13, 0x48, 0x01, 0x36, 0xff, 0xf7,
    0x6f, 0xff, 0x04, 0x2e, 0xcc, 0xd0, 0x31, 0x46, 0x64, 0x23, 0x0a, 0x22,
    0x02, 0xe0, 0x01, 0x39, 0x93, 0xfb, 0xf2, 0xf3, 0x01, 0x29, 0xfa, 0xd1,
    0x98, 0xfb, 0xf3, 0xf3, 0x93, 0xfb, 0xf2, 0xf4, 0x02, 0xfb, 0x14, 0x34,
    0x09, 0x4b, 0x04, 0xeb, 0x84, 0x04, 0x1c, 0x44, 0xba, 0xe7, 0x18, 0x46,
    0xff, 0xf7, 0x3e, 0xff, 0xd1, 0xe7, 0x00, 0xbf, 0x4a, 0x07, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x50, 0x54, 0x07, 0x00, 0x00, 0x4f, 0x07, 0x00, 0x00,
    0x40, 0x42, 0x0f, 0x00, 0x18, 0x07, 0x00, 0x00, 0x08, 0xb5, 0x03, 0x4b,
    0x98, 0x88, 0xff, 0xf7, 0x75, 0xff, 0x00, 0x20, 0x08, 0xbd, 0x00, 0xbf,
    0x04, 0x00, 0x00, 0x20, 0x08, 0xb5, 0x07, 0x4b, 0x04, 0x46, 0x13, 0xb1,
    0x00, 0x21, 0xaf, 0xf3, 0x00, 0x80, 0x05, 0x4b, 0x18, 0x68, 0x83, 0x6a,
    0x03, 0xb1, 0x98, 0x47, 0x20, 0x46, 0x00, 0xf0, 0x31, 0xf8, 0x00, 0xbf,
    0x00, 0x00, 0x00, 0x00, 0x5c, 0x07, 0x00, 0x00, 0x70, 0xb5, 0x0d, 0x4e,
    0x0d, 0x4c, 0xa4, 0x1b, 0xa4, 0x10, 0x00, 0x25, 0xa5, 0x42, 0x09, 0xd1,
    0x0b, 0x4e, 0x0c, 0x4c, 0x00, 0xf0, 0x22, 0xf8, 0xa4, 0x1b, 0xa4, 0x10,
    0x00, 0x25, 0xa5, 0x42, 0x05, 0xd1, 0x70, 0xbd, 0x56, 0xf8, 0x25, 0x30,
    0x98, 0x47, 0x01, 0x35, 0xee, 0xe7, 0x56, 0xf8, 0x25, 0x30, 0x98, 0x47,
    0x01, 0x35, 0xf2, 0xe7, 0x6c, 0x00, 0x00, 0x20, 0x6c, 0x00, 0x00, 0x20,
    0x6c, 0x00, 0x00, 0x20, 0x70, 0x00, 0x00, 0x20, 0x02, 0x44, 0x03, 0x46,
    0x93, 0x42, 0x00, 0xd1, 0x70, 0x47, 0x03, 0xf8, 0x01, 0x1b, 0xf9, 0xe7,
    0xfe, 0xe7, 0x00, 0xbf, 0xf8, 0xb5, 0x00, 0xbf, 0xf8, 0xbc, 0x08, 0xbc,
    0x9e, 0x46, 0x70, 0x47, 0xf8, 0xb5, 0x00, 0xbf, 0xf8, 0xbc, 0x08, 0xbc,
    0x9e, 0x46, 0x70, 0x47, 0x0c, 0x92, 0x52, 0x52, 0x4c, 0x04, 0x8c, 0x84,
    0x84, 0x8e, 0x1c, 0x82, 0x4c, 0x90, 0x1e, 0x1e, 0xc2, 0x44, 0x92, 0x4c,
    0x06, 0xca, 0x52, 0x5f, 0xe2, 0x1f, 0xf0, 0x1e, 0xc1, 0x3e, 0x02, 0x44,
    0x8e, 0xd1, 0x2e, 0x1f, 0xe2, 0x44, 0x88, 0x10, 0x0e, 0xd1, 0x2e, 0xd1,
    0x2e, 0x0e, 0xd1, 0x2e, 0xc4, 0x88, 0x1c, 0x0b, 0x1f, 0x25, 0x1e, 0x1b,
    0x1b, 0x00, 0x0e, 0x11, 0x15, 0x16, 0x0f, 0x18, 0x13, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0xdc, 0xfa, 0xff, 0x7f,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x90, 0xd0, 0x03, 0xde, 0xc0, 0xce, 0xfa,
    0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x02, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00
};

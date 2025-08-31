/*
MIT License - okhi - Open Keylogger Hardware Implant
pico-esp-flasher
---------------------------------------------------------------------------
Copyright 2021 Álvaro Fernández Rojas <noltari@gmail.com>
https://github.com/Noltari/pico-uart-bridge

Copyright (c) [2024] by David Reguera Garcia aka Dreg
https://github.com/therealdreg/pico-esp-flasher
https://github.com/therealdreg/okhi
https://www.rootkit.es
X @therealdreg
dreg@rootkit.es
---------------------------------------------------------------------------
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
---------------------------------------------------------------------------
WARNING: BULLSHIT CODE BY DREG X-)
---------------------------------------------------------------------------
*/

// SPDX-License-Identifier: MIT
/*
 * Copyright (c) 2021 Álvaro Fernández Rojas <noltari@gmail.com>
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 * Copyright (c) 2020 Damien P. George
 */

#if !defined(_TUSB_CONFIG_H_)
#define _TUSB_CONFIG_H_

#include <tusb_option.h>

#define CFG_TUSB_RHPORT0_MODE OPT_MODE_DEVICE

// Dreg: Set to 1 to expose a single USB CDC interface (single COM port) instead of two.
#define CFG_TUD_CDC 1
#define CFG_TUD_CDC_RX_BUFSIZE 1024
#define CFG_TUD_CDC_TX_BUFSIZE 1024

void usbd_serial_init(void);

#endif /* _TUSB_CONFIG_H_ */

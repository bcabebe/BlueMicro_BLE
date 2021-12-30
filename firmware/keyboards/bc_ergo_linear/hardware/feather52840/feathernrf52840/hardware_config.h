/*
Copyright 2020-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"
/* HARDWARE DEFINITION*/
/* key matrix size */

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS {25, 24, 1, 22, 23}
#define MATRIX_COL_PINS {14, 15, 16, 17, 18, 19, 26, 5, 6, 9, 10, 11, 12, 13}
/*
P#      dig     labelled    labelled   dig  P#
-------------------------------------------------------
P0.12   22      SDA         D2           2  P0.10/NFC2
P0.11   23      SCL         TX           0  P0.25
P1.08    5      D5          RX           1  P0.24
P0.07    6      D6          MISO        24  P0.15
P0.26    9      D9          MOSI        25  P0.13
P0.27   10      D10         SCK         26  P0.14
P0.06   11      D11         A5          19  P0.03
P0.08   12      D12         A4          18  P0.02
P1.09   13      D13         A3          17  P0.28
                USB         A2          16  P0.30
                EN          A1          15  P0.05
                VBAT        A0          14  P0.04
                            gnd         
                            aref        21  P0.31
                            3V
                            reset

https://cdn-blog.adafruit.com/uploads/2021/05/feather-nrf-pins-1536x1152.png

use                 dig ana P#      .
switch               7      P1.02   .
red led              3      P1.15   
blue led             4      P1.10
neopixel             8      P0.16
nfc1                33      P0.09
voltage monitor     20  A6  P0.29   .
*/

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define  STATUS_BLE_LED_PIN 42  // blue     // a value of 4 doesn't seem to work
#define  STATUS_KB_LED_PIN  47  // red      // a value of 3 doesn't seem to work

#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN  29            // i'm not sure a value of 20 works for this

#define TIME_TILL_HOLD 175  // 175 ms, default is 200 ms

    
#endif /* HARDWARE_CONFIG_H */
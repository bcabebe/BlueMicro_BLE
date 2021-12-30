/*
Copyright (C) 2020-2021 Jocelyn Turcotte <turcotte.j@gmail.com>

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
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

#define DEVICE_NAME_M "BC Ergo Linear" /**< Name of device. Will be included in the advertising data. */
#define DEVICE_MODEL "BC Ergo Linear" /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME "Brian Cabebe" /**< Manufacturer. Will be passed to Device Information Service. */

#define KEYBOARD_SIDE SINGLE


#define KEYMAP( \
         kB1, kC1, kD1, kE1, kF1,           kI1, kJ1, kK1, kL1, kM1,      \
         kB2, kC2, kD2, kE2, kF2, kG2, kH2, kI2, kJ2, kK2, kL2, kM2,      \
    kA3, kB3, kC3, kD3, kE3, kF3,           kI3, kJ3, kK3, kL3, kM3, kN3, \
    kA4, kB4, kC4, kD4, kE4, kF4,           kI4, kJ4, kK4, kL4, kM4, kN4, \
    kA5,                kE5, kF5,           kI5, kJ5,                kN5  \
) \
{ \
    { KC_NO, kB1,   kC1,   kD1,   kE1, kF1, KC_NO, KC_NO, kI1, kJ1, kK1,   kL1,   kM1,   KC_NO }, \
    { KC_NO, kB2,   kC2,   kD2,   kE2, kF2, kG2,   kH2,   kI2, kJ2, kK2,   kL2,   kM2,   KC_NO }, \
    { kA3,   kB3,   kC3,   kD3,   kE3, kF3, KC_NO, KC_NO, kI3, kJ3, kK3,   kL3,   kM3,   kN3   }, \
    { kA4,   kB4,   kC4,   kD4,   kE4, kF4, KC_NO, KC_NO, kI4, kJ4, kK4,   kL4,   kM4,   kN4   }, \
    { kA5,   KC_NO, KC_NO, KC_NO, kE5, kF5, KC_NO, KC_NO, kI5, kJ5, KC_NO, KC_NO, KC_NO, kN5   }  \
}

#endif /* KEYBOARD_CONFIG_H */

/*
Copyright (C) 2020-2021 Jocelyn Turcotte <turcotte.j@gmail.com>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP( /* Base */
        //                       ,------.                                          ,------.
        //                ,------|   3  |-------------.              .-------------|   8  |------.              
        //         ,------+   2  +------+   4  |   5  |              |   6  |   7  +------+   9  +------.       
        //         |   1  +------+   e  +------+------|              |------+------+   i  +------+   0  |       
        //  ,------+------+   w  +------+   r  |   t  |              |   y  |   u  +------+   o  +------+------.
        //  | Esc  |   q  +------+   d  +------+------|              |------+------+   k  +------+   p  |  -   |
        //  |------+------+   s  +------+   f  |   g  |              |   h  |   j  +------+   l  +------+------|
        //  | Tab  |   a  +------+   c  +------+------|              |------+------+   ,  +------+   ;  |  '   |
        //  |------+------+   x  +------+   v  |   b  |              |   n  |   m  +------+   .  +------+------|
        //  | Shift|   z  +------'      `-------------'              `-------------'      `------+   /  | Enter|
        //  `-------------'             ,--------------------.,--------------------.             `-------------'
        //                              |Ctl-F2|  Spc | Caps ||  Spc |  Spc |  F2  |                            
        //                              `------|------|------||------|------|------'
        //                              |      | Ctrl |  LY1 ||  LY1 |  LY2 | Alt  |
        //                              `--------------------'`--------------------'
        //
        //                       ,------.                                          ,------.
        //                ,------|   #  |-------------.              .-------------|   *  |------.              
        //         ,------+   @  +------+   $  |   %  |              |   ^  |   &  +------+   (  +------.       
        //         |   !  +------+   E  +------+------|              |------+------+   I  +------+   )  |       
        //  ,------+------+   W  +------+   R  |   T  |              |   Y  |   U  +------+   O  +------+------.
        //  | Win  |   Q  +------+   D  +------+------|              |------+------+   K  +------+   P  |  _   |
        //  |------+------+   S  +------+   F  |   G  |              |   H  |   J  +------+   L  +------+------|
        //  | Alt  |   A  +------+   C  +------+------|              |------+------+   <  +------+   :  |  "   |
        //  |------+------+   X  +------+   V  |   B  |              |   N  |   M  +------+   >  +------+------|
        //  | Shift|   Z  +------'      `-------------'              `-------------'      `------+   ?  | Shift|
        //  `-------------'             ,--------------------.,--------------------.             `-------------'
        //                              |Ctl-F2|  Spc | Caps ||  Spc |  Spc |  F2  |
        //                              `------|------|------||------|------|------'
        //                              |      | Ctrl |  LY1 ||  LY1 |  LY2 | Alt  |
        //                              `--------------------'`--------------------'
                          KC_1,             KC_2,   KC_3,   KC_4,        KC_5,                                    KC_6,        KC_7,       KC_8,   KC_9,   KC_0,            \
                          KC_Q,             KC_W,   KC_E,   KC_R,        KC_T,         KC_NO,        KC_NO,       KC_Y,        KC_U,       KC_I,   KC_O,   KC_P,            \
            KC_NO,        KC_A,             KC_S,   KC_D,   KC_F,        KC_G,                                    KC_H,        KC_J,       KC_K,   KC_L,   KC_SCLN,KC_MINS, \
            KC_NO,        KC_Z,             KC_X,   KC_C,   KC_V,        KC_B,                                    KC_N,        KC_M,       KC_COMM,KC_DOT, KC_SLSH,KC_QUOT, \
            KC_NO,                                          KC_NO,       KC_NO,                                   KC_NO,       KC_NO,                              KC_NO    \
    )};

void setupKeymap() {

    uint32_t base_tap[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
                          KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,           \
                          KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,        KC_CAPS,      KC_SPC,      KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,           \
            KC_ESC,       KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,   \
            KC_TAB,       KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,   \
            KC_NO,                                          LCTL(KC_F2), KC_SPC,                                  KC_SPC,      KC_F2,                              KC_ENT   \
    );

    uint32_t base_hold[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
                          KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,           \
                          KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,        LAYER_1,      LAYER_1,     KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,           \
            KC_LGUI,      KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,   \
            KC_LALT,      KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_NO,       KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,   \
            KC_LSHIFT,                                      KC_NO,       KC_LCTRL,                                LAYER_2,     KC_RALT,                            KC_RSHIFT \
    );

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP( /* Number Layer */
        //                       ,------.                                          ,------.
        //                ,------|  F3  |-------------.              .-------------|  F8  |------.              
        //         ,------+  F2  +------+  F4  |  F5  |              |  F6  |  F7  +------+  F9  +------.       
        //         |  F1  +------+ Entr +------+------|              |------+------+   8  +------+  F10 |       
        //  ,------+------+   0  +------+   1  |   =  |              |   *  |   7  +------+   9  +------+------.
        //  |      |      +------+  Up  +------+------|              |------+------+   5  +------+   +  | Bksp |
        //  |------+------+  <-  +------+  ->  |   -  |              |   \  |   4  +------+   6  +------+------|
        //  |      |  Ins +------+  Dn  +------+------|              |------+------+   2  +------+   =  |      |
        //  |------+------+  Del +------+ BkSp | CtlF2|              |   0  |   1  +------+   3  +------+------|
        //  |      |      +------'      `-------------'              `-------------'      `------+   /  |      |
        //  `-------------'             ,--------------------.,--------------------.             `-------------'
        //                              |      |      |      ||      |      |      |
        //                              `------|------|------||------|------|------'
        //                              |      |      |  LY1 ||  LY1 |      |      |
        //                              `--------------------'`--------------------'

                          KC_F1,            KC_F2,  KC_F3,  KC_F4,       KC_F5,                                   KC_F6,       KC_F7,      KC_F8,  KC_F9,  KC_F10,          \
                          KC_NO,            KC_0,   KC_ENT, KC_1,        KC_EQL,       LAYER_1,      LAYER_1,     KC_ASTR,     KC_7,       KC_8,   KC_9,   KC_PLUS,         \
            _______,      KC_INS,           KC_LEFT,KC_UP,  KC_RGHT,     KC_MINS,                                 KC_BSLS,     KC_4,       KC_5,   KC_6,   KC_EQL, KC_BSPC, \
            _______,      KC_NO,            KC_DEL, KC_DOWN,KC_BSPC,     LCTL(KC_F2),                             KC_0,        KC_1,       KC_2,   KC_3,   KC_SLSH,KC_NO,   \
            _______,                                        _______,     _______,                                 _______,     _______,                            _______  \
    );

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( /* Arrow Keys */
        //                       ,------.                                          ,------.
        //                ,------|  F3  |-------------.              .-------------| PgDn |------.              
        //         ,------+  F12 +------+      |      |              |      | PgUp +------+ Pause+------.       
        //         |  F11 +------+   }  +------+------|              |------+------+ SLck +------+ PrtSc|       
        //  ,------+------+  {   +------+   |  |      |              |   *  |  Del +------+ Bksp +------+------.
        //  |      |   `  +------+   ]  +------+------|              |------+------+  Up  +------+   +  | Bksp |
        //  |------+------+  [   +------+      |  0   |              |   1  |  <-  +------+  ->  +------+------|
        //  |      |   ~  +------+      +------+------|              |------+------+  Dn  +------+   =  | Ins  |
        //  |------+------+      +------+      |      |              |   0  | Home +------+  End +------+------|
        //  |      |      +------'      `-------------'              `-------------'      `------+   \  |      |
        //  `-------------'             ,--------------------.,--------------------.             `-------------'
        //                              |      |      |      ||      |      |      |
        //                              `------|------|------||------|------|------'
        //                              |      |      |      ||      |  LY2 |      |
        //                              `--------------------'`--------------------'
                          KC_F11,           KC_F12, KC_F3,  KC_NO,       KC_NO,                                   KC_NO,       KC_PGUP,    KC_PGDN,KC_PAUS,KC_PSCR,         \
                          KC_GRV,           KC_LCBR,KC_RCBR,KC_PIPE,     KC_NO,        _______,      _______,     KC_ASTR,     KC_DEL,     KC_SLCK,KC_BSPC,KC_PLUS,         \
            _______,      KC_TILD,          KC_LBRC,KC_RBRC,KC_NO,       KC_0,                                    KC_1,        KC_LEFT,    KC_UP  ,KC_RGHT,KC_EQL, KC_BSPC, \
            _______,      KC_NO,            KC_NO,  KC_NO,  KC_NO,       KC_NO,                                   KC_0,        KC_HOME,    KC_DOWN,KC_END, KC_BSLS,KC_INS,  \
            _______,                                        _______,     _______,                                 LAYER_2,     _______,                            _______  \
    );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_BL, Method::MT_TAP, base_tap[row][col]);
            matrix[row][col].addActivation(_BL, Method::MT_HOLD, base_hold[row][col]);
            matrix[row][col].addActivation(_NL, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_AL, Method::PRESS, layer2[row][col]);
        }
    }

}

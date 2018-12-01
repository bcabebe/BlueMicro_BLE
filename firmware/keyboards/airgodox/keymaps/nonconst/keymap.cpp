/*
Copyright 2018 <Pierre Constantineau>

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

/*void addLayers(const std::vector<std::tuple<uint8_t, uint8_t, layer_t>>& layers) {
    for (int row = 0; row < MATRIX_ROWS; ++row)
    { 
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            for (const auto& t : layers) 
            {
                matrix[row][col].addActivation(std::get<0>(t), std::get<1>(t), 
                        std::get<2>(t)[row][col]);
            }
        }
    }
}*/

#if KEYBOARD_SIDE == LEFT
/*
 * initiialize the default layer (QWERTY/PRESS) with the following
 * keymap
 */
main_layer_t matrix
    {{
        {KC_ESC,    KC_Q,    KC_W,    KC_E,     KC_R,     KC_T},
        {KC_TAB,      KC_NO,    KC_S,    KC_CAP_D, KC_F,     KC_G},
        {KC_LSHIFT, TG(KC_LSHIFT),    KC_X,    KC_C,     KC_V,     KC_B},
        {KC_NO,     KC_NO,   KC_NO,   TG(LAYER_1),  KC_LCTRL, KC_LGUI}
    }};

/*
 * add extra layers or single keys to this function 
 */
void setupKeymap() 
{
    layer_t layer1 {
        KEYMAP(
            KC_GRV,    KC_1,    KC_2,     KC_3,    KC_4,     KC_5,
            KC_CAPS,   KC_F1,   KC_F2,    KC_F3,   KC_F4,    KC_F5,
            KC_LSHIFT, KC_F6,   KC_F7,    KC_F8,   KC_F9,    KC_F10,
            KC_NO,     KC_NO,   KC_NO,    TG(LAYER_1), KC_LCTRL, KC_LGUI)
    };

    /*
     * add the other layers
     */
    addLayers({{_L1, _PRESS, layer1}});

    /* 
     * add special, single activations with the 
     * layer, activation method and activation
     */
    matrix[2][3].addActivation(_QWERTY, _MT_TAP, KC_Y);
    matrix[1][1].addActivation(_QWERTY, _MT_TAP, TG(KC_LSHIFT));
}

#else

/*
 * TODO: configure right side
 */

#endif /* KEYBOARD_SIDE */


/* Copyright 2020 ademey "MsMustard"
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DISABLE_TERRAZZO_EFFECT_STRIPES2
TERRAZZO_EFFECT(STRIPES2)
#   ifdef TERRAZZO_EFFECT_IMPLS

void STRIPES2(uint8_t i, bool dir) {
    uint8_t sweep[] = {1, 2, 3, 5, 7, 9, 13, 15, 17, 20};
    uint8_t levels = 10;

    for (int y = 0; y < LED_MATRIX_ROWS; y++) {
        for (int x  = 0; x < LED_MATRIX_COLS; x++) {
            uint8_t target = (x+y+i)%levels;
            terrazzo_set_pixel(x, y, floor(sweep[target]));
        }
    }
}

#   endif
#endif
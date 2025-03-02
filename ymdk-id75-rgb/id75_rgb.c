/* Copyright 2021 Mike Tsao
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

// id75_rgb.c
#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_ortho_5x15( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E } \
}

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
// { 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75 },
{ 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60 },
{ 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45 },
{ 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30 },
{ 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15 },
{ 14, 13, 12, 11, 10, 9,  8,  7,  6,  5,  4,  3,  2,  1,  0 }
}, {
    // LED Index to Physical Position
{224, 64}, {208, 64}, {192, 64}, {176, 64}, {160, 64}, {144, 64}, {128, 64}, {112, 64}, {96, 64}, {80, 64}, {64, 64}, {48, 64}, {32, 64}, {16, 64}, {0, 64},
{224, 48}, {208, 48}, {192, 48}, {176, 48}, {160, 48}, {144, 48}, {128, 48}, {112, 48}, {96, 48}, {80, 48}, {64, 48}, {48, 48}, {32, 48}, {16, 48}, {0, 48},
{224, 32}, {208, 32}, {192, 32}, {176, 32}, {160, 32}, {144, 32}, {128, 32}, {112, 32}, {96, 32}, {80, 32}, {64, 32}, {48, 32}, {32, 32}, {16, 32}, {0, 32},
{224, 16}, {208, 16}, {192, 16}, {176, 16}, {160, 16}, {144, 16}, {128, 16}, {112, 16}, {96, 16}, {80, 16}, {64, 16}, {48, 16}, {32, 16}, {16, 16}, {0, 16},
{224,  0}, {208,  0}, {192,  0}, {176,  0}, {160,  0}, {144,  0}, {128,  0}, {112,  0}, {96,  0}, {80,  0}, {64,  0}, {48,  0}, {32,  0}, {16,  0}, {0,  0},
{0, 64}, {38, 64}, {76, 64}, {114, 64}, {152, 64}, {190, 64}, {224, 64}, {0, 0}, {38, 0}, {76, 0}, {114, 0}, {152, 0}, {190, 0}, {224, 0}, 
}, {
    // LED Index to Flag
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,
} };


#endif  
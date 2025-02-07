// Copyright %(YEAR)s %(YOUR_NAME)s (@%(USER_NAME)s)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
              k02, k03, k04, k05, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, \
                        k54, k55, k56, k57, \
                                  k66, k67 \
) { \
    { k10, k11, k02, k03, k04, k05 }, \
    { k20, k21, k12, k13, k14, k15 }, \
    { k30, k31, k22, k23, k24, k25 }, \
    { k40, k41, k32, k33, k34, k35 }, \
    { KC_NO, KC_NO, k42, k43, k54, k55 }, \
    { KC_NO, KC_NO, k67, k66, k57, k56 }, \
}

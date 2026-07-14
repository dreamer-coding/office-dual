/*
 * -----------------------------------------------------------------------------
 * Project: Fossil Logic
 *
 * This file is part of the Fossil Logic project, which aims to develop high-
 * performance, cross-platform applications and libraries. The code contained
 * herein is subject to the terms and conditions defined in the project license.
 *
 * Author: Michael Gene Brockus (Dreamer)
 *
 * Copyright (C) 2024 Fossil Logic. All rights reserved.
 * -----------------------------------------------------------------------------
 */
#ifndef FOSSIL_WEAPON_H
#define FOSSIL_WEAPON_H

#include "office.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    OFFICE_WEAPON_ROCK = 0,
    OFFICE_WEAPON_PAPER,
    OFFICE_WEAPON_SCISSORS,
    OFFICE_WEAPON_STAPLER,
    OFFICE_WEAPON_COFFEE_MUG,
    OFFICE_WEAPON_PENCIL,
    OFFICE_WEAPON_TAPE,
    OFFICE_WEAPON_CLIPBOARD,
    OFFICE_WEAPON_COUNT
} office_weapon_t;

typedef struct {
    office_weapon_t id;
    const char* name;
    const char* description;
} office_weapon_info_t;

/* Weapon system */

const char* office_weapon_name(
    office_weapon_t weapon
);

const office_weapon_info_t*

office_weapon_get_info(
    office_weapon_t weapon
);

office_result_t office_weapon_compare(
    office_weapon_t attacker,
    office_weapon_t defender
);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_WEAPON_H */

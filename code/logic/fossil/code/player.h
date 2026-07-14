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

#include "weapon.h"
#include "office.h"

#ifdef __cplusplus
extern "C" {
#endif

void office_player_init(
    office_player_t* player,
    const char* name,
    bool ai
);

void office_player_select_weapon(

    office_player_t* player,
    office_weapon_t weapon
);

void office_player_add_score(
    office_player_t* player
);

void office_player_print(
    const office_player_t* player
);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_PLAYER_H */

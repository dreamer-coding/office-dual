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
#ifndef FOSSIL_OFFICE_H
#define FOSSIL_OFFICE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define OFFICE_VERSION_MAJOR 0
#define OFFICE_VERSION_MINOR 1
#define OFFICE_VERSION_PATCH 0
#define OFFICE_MAX_PLAYERS 4
#define OFFICE_MIN_PLAYERS 2
#define OFFICE_NAME_MAX 64

typedef enum {
    OFFICE_MODE_SINGLE_PLAYER = 0,
    OFFICE_MODE_MULTIPLAYER,
    OFFICE_MODE_TOURNAMENT
} office_mode_t;

typedef enum {
    OFFICE_RESULT_LOSS = -1,
    OFFICE_RESULT_DRAW = 0,
    OFFICE_RESULT_WIN = 1
} office_result_t;

typedef struct {
    char name[OFFICE_NAME_MAX];
    uint32_t score;
    bool is_ai;
} office_player_t;

typedef struct {
    office_mode_t mode;
    uint32_t rounds;
    uint32_t player_count;
    office_player_t players[OFFICE_MAX_PLAYERS];
} office_game_t;

/* Game lifecycle */

void office_init(void);

void office_shutdown(void);

void office_game_create(
    office_game_t* game,
    office_mode_t mode,
    uint32_t players
);

void office_game_start(
    office_game_t* game
);

void office_game_reset(
    office_game_t* game
);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_OFFICE_H */

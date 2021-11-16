#ifndef GAME_STATE
#define GAME_STATE

#include "raylib.h"
#include "Player/Player.h"
#include "utils.h"


typedef struct GameState {
    Player players[MAX_PLAYERS];
    unsigned long timeSinceLoad;
} GameState;

void InitGameState(GameState* gs);
void AdvanceFrame(GameState* gs);


#endif
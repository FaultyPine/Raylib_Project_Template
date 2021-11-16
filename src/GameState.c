#include "GameState.h"


void InitGameState(GameState* gs) {
    for (int playerIdx = 0; playerIdx < MAX_PLAYERS; playerIdx++) {
        Player p;
        PlayerInit(&p, playerIdx);
        gs->players[playerIdx] = p;
    }
}

void AdvanceFrame(GameState* gs) {
    for (int playerIdx = 0; playerIdx < MAX_PLAYERS; playerIdx++) {
        PlayerAdvanceFrame(&gs->players[playerIdx]);
    }
}
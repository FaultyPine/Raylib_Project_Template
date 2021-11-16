#include "Render.h"



void RenderGameState(GameState* gs) {
    for (int i = 0; i < MAX_PLAYERS; i++) {
        Player* player = &gs->players[i];
        DrawRectangleRec(player->rect, player->color);
    }
}
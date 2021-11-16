#ifndef PLAYER
#define PLAYER

#include "raylib.h"
#include "../utils.h"

#define SPEED 5

typedef struct Player {
    Rectangle rect;
    Color color;
    bool isLocal;
} Player;

void PlayerInit(Player* player, int playerIdx);
void PlayerAdvanceFrame(Player* player);


#endif
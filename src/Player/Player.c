#include "Player.h"

// based off raylib.h's color macros (need this because raylib's macros use a cast which is runtime -- i.e. can't use it in const declaration)
Color playerColors[MAX_PLAYERS]= {
    { 0, 121, 241, 255 }, // BLUE
    { 230, 41, 55, 255 }, // RED
    { 0, 228, 48, 255 }, // GREEN
    { 253, 249, 0, 255 }, // YELLOW
    { 255, 109, 194, 255 }, // PINK
    { 200, 122, 255, 255 }, // PURPLE
    { 127, 106, 79, 255 }, // BROWN
    { 0, 0, 0, 255 } // BLACK
};


void PlayerInit(Player* player, int playerIdx) {
    // init at center of screen
    player->rect = (Rectangle) { GetScreenWidth()/2.0f, GetScreenHeight()/2.0f, 50.0f, 50.0f};
    player->color = playerColors[playerIdx];
    player->isLocal = true;
}

void PlayerAdvanceFrame(Player* player) {
    int inputHorz = (IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * SPEED;
    int inputVert = (IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * SPEED;
    Rectangle* p1Tf = &player->rect;
    float new_x = p1Tf->x + inputHorz;
    float new_y = p1Tf->y + inputVert;
    bool shouldHorzClamp = new_x + p1Tf->width > GetScreenWidth() || new_x < 0;
    bool shouldVertClamp = new_y + p1Tf->height > GetScreenHeight() || new_y < 0;
    if (!shouldHorzClamp && !shouldVertClamp) {
        p1Tf->x += inputHorz;
        p1Tf->y += inputVert;
    }
}
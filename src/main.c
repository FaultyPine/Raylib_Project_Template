/*******************************************************************************************
*
*   raylib [core] example - Basic 3d example
*
*   Welcome to raylib!
*
*   To compile example, just press F5.
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2020 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "GameState.h"
#include "Render.h"

int main() 
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    SetTraceLogLevel(LOG_DEBUG);

    InitWindow(screenWidth, screenHeight, "Raylib Game!");
    
    // set game window to be initially be positioned properly -- helps if you have two monitors, since without this, the window would be in the middle of the two monitors
    SetWindowPosition(200,200);

    /*Camera camera = { 0 };
    camera.position = (Vector3){ 10.0f, 10.0f, 8.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 60.0f;
    camera.projection = CAMERA_PERSPECTIVE;*/
    
    //SetCameraMode(camera, CAMERA_FREE);

    //Vector3 cubePosition = { 0 };

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    
    GameState gs;
    InitGameState(&gs);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        //UpdateCamera(&camera);
        AdvanceFrame(&gs);
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

                RenderGameState(&gs);

            DrawText(TextFormat("Mouse x: %f\nMouse y: %f", (float)GetMouseX()/(float)GetScreenWidth(), (float)GetMouseY()/(float)GetScreenHeight()), 10, 40, 20, DARKGRAY);

            DrawFPS(10, 10);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //UnloadModel(myModel);
    //UnloadShader(myShader);

    //--------------------------------------------------------------------------------------

    return 0;
}
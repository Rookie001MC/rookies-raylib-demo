#include "global.h"

std::string currentExeDir = "";

int main(const int argc, const char* argv[])
{
    currentExeDir = argv[0];
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth  = 1280;
    const int screenHeight = 720;

    raylib::Window window(screenWidth, screenHeight, "Outline Design - CS163 Dictionary");
    SetTargetFPS(60);
    resourceLoad(currentExeDir);

    // Main game loop
    while (!window.ShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        {
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}
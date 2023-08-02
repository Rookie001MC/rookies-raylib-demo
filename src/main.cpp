#include "global.h"

std::string currentExeDir = "";

bool running = true;

int main(const int argc, const char* argv[])
{
    currentExeDir = argv[0];
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "CS163 Dictionary Frontend");
    resourceLoad(currentExeDir);
    setStyles();
    SetTargetFPS(60);

    while(running)
    {
        // Exit check
        dictMain();
    }
    
    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadTexture(ResourcesPath::headerImage);
    UnloadFont(ResourcesPath::displayRegularFont);
    UnloadFont(ResourcesPath::displayBoldFont);
    UnloadFont(ResourcesPath::wordRegularFont);
    UnloadFont(ResourcesPath::wordBoldFont);
    UnloadFont(ResourcesPath::wordItalicFont);
    CloseWindow();        // Close window and OpenGL context

}
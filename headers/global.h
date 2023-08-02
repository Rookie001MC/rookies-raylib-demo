#ifndef GLOBAL_H
#define GLOBAL_H

#include <vector>
#include "raygui.h"
#include "raylib.h"
#include "filePath.h"
#include "resources.h"
#include "frontendInit.h"

#include "dictMain.h"
struct ResourcesPath
{
    static Font displayRegularFont;
    static Font displayBoldFont;

    static Font wordRegularFont;
    static Font wordBoldFont;
    static Font wordItalicFont;

    static Texture2D headerImage;
};

#endif
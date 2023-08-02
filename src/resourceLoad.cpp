#include "global.h"

void resourceLoad(const std::string path)
{
    // path of the current executable
    std::string currentResource = (getCurrentExeDir(path)).string();


    // Load fonts
    ResourcesPath::displayRegularFont = loadFont(displayRegularFont, displayFontSize);
    ResourcesPath::displayBoldFont = loadFont(displayBoldFont, displayFontSize);

    ResourcesPath::wordRegularFont = loadFont(wordRegularFont, wordFontSize);
    ResourcesPath::wordBoldFont = loadFont(wordBoldFont, wordFontSize);
    ResourcesPath::wordItalicFont = loadFont(wordItalicFont, wordFontSize);

    // Load images
    ResourcesPath::headerImage = LoadTexture(headerImage.c_str());    
}

Font loadFont(const std::string path, const int fontSize)
{
    Font font = LoadFontEx(path.c_str(), fontSize, nullptr, 256);
    return font;
}


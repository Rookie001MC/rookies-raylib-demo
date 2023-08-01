#include "global.h"

void resourceLoad(const std::string path)
{
    // path of the current executable
    std::string currentResource = (getCurrentExeDir(path)).string();

    // Load resources
    // ---------------------
    // Images
    // ---------------------

    // raylib::Image header(currentResource + headerImage);

    // Fonts
    // ---------------------

    raylib::Font displayRegular(currentResource + displayRegularFont, displayFontSize);
    raylib::Font displayBold(currentResource + displayBoldFont, displayFontSize);

    raylib::Font wordRegular(currentResource + wordRegularFont, wordFontSize);
    raylib::Font wordBold(currentResource + wordBoldFont, wordFontSize);
    raylib::Font wordItalic(currentResource + wordItalicFont, wordFontSize);

    // ---------------------
    // End of resources
    // ---------------------
}
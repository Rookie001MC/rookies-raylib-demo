#ifndef GUI_COMPONENT_TEXTBOX
#define GUI_COMPONENT_TEXTBOX

#include "global.h"

class TextInput
{
  private:
    Rectangle textInputBox{0, 0, 0, 0};
    const char *label = nullptr;
    char *input       = nullptr;
    bool editMode     = false;

    float width                = 0;
    std::string truncatedInput = nullptr;
    void truncateInput();

  public:
    TextInput();
    TextInput(const char *label, char *input, Vector2 pos, float width);
    bool drawTextInput(float scrollY = 0);
};

#endif

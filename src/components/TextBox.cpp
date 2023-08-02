#include "components/TextBox.h"
#include "raylib.h"

TextInput::TextInput()
{
}

TextInput::TextInput(const char* label, char* input, Vector2 pos, float width)
    : textInputBox({pos.x, pos.y, width, ITEM_HEIGHT}), label(label), input(input), width(width - GuiGetStyle(TEXTBOX, TEXT_PADDING) * 1.2) {};





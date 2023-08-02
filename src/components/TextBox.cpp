#include "components/TextBox.h"
#include "style.h"
TextInput::TextInput()
{
}

TextInput::TextInput(const char* label, char* input, Vector2 pos, float width)
    : textInputBox({pos.x, pos.y, width, ITEM_HEIGHT}), label(label), input(input), width(width - GuiGetStyle(TEXTBOX, TEXT_PADDING) * 1.2) {};


void TextInput::drawTextInput(float scrollY)
{
    Rectangle textInputBoxWithScroll = textInputBox;
    textInputBoxWithScroll.y += scrollY;

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        editMode = CheckCollisionPointRec(GetMousePosition(), textInputBoxWithScroll) && GuiIsLocked();
    }
    drawDefaultText(
        label,
        {
            textInputBoxWithScroll.x,
            textInputBoxWithScroll.y - DISPLAY_FONT_SIZE - DEFAULT_TEXT_MARGIN.y,
        });
}
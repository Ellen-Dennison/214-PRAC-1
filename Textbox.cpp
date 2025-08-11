#include"Textbox.h"
#include "Shape.h"

Textbox::Textbox(int length, int width, std::string colour, int position_x, int position_y, std::string text)
{
    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;
    this->text = text;
}

Shape* Textbox::clone()
{
    return new Textbox(*this);

}

std::string Textbox::getText()
{ return text; }
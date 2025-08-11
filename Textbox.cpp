#include"Textbox.h"
#include "Shape.h"

Textbox::Textbox(int length, int width, std::string colour, int position_x, int position_y, std::string type, std::string text)
        :Shape(length,width,colour,position_x,position_y,type){
            this->text = text;
        }

Shape* Textbox::clone()
{
    return new Textbox(*this);
}

std::string Textbox::getText()
{ return text; }
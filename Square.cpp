#include "Square.h"
#include "Shape.h"

Square::Square(int length, int width, std::string colour, int position_x, int position_y)
{
    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;
}

Shape* Square::clone()
{
    return new Square(*this);
}
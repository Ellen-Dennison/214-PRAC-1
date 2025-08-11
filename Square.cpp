#include "Square.h"
#include "Shape.h"

Square::Square(int length, int width, std::string colour, int position_x, int position_y, std::string type)
        : Shape(length,width,colour,position_x,position_y,type){}

Shape* Square::clone()
{
    return new Square(*this);
}
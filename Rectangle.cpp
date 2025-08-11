#include "Rectangle.h"

Shape* Rectangle::clone()
{    
    return new Rectangle(*this);

}

Rectangle::Rectangle(int length, int width, std::string colour, int position_x, int position_y,std::string type)
           : Shape(length,width,colour,position_x,position_y,type){}
           
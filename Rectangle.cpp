#include "Rectangle.h"

Shape* Rectangle::clone()
{    
    Rectangle *clone = new Rectangle(this->length,this->width,this->colour, this->position_x, this->position_y);
    return clone;

}


Rectangle::Rectangle(int length, int width, std::string colour, int position_x, int position_y)
{
    this.length = length;
    this.width = width;
    this.colour = colour;
    this.position_x = position_x;
    this.position_y = position_y;
}

#include "Rectangle.h"

Shape* Rectangle::clone()
{    
    Rectangle *clone = new Rectangle(this->length,this->width,this->colour, this->position_x, this->position_y);
    return clone;

}

#include "Shape.h"


 Shape::Shape(int length, int width, std::string colour, int position_x, int position_y, std::string type)
       : length(length), width(width), colour(colour), position_x(position_x), position_y(position_y), type(type){}

int Shape::getLength()
{ return length; }

std::string Shape::getType(){
      return type;
}

int Shape::getWidth()
{ return width; }

std::string Shape::getColour()
{ return colour; }

int Shape::getPosition_x()
{ return position_x; }

int Shape::getPosition_y()
{ return position_y;}


void Shape::setLength(int length)
{ this->length = length; }

void Shape::setWidth(int width)
{ this->width = width;}

void Shape::setColour(std::string colour)
{ this->colour = colour; }

void  Shape::setPosition_x(int position_x)
{ this->position_x = position_x; }

void Shape::setPosition_y(int position_y)
{ this->position_y = position_y; }

void Shape::setType(std::string type){
      this->type = type;
}
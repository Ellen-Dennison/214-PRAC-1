#include "Shape.h"

/* Shape::Shape(int length, int width, std::string colour, int position_x, int position_y){
    this.length = length;
    this.width = width;
    this.colour = colour;
    this.position_x = position_x;
    this.position_y = position_y;
} */

  int Shape::getLength()
  { return length; }

  int Shape::getWidth()
  { return width; }

  std::string Shape::getColour(){
    return colour;
  }

  int Shape::getPosition_x(){
    return position_x;
  }

  int Shape::getPosition_y(){
    return position_y;
  }
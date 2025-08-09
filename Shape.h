#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string> 

class Shape
{ 
  private:
  int length;
  int width;
  std::string colour;
  int position_x;
  int position_y;

  public:
  virtual Shape* clone() = 0;
  Shape(int length, int width, std::string colour, int position_x, int position_y)
  :length(length), width(width), colour(colour), position_x(position_x), position_y(position_y)
  {};

};

#endif 
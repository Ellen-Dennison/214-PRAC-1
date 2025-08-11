#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <iostream>
#include <string>

class Rectangle:public Shape
{  
  private:
  int length;
  int width;
  std::string colour;
  int position_x;
  int position_y;
  std::string type;

  public:
  virtual Shape* clone();
  Rectangle(int length, int width, std::string colour, int position_x, int position_y,std::string type);
};

#endif 
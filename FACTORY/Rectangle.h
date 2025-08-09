#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle:public Shape
{  
  private:
  int length;
  int width;
  string colour;
  int position_x;
  int position_y;

  public:
  virtual Shape* clone();
};

#endif 
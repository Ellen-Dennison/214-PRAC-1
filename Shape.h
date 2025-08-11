#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "Shape.h"
#include <string> 

class Shape
{ 
  private:
  int length;
  int width;
  std::string colour;
  int position_x;
  int position_y;
  std::string type;

  public:
  Shape(int length, int width, std::string colour, int position_x, int position_y, std::string type);
  virtual Shape* clone() = 0;
  virtual ~Shape() {}

  int getLength();
  int getWidth();
  std::string getColour();
  int getPosition_x();
  int getPosition_y();
  std::string getType();

  virtual void setLength(int length);
  virtual void setType(std::string type);
  virtual void setWidth(int width);
  virtual void setColour(std::string colour);
  virtual void setPosition_x(int position_x);
  virtual void setPosition_y(int position_y);
  
};

#endif 
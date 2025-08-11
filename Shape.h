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
  Shape(int length, int width, std::string colour, int position_x, int position_y);
  virtual Shape* clone() = 0;

  int getLength();

  int getWidth();

  std::string getColour();

  int getPosition_x();

  int getPosition_y();
  
};

#endif 
#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include <string>

class Square:public Shape
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
  Square(int length, int width, std::string colour, int position_x, int position_y, std::string type);
  
};


#endif 
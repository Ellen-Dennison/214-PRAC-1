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

  public:
  virtual Shape* clone();
  
};


#endif 
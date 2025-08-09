#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "Shape.h"

class Textbook:public Shape
{
   
   private:
  int length;
  int width;
  string colour;
  int position_x;
  int position_y;
  string text;

  public:
  virtual Shape* clone();
};


#endif 
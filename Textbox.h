#ifndef TEXTBOX_H
#define TEXTBOX_H
#include "Shape.h"

class Textbox:public Shape
{
  private:
  int length;
  int width;
  std::string colour;
  int position_x;
  int position_y;
  std::string text;

  public:
  virtual Shape* clone();
  Textbox(int length, int width, std::string colour, int position_x, int position_y, std::string text);
  std::string getText();
  
};


#endif 
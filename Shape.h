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
  //Shape(int length, int width, std::string colour, int position_x, int position_y);

  virtual int getLength();

  virtual int getWidth();

  virtual std::string getColour();

  virtual int getPosition_x();

  virtual int getPosition_y();

  //setters
  virtual void setLength(int length);
  virtual void setWidth(int width);
  virtual void setColour(std::string colour);
  virtual void setPosition_x(int position_x);
  virtual void setPosition_y(int position_y);

  
  
};

#endif 
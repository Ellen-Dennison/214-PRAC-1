#ifndef SHAPE_H
#define SHAPE_H

class Shape
{ 
  private:
  int length;

  public:
  virtual Shape* clone() = 0;
};

#endif 
#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H
#include "ShapeFactory.h"
#include "Rectangle.h"


class RectangleFactory:public ShapeFactory
{
   
   public:
   virtual Shape* createshape();
   virtual void toString();
   RectangleFactory(int length, int width, std::string colour, int position_x,int position_y);
   ~RectangleFactory(); //!

   private:
   int length;
   int width;
   std::string colour;
   int position_x;
   int position_y;
   Rectangle *r1;

      
};

#endif
#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H
#include "ShapeFactory.h"

class RectangleFactory:public ShapeFactory
{
   
   public:
   virtual Shape* createshape();
   virtual void toString();
      
};

#endif
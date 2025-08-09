#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H
#include "ShapeFactory.h"

class TextboxFactory:public ShapeFactory
{
   public:
   virtual Shape* createshape();
   virtual void toString();
  
};

#endif
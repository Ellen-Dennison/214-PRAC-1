#ifndef TEXTBOOKFACTORY_H
#define TEXTBOOKFACTORY_H
#include "ShapeFactory.h"

class TextBookFactory:public ShapeFactory
{
   public:
   virtual Shape* createshape();
   virtual void toString();
  
};

#endif
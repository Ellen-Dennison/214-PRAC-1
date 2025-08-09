#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H
#include "ShapeFactory.h"

class SqaureFactory:public ShapeFactory
{
   public:
   virtual Shape* createshape();
   virtual void toString();
   
};

#endif
#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H
#include "ShapeFactory.h"
#include "Square.h"

class SqaureFactory:public ShapeFactory
{

   public:
   SqaureFactory(int length, int width, std::string colour, int position_x,int position_y,std::string type);
   ~SqaureFactory();
   virtual Shape* createshape();
   virtual void toString();

   private:
   int length;
   int width;
   std::string colour;
   int position_x;
   int position_y;
   std::string type;
   Square *s1;
   
};

#endif
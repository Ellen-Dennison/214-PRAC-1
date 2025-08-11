#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H
#include "ShapeFactory.h"
#include "Textbox.h"

class TextboxFactory:public ShapeFactory
{


   public:
   TextboxFactory(int length, int width, std::string colour, int position_x,int position_y,std::string type, std::string text);
   ~TextboxFactory();
   virtual Shape* createshape();
   virtual void toString();

   private:
   int length;
   int width;
   std::string colour;
   int position_x;
   int position_y;
   std::string text;
   std::string type;
   Textbox *t1;
   
  
};

#endif
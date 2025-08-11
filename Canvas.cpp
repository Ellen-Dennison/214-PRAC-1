#include "Canvas.h"
#include "Memento.h"
#include "TextboxFactory.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include <iostream>
using namespace std;

void Canvas::setShape(Shape* newShape) 
{
    if (!newShape) return;  // Safety check

    if (!shapes) {
        // If shapes is null, clone the new shape
        shapes = newShape->clone();
    } else {
        // Otherwise, copy properties
        shapes->setLength(newShape->getLength());
        shapes->setWidth(newShape->getWidth());
        shapes->setColour(newShape->getColour());
        shapes->setPosition_x(newShape->getPosition_x());
        shapes->setPosition_y(newShape->getPosition_y());
    }
}


Shape* Canvas::getShape(){//returns the current state of the object
    return this->shapes;
}

Memento* Canvas::captureCurrent() //saves the state
{
    Memento* currentShapes  = new Memento(shapes);
    return currentShapes;
}

void Canvas::undoAction(Memento* prev)//returns the last saved state
{
    //if(shapes){
        //delete shapes;
    //}
    this->shapes = prev->shapes->clone();
}

void Canvas::createFactory(char kind, int length, int width, string colour, int position_x,int position_y,std::string type, std::string txt)
{
   if (kind == 'r')
   {
      RectangleFactory r1(length, width,colour,position_x,position_y,type) ;
      r1.createshape();
      r1.toString();
      //delete r1;
      
   }
   else if (kind == 's')
   {
      SqaureFactory s1(length, width,colour,position_x,position_y,type) ;
      s1.createshape();
      s1.toString();
      //delete s1;
      
   }
   else if (kind == 't')
   {
      TextboxFactory t1(length, width,colour,position_x,position_y, type,txt);
      t1.createshape();
      t1.toString();

   }

}

Canvas::Canvas() : shapes(nullptr) {}  // Initialize to nullptr

Canvas::~Canvas(){
    delete shapes;
}
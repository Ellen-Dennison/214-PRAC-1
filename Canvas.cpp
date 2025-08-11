#include "Canvas.h"
#include "Memento.h"
#include "TextboxFactory.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include <iostream>
using namespace std;

void Canvas::setShape(Shape* shapes)
{
    //this function sets the current "state" of the object, unsaved
    this->shapes = shapes;
    //this->shapes->clone(shapes);
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
    this->shapes = prev->shapes;
}

Canvas::Canvas()
{
   //shapes()
   
}


void Canvas::createFactory(char kind, int length, int width, string colour, int position_x,int position_y, std::string txt)
{
   if (kind == 'r')
   {
      RectangleFactory r1(length, width,colour,position_x,position_y) ;
      r1.createshape();
      r1.toString();
      
   }
   else if (kind == 's')
   {
      SqaureFactory s1(length, width,colour,position_x,position_y) ;
      s1.createshape();
      s1.toString();
   }
   else if (kind == 't')
   {
      TextboxFactory t1(length, width,colour,position_x,position_y,txt);
      t1.createshape();
      t1.toString();
   }

}
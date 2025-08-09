#include "Canvas.h"
#include "Memento.h"
#include "TextboxFactory.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include <iostream>
using namespace std;

/* void Canvas::setShape(Shape* shapes){//this function sets the current "state" of the object, unsaved
    this->shapes = shapes;
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
 */
Canvas::Canvas(string type, int length, int width, string colour, int position_x,int position_y, string text = " ")
{
   //shapes()
   if (type == "r")
   {
      RectangleFactory *r1 = new RectangleFactory(length, width,colour,position_x,position_y) ;
      r1->createshape();
      std::cout << r1->toString() << std::endl;
   }
   else if (type == "s")
   {}
   else if (type == "t")
   {}

}

#include "Canvas.h"
#include "Memento.h"
using namespace std;

void Canvas::setShape(Shape* shapes){//this function sets the current "state" of the object, unsaved
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

//Canvas::Canvas(int length, int width, string colour, int position_x,int position_y, string text = " ")

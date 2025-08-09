#include "Canvas.h"
#include "Memento.h"
using namespace std;

Memento* Canvas::captureCurrent()
{
    Memento* currentShapes  = new Memento(shapes);
    return currentShapes;
}

void Canvas::undoAction(Memento* prev)
{
    this->shapes = prev->shapes;
}

Canvas::Canvas(int length, int width, string colour, int position_x,int position_y, string text = " ")
{
   //shapes()
}

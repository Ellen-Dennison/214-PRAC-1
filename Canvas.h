#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include "Memento.h"
class Canvas
{
    Shape* shapes;

    public:
    Canvas(int length, int width, string colour, int position_x,int position_y, string text = " ");
    Memento* captureCurrent();
    void undoAction(Memento* prev);
};

#endif
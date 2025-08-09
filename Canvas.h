#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include "Memento.h"
class Canvas
{
    Shape* shapes;

    public:
    Canvas(char kind,int length, int width, std::string colour, int position_x,int position_y);
    Memento* captureCurrent();
    void undoAction(Memento* prev);
};

#endif
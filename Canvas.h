#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include "Memento.h"
class Canvas{
    Shape* shapes;
    public:
        void setShape(Shape* shapes); //setting the current "state"
        Shape* getShape(); //returns the current "state" that has not been saved
        Memento* captureCurrent();
        void undoAction(Memento* prev);
};

#endif
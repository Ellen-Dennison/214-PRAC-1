#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include "Memento.h"
class Canvas{
    Shape* shapes;
    public:
        Memento* captureCurrent();
        void undoAction(Memento* prev);
          
};

#endif
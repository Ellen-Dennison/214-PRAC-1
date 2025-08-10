#ifndef MEMENTO_H
#define MEMENTO_H
#include "Shape.h"

class Memento{
    Shape* shapes;
    friend class Canvas;
    public:
          Memento(Shape* elements);
          Shape* getShape();
          ~Memento();
};

#endif
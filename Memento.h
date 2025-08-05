#ifndef MEMENTO_H
#define MEMENTO_H
#include "Shape.h"

class Memento{
    Shape shapes;
    
    public:
          Memento(Shape* elements);
};
#endif
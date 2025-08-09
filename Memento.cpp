#include "Memento.h"
#include "Shape.h"


Memento::Memento(Shape* shapes)//stores saved state/shape into local variable
{
    this->shapes = shapes;
}

Shape* Memento::getShape(){//method for getting the currently saved shape/state
    return this->shapes;
}


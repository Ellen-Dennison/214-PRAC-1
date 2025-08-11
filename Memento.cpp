#include "Memento.h"
#include "Shape.h"


Memento::Memento(Shape* state)//stores saved state/shape into local variable
{
    this->shapes = state->clone();
}

Shape* Memento::getShape(){//method for getting the currently saved shape/state
    return this->shapes;
}

Memento::~Memento(){
    delete shapes;
}


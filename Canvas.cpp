#include<iostream>
#include "Canvas.h"
#include "Memento.h"
using namespade std;

Memento* Canvas::captureCurrent(){
    Memento* currentShapes  = new Memento(shapes);
}

void Canvas::undoAction(Memento* prev){
    this->shapes = prev;
}


#include<iostream>
using namespace std;
#include "Memento.h"
#include "Shape.h"

Memento::Memento(Shape* shapes){
    this->shapes = shapes;
}

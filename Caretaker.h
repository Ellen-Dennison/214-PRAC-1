#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"
#include<list>
using namespace std;

class CareTaker{
    list<Memento*> mementoList;

    public:
            void add(Memento* state); //adding a memento to the list
            Memento* getState(int index); //getting a specific memento from the list
};
#endif
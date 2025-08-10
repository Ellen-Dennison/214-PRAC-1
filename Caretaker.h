#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"
#include<vector>
using namespace std;

class CareTaker{
    vector<Memento*> mementoList;

    public:
            void add(Memento* shape); //adding a memento to the list
            Memento* getShape(int index); //getting a specific memento from the list
};
#endif
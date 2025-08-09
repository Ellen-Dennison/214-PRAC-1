#include<list>
#include "CareTaker.h"
#include "Memento.h"
using namespace std;

void CareTaker::add(Memento* shapes)//adds saved state to the list
{
    mementoList.push_back(shapes);//more like a queue since a state is added at the back, FIFO
}

Memento* CareTaker::getShape(int index)
{
    return mementoList[index];
}



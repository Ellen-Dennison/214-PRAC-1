#include <list>
#include "CareTaker.h"
#include "Memento.h"
using namespace std;

void CareTaker::add(Memento* state)
{
    mementoList.push_back(state);//more like a queue since a state is added at the back, FIFO
}

Memento* CareTaker::getState(int index)
{
    return mementoList[index];
}



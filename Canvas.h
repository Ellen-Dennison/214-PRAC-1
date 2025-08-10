#ifndef CANVAS_H
#define CANVAS_H
#include "Shape.h"
#include "Memento.h"
#include<string>
using namespace std;
class Canvas
{
    Shape* shapes;

    public:
    //Canvas(int length, int width, std::string colour, int position_x,int position_y, string text = " ");
    void setShape(Shape* shapes);
    Shape* getShape();
    Memento* captureCurrent();
    void undoAction(Memento* prev);
};

#endif
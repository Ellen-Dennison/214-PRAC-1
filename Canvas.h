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
    Canvas(char kind,int length, int width, std::string colour, int position_x,int position_y, std::string txt = " ");
    //Canvas(char kind,int length, int width, std::string colour, int position_x,int position_y);
    Canvas();
    void setShape(Shape* shapes);
    Shape* getShape();
    Memento* captureCurrent();
    void undoAction(Memento* prev);
    ~Canvas();
};

#endif
#include<iostream>
#include "Canvas.h"
#include "Memento.h"
#include "CareTaker.h"
#include "Shape.h"

using namespace std;

int main(){
    //Testing the memento part of the system
    Shape* shapes1 = new Shape(10,5,"green",3,6);
    Shape* shapes2 = new Shape(3,8,"red",8,8);
    Canvas canvas1 = new Canvas();


    canvas1.setShape(shapes1);//setting current state
    canvas1.setShape(shapes2); //current state is now shapes2

    CareTaker list = new CareTaker();
    list.add(canvas1.captureCurrent());//saves current shape/state then adds to the list

    Shape* shapes3 = new Shape(5,5,"yellow",6,6);

    cout<<"Current shape on the canvas:\n";
    cout<<"Length: "<<getShape()->length<<endl;
    cout<<"Width: "<<getShape()->width<<endl;
    cout<<"Colour: "<<getShape()->colour<<endl;
    cout<<"Position_x: "<<getShape()->position_x<<endl;
    cout<<"Position_y: "<<getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";

    canvas1.undoAction(list.getShape(0));//see shape 2
    cout<<"Current shape on the canvas:\n";
    cout<<"Length: "<<getShape()->length<<endl;
    cout<<"Width: "<<getShape()->width<<endl;
    cout<<"Colour: "<<getShape()->colour<<endl;
    cout<<"Position_x: "<<getShape()->position_x<<endl;
    cout<<"Position_y: "<<getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";

    Shape* shapes4 = new Shape(10,10,"blue",7,7);
    canvas1.setShape(shapes4);
    list.add(canvas1.captureCurrent());//adding shape 4

    cout<<"Second saved shape: "<<endl;
    canvas1.undoAction(list.getShape(1));
    cout<<"Length: "<<getShape()->length<<endl;
    cout<<"Width: "<<getShape()->width<<endl;
    cout<<"Colour: "<<getShape()->colour<<endl;
    cout<<"Position_x: "<<getShape()->position_x<<endl;
    cout<<"Position_y: "<<getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";



}

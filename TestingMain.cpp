<<<<<<< HEAD
#include <iostream>
#include <string>
#include "Canvas.h"

int main()
{  
   std::string colour = "blue";
   char kind = 'r';
   Canvas c1(kind,2,3,colour,3,5);
   

   
}
=======
#include<iostream>
#include "Canvas.h"
#include "Rectangle.h"
#include "Square.h"
#include "Memento.h"
#include "CareTaker.h"
#include "Shape.h"
#include<string>

using namespace std;

int main(){
    //Testing the memento part of the system
    Shape* shapes1 = new Rectangle(10,5,"green",3,6);
    Shape* shapes2 = new Square(3,8,"red",8,8);
    Canvas canvas1;


    canvas1.setShape(shapes1);//setting current state
    canvas1.setShape(shapes2); //current state is now shapes2

    CareTaker list;
    list.add(canvas1.captureCurrent());//saves current shape/state then adds to the list

    Shape* shapes3 = new Rectangle(5,5,"yellow",6,6);

    cout<<"Current shape on the canvas:\n";
    cout<<"Length: "<<canvas1.getShape()->length<<endl;
    cout<<"Width: "<<canvas1.getShape()->width<<endl;
    cout<<"Colour: "<<canvas1.getShape()->colour<<endl;
    cout<<"Position_x: "<<canvas1.getShape()->position_x<<endl;
    cout<<"Position_y: "<<canvas1.getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";

    canvas1.undoAction(list.getShape(0));//see shape 2
    cout<<"Current shape on the canvas:\n";
    cout<<"Length: "<<canvas1.getShape()->length<<endl;
    cout<<"Width: "<<canvas1.getShape()->width<<endl;
    cout<<"Colour: "<<canvas1.getShape()->colour<<endl;
    cout<<"Position_x: "<<canvas1.getShape()->position_x<<endl;
    cout<<"Position_y: "<<canvas1.getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";

    Shape* shapes4 = new Square(10,10,"blue",7,7);
    canvas1.setShape(shapes4);
    list.add(canvas1.captureCurrent());//adding shape 4

    cout<<"Second saved shape: "<<endl;
    canvas1.undoAction(list.getShape(1));
   cout<<"Length: "<<canvas1.getShape()->length<<endl;
    cout<<"Width: "<<canvas1.getShape()->width<<endl;
    cout<<"Colour: "<<canvas1.getShape()->colour<<endl;
    cout<<"Position_x: "<<canvas1.getShape()->position_x<<endl;
    cout<<"Position_y: "<<canvas1.getShape()->position_y<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n";

    return 0;
}
>>>>>>> c5db502506158f314eba519a76a3dda6493f57cb

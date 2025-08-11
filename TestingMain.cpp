#include<iostream>
#include "Canvas.h"
#include "Memento.h"
#include "Shape.h"
#include "CareTaker.h"
#include "Rectangle.h"
#include "Square.h"
#include "Textbox.h"
#include<string>
#include<vector>
using namespace std;

int main(){
    //Testing the memento part of the system
    //declaring
    Canvas* canvas1 = new Canvas();
    Shape* square = new Square(6,6,"yellow",8,8);
    CareTaker* storage = new CareTaker();

    //calling functions
    //canvas1.setShape(rectangle);//first state
    canvas1->setShape(square);//second state
    
    storage->add(canvas1->captureCurrent());//saving state and adding to the list, second state has been saved
    cout<<"Current state of the canvas: "<<endl;
    
    if (Shape* current = canvas1->getShape()) {
        cout << "Length: " << current->getLength() << endl;
        cout << "Width: " << current->getWidth() << endl;
        cout << "Colour: " << current->getColour() << endl;
        cout << "Position_x: " << current->getPosition_x() << endl;
        cout << "Position_y: " << current->getPosition_y() << endl;
        cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    }
    delete storage;
    delete canvas1;
    

    //Testing the Factory Method of the system:
    return 0;
}
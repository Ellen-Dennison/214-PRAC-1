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

int main()
{   
    
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

    
    //!TESTING THE FACTORIES
    int length = 6;
    int width = 6;
    std::string colour = "blue";
    int position_x = 2;
    int position_y = 2;
    Rectangle *new1 = new Rectangle(length,  width, colour, position_x, position_y);
    Shape *new2 = new1->clone();

    delete new1;
    delete new2;

    Canvas *newCanvas = new Canvas();
    newCanvas->createFactory('t',length,  width, colour, position_x, position_y, "Hello");
    newCanvas->createFactory('r',length,  width, colour, position_x, position_y);
    newCanvas->createFactory('s',length,  width, colour, position_x, position_y);
    delete newCanvas; 
    
    return 0; 
}

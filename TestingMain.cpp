#include<iostream>
#include "Canvas.h"
#include "Memento.h"
#include "Shape.h"
#include "CareTaker.h"
#include "Rectangle.h"
#include "Square.h"
#include "Textbox.h"
#include "PDFExporter.h"
#include "PNGExporter.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "ExportCanvas.h"
#include "TextboxFactory.h"
#include<string>
#include<vector>
using namespace std;

int main()
{   
    //!TESTING THE PROTOTYPE
    cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    int length = 6;
    int width = 6;
    std::string colour = "blue";
    int position_x = 2;
    int position_y = 2;
    std::string type = "Rectangle";
    Rectangle *new1 = new Rectangle(length,  width, colour, position_x, position_y, type);
    Square *new3 = new Square(length,  width, colour, position_x, position_y, "Square");
    Shape *new2 = new1->clone();
    Shape *new4 = new3->clone();
    std::cout << "NEW1 COLOUR " << new1->getColour() << std::endl;
    std::cout << "NEW2 COLOUR AFTER USING THE CLONE METHOD " << new2->getColour() << std::endl;
     
    std::cout << "NEW3 TYPE " << new3->getType() << std::endl;
    std::cout << "NEW4 TYPE AFTER USING THE CLONE METHOD " << new4->getType() << std::endl;


    delete new1; delete new2;
    delete new3; delete new4;
    
    cout<<"---------------------------------------------------------------------------------------------------------------------\n";

    //!Testing the memento part of the system
    //declaring
    Canvas* canvas1 = new Canvas();
    Shape* square = new Square(6,6,"yellow",8,8,"square");
    Shape* rectangle = new Rectangle(7,8,"red",10,7,"rectangle");
    CareTaker* storage = new CareTaker();

    //calling functions
    canvas1->setShape(rectangle);//first state
    canvas1->setShape(square);//second state
    
    storage->add(canvas1->captureCurrent());//saving state and adding to the list, second state has been saved
    cout<<"Current state of the canvas: "<<endl;
    
    if (Shape* current = canvas1->getShape()) {
        cout<<"Shape Type: "<<current->getType()<<endl;
        cout << "Length: " << current->getLength() << endl;
        cout << "Width: " << current->getWidth() << endl;
        cout << "Colour: " << current->getColour() << endl;
        cout << "Position_x: " << current->getPosition_x() << endl;
        cout << "Position_y: " << current->getPosition_y() << endl;
        cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    }

    //adding another state
    Shape* textbox = new Textbox(7,7,"white",5,6,"textbox","Hello World");
    canvas1->setShape(textbox);//3rd state
    storage->add(canvas1->captureCurrent());//adding 3rd state to vector, current and saved state
    cout<<"Current state of the canvas: "<<endl;
    
    if (Shape* current = canvas1->getShape()) {
        cout<<"Shape Type: "<<current->getType()<<endl;
        cout << "Length: " << current->getLength() << endl;
        cout << "Width: " << current->getWidth() << endl;
        cout << "Colour: " << current->getColour() << endl;
        cout << "Position_x: " << current->getPosition_x() << endl;
        cout << "Position_y: " << current->getPosition_y() << endl;
        
        cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    }

    //getting previous state
    cout << "Memento list size: " << storage->getSize() << endl;
    /*canvas1->undoAction(storage->getShape(0));
    cout<<"Previous state of the canvas: "<<endl;
    
    if (Shape* current = canvas1->getShape()) {
        cout<<"Shape Type: "<<current->getType()<<endl;
        cout << "Length: " << current->getLength() << endl;
        cout << "Width: " << current->getWidth() << endl;
        cout << "Colour: " << current->getColour() << endl;
        cout << "Position_x: " << current->getPosition_x() << endl;
        cout << "Position_y: " << current->getPosition_y() << endl;
        cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    }*/

    //delete storage;
    //delete canvas1;
    

    //!TESTING THE FACTORIES
    /*cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    Canvas *newCanvas = new Canvas();
    newCanvas->createFactory('t',length,  width, colour, position_x, position_y, type, "Hello");
    newCanvas->createFactory('r',length,  width, colour, position_x, position_y,type);
    newCanvas->createFactory('s',length,  width, colour, position_x, position_y,type);
    delete newCanvas;
    cout<<"---------------------------------------------------------------------------------------------------------------------\n";

    //!TESTING THE TEMPLATE METHOD
    cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    std::string typ;
    ExportCanvas *ext;
    std:: cout << "what file type would you like to export to\n";
    std::cin >> typ;
    if (typ == "PDF")
    { ext = new PDFExporter(); }
    else if (typ == "PNG")
    { ext = new PNGExporter(); }
    ext->exportToFile();
    cout<<"---------------------------------------------------------------------------------------------------------------------\n";
*/
    return 0; 


}

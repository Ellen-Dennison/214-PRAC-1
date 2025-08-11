#include "ExportCanvas.h"
#include <iostream>

void ExportCanvas::exportToFile ()
{  
   prepareCanvas();
   renderElements();
   saveToFile();
}

void ExportCanvas::prepareCanvas()
{
   std::cout << "Preparing your canvas\n";
   canvas->getShape();
    
}
void ExportCanvas::renderElements()
{
    std::cout << "Rendering your canvas\n";

}


ExportCanvas::~ExportCanvas()
{
   if (!NULL)
   {delete canvas;}
}

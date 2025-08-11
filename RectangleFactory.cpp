#include "RectangleFactory.h"


RectangleFactory::RectangleFactory(int length, int width, std::string colour, int position_x,int position_y)
{
    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;

}

Shape* RectangleFactory::createshape()
{   
    r1 = new Rectangle(this->length,this->width,this->colour,this->position_x,this->position_y);
    return r1;
}

void RectangleFactory::toString()
{
   
    std::cout << "\nThis is your Rectangle\n ";
    //std::cout << " ";
    for (int i = 0; i < width; i++)
    { std::cout << "_"; }
    std::cout << "\n";
 
    /* for (int i = 0; i < length - 2; i++)
    {
        std::cout << "|";
        for (int j = 0; j < width; j++)
        { std::cout << "_"; }
        std::cout << "|\n";

    } */

    std::cout << "|";
    for (int i = 0; i < width; i++)
    { std::cout << "_";}
    std::cout << "|\n";
    std::cout << "\n";

   
}

RectangleFactory::~RectangleFactory()
{
   if(!NULL)
   {delete r1;}
}

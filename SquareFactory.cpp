#include "SquareFactory.h"

SqaureFactory::SqaureFactory(int length, int width, std::string colour, int position_x,int position_y)
{
    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;
    
}

Shape* SqaureFactory::createshape()
{
    Square *s1 = new Square(this->length,this->width,this->colour,this->position_x,this->position_y);
    return s1;
}

void SqaureFactory::toString()
{

    std::cout << "This is your Sqaure\n";
    std::cout << " ";
    for (int i = 0; i < width; i++)
    { std::cout << "_"; }
    std::cout << "\n";

    for (int i = 0; i < length - 2; i++)
    {
        std::cout << "|";
        for (int j = 0; j < width; j++)
        { std::cout << "_"; }
        std::cout << "|\n";

    }

    std::cout << "|";
    for (int i = 0; i < width; i++)
    { std::cout << "_";}
    std::cout << "|\n";


}
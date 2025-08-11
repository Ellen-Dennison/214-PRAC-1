#include "TextboxFactory.h"


TextboxFactory::TextboxFactory(int length, int width, std::string colour, int position_x,int position_y, std::string type, std::string text)
{

    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;
    this->type = type;
    this->text = text;

}


Shape* TextboxFactory::createshape()
{

    t1 = new Textbox(this->length,this->width,this->colour,this->position_x,this->position_y, this->type, this->text);
    return t1;

}

void TextboxFactory::toString()
{
   
    std::cout << "\nThis is your Textbox\n ";
    //std::cout << " ";
    for (int i = 0; i < width; i++)
    { std::cout << "_"; }
    std::cout << " \n";
         
    std::cout << "|";
    std::cout << this->text;
    for (int i = 0; i < width; i++)
    { std::cout << "";}
    std::cout << "|\n";
    //std::cout << " ";


}

TextboxFactory::~TextboxFactory()
{
   if(!NULL)
   {delete t1;}
}
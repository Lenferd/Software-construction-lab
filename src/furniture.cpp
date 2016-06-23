#include "furniture.h"

#include <iostream>

Furniture::Furniture(int width, int height):width_(width), height_(height) 
{}

Bed::Bed (int width, int height):Furniture(width, height)
{}


Bed* Bed::clone() 
{
  return new Bed(*this);
}
void Bed::draw() {
  std::cout << "Кровать " << this->height_<<"x"<< this->width_ << std::endl;
}

Table::Table (int width, int height):Furniture(width, height) 
{}

Table* Table::clone() 
{
  return new Table(*this);
}
void Table::draw() {
    std::cout << "Cтол " << this->height_<<"x"<< this->width_ << std::endl;
}


Chair::Chair (int width, int height):Furniture(width, height)
{}

Chair* Chair::clone()
{
  return new Chair(*this);
}
void Chair::draw() {
    std::cout << "Cтул " << this->height_<<"x"<< this->width_ << std::endl;
}


Shower::Shower (int width, int height):Furniture(width, height)
{}

Shower* Shower::clone()
{
  return new Shower(*this);
}
void Shower::draw() {
    std::cout << "Душ " << this->height_<<"x"<< this->width_ << std::endl;
}

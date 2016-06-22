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
  std::cout << "Нарисована кровать с " << this->height_<< this->width_ << std::endl;
  // Оставим на потом// ПРивет потом!
}


Table::Table (int width, int height):Furniture(width, height) 
{}


Table* Table::clone() 
{
  return new Table(*this);
}
void Table::draw() {
    std::cout << "Нарисована кровать с " << this->height_<< this->width_ << std::endl;
  // Оставим на потом
}

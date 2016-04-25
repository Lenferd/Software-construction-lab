#include "furniture.h"


Furniture::Furniture(int width, int height):width_(width), height_(height) 
{}

Bed::Bed (int width, int height):Furniture(width, height)
{}


Bed* Bed::clone() 
{
	return new Bed(*this);
}
void Bed::draw() 
{
	// Оставим на потом
}


Table::Table (int width, int height):Furniture(width, height) 
{}


Table* Table::clone() 
{
	return new Table(*this);
}
void Table::draw()
{
	// Оставим на потом
}
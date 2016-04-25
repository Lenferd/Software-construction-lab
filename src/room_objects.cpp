#include "room_objects.h"

// МЕТОДЫ ИНТЕРФЕЙСА

RoomObjects::RoomObjects (int x1, int y1, int x2, int y2)
{
	point1.x_ = x1;
	point1.y_ = y1;
	point2.x_ = x2;
	point2.y_ = y2;
}

// МЕТОДЫ СТЕНЫ

Wall::Wall (int x1, int y1, int x2, int y2) : RoomObjects(x1, y1, x2, y2)
{}

Wall::Wall* clone()
{
	return new Wall(*this);
}

void Wall::draw()
{
}
// МЕТОДЫ ДВЕРИ

Door::Door (int x1, int y1, int x2, int y2) : RoomObjects(x1, y1, x2, y2)
{}

Door::Door* clone()
{
	return new Door(*this);
}

void Door::draw()
{
}

// МЕТОДЫ ОКНА

Window::Window (int x1, int y1, int x2, int y2) : RoomObjects(x1, y1, x2, y2)
{}

Window::Window* clone()
{
	return new Window(*this);
}

void Window::draw()
{
}
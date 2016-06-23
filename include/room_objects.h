// Классы всех возможных объектов комнаты
#include <iostream>

class Point
{
public:
    int x_;
    int y_;
};


class Line
{
public:
    Line(int fromX, int fromY, int toX, int toY) {
        fromPoint.x_ = fromX;
        fromPoint.y_ = fromY;
        toPoint.x_ = toX;
        toPoint.y_ = toY;
    }
    Point fromPoint;
    Point toPoint;
    virtual void draw() {
        std::cout << "From " << fromPoint.x_ << ":" << fromPoint.y_ <<
            " to " << toPoint.x_ << ":" << toPoint.y_ << std::endl;
    }
};

class Wall: public Line
{
  public:
    Wall(int x1, int y1, int x2, int y2) :
        Line(x1, y1, x2, y2) {};
    virtual Wall* clone()
    { return new Wall(*this); };
    virtual void draw() override
    {
        std::cout << "Wall : ";
        Line::draw();
    };
};

class Door: public Line
{
  public:
    Door(int x1, int y1, int x2, int y2) :
          Line(x1, y1, x2, y2) {};
    virtual Door* clone()
    {  return new Door(*this);  };
    virtual void draw() override
    {
        std::cout << "Door : ";
        Line::draw();
    }
};

class Window: public Line
{
  public:
    Window(int x1, int y1, int x2, int y2) :
          Line(x1, y1, x2, y2) {};
    virtual Window* clone()
    { return new Window(*this);  }
    virtual void draw() override
    {
        std::cout << "Window : ";
        Line::draw();
    }
};

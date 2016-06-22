// Классы всех возможных объектов комнаты

class RoomObjects
{
  public:
    virtual RoomObjects* clone() = 0;
    virtual void draw() = 0;

  protected:
    RoomObjects (int x1, int y1, int x2, int y2);
    struct Point
    {
      int x_;
      int y_;
    };
    Point point1;
    Point point2;
};

// стена
class Wall: public RoomObjects
{
  public:
    Wall (int x1, int y1, int x2, int y2);
    virtual Wall* clone() override;
    virtual void draw() override;

};

// дверь
class Door: public RoomObjects
{
  public:
    Door (int x1, int y1, int x2, int y2);
    virtual Door* clone() override;
    virtual void draw() override;
};

// окно
class Window: public RoomObjects
{
  public:
    Window (int x1, int y1, int x2, int y2);
    virtual Window* clone() override;
    virtual void draw() override;

};

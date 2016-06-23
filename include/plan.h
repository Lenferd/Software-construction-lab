#include <vector>
#include <memory>
#include "room_objects.h"

using std::shared_ptr;
using std::vector;

// Product
class Plan {
protected:
    vector<Wall> walls;
    vector<Door> doors;
    vector<Window> windows;
public:
    void draw();
    void addWall(Wall wall)
    { walls.push_back(wall); }
    void addDoor(Door door)
    { doors.push_back(door); }
    void addWindow(Window window)
    { windows.push_back(window); }
};

// Abstract Builder
class PlanBuilder {
protected:
  shared_ptr<Plan> plan_;

public:
  PlanBuilder() : plan_(new Plan()) {};
  virtual void buildWalls() = 0;   // Метод для построения стен
  virtual void buildDoors() = 0;   // Метод для построения дверей
  virtual void buildWindows() = 0; // Метод для построения окон

  void draw () {
    plan_->draw();
  }
};


// Все наследники PlanBuilder являются какой-либо комнатой
// Concrete Builder

// Ванная
class BathroomPlanBuilder : public PlanBuilder {
  public:
    virtual void buildWalls() override;
    virtual void buildDoors() override;
    virtual void buildWindows() override;
};

// Спальня
class BedroomPlanBuilder : public PlanBuilder {
    public:
    virtual void buildWalls() override;
    virtual void buildDoors() override;
    virtual void buildWindows() override;
};


// Содержит алгоритм построения комнат
class Director
{
private:
    shared_ptr<PlanBuilder> planbuilder;
public:
    void setPlan(shared_ptr<PlanBuilder> ptr)
    { planbuilder = ptr; }
    void constructPlan();
};

// Тут подразумевается использование паттерна Строитель
#include <vector>
#include <memory>

#include "room_objects.h"

using std::shared_ptr;
using std::vector;

// Product
class Plan {
  public:
    vector<Wall> walls;
    vector<Door> doors;
    vector<Window> windows;
  public:
    void draw();

};

// Abstract Builder
class PlanBuilder {
protected:
  shared_ptr<Plan> plan; // http://vk.cc/55w7sg

public:
  PlanBuilder() : plan (new Plan()){}
  virtual void buildWalls() = 0;   // Метод для построения стен
  virtual void buildDoors() = 0;   // Метод для построения дверей
  virtual void buildWindows() = 0; // Метод для построения окон

  void draw () {
    plan->draw();
  }
};


// Все наследники PlanBuilder являются какой-либо комнатой
// Concrete Builder

// Пустая комната
class EmptyPlanBuilder : public PlanBuilder {
  public:
    virtual void buildWalls() override;
    virtual void buildDoors() override;
    virtual void buildWindows() override;
};

// Кухонная комната
class KitchenPlanBuilder : public PlanBuilder {
    public:
    virtual void buildWalls() override;
    virtual void buildDoors() override;
    virtual void buildWindows() override;
};


// Director
// именно тут должен быть заложен алогритм размещения комнат
class Director
{
private:
    shared_ptr<PlanBuilder> planbuilder;
public:
    void setPlan(shared_ptr<PlanBuilder> ptr);
    void constructPlan();
};

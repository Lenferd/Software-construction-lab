// Тут подразумевается использование паттерна Строитель
#include <vector>

#include "room_objects.h"

using std::shared_ptr;
using std::vector;

// Product
class Plan
{
	protected:
	  vector<Wall> walls;
	  vector<Door> doors;
	  vector<Window> windows;
	public:
	  void draw();
	
};

// Abstract Builder
class PlanBuilder
{
protected:
  shared_ptr<Plan> plan; // http://vk.cc/55w7sg

public:
  PlanBuilder();
  virtual ~ PlanBuilder ()
  virtual void buildWalls() = 0;   // Метод для построения стен
  virtual void buildDoors() = 0;   // Метод для построения дверей
  virtual void buildWindows() = 0; // Метод для построения окон
};


// Все наследники PlanBuilder являются какой-либо комнатой
// Concrete Builder

// Пустая комната
class EmptyPlanBuilder : public PlanBuilder
{
	public:
	  virtual void buildWalls() override;
	  virtual void buildDoors() override;
	  virtual void buildWindows() override;
};

// Кухонная комната
class KitchenPlanBuilder : public PlanBuilder
{
		public:
	  virtual void buildWalls() override;
	  virtual void buildDoors() override;
	  virtual void buildWindows() override;
};


// Director
// именно тут должен быть заложен алогритм размещения комнат
// хз чё писать
class Director
{
private:
    shared_ptr<PlanBuilder> planbuilder;
public:
};
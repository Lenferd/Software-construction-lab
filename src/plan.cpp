#include "plan.h"

void Plan::draw()
{
    // Отрисовываем все стены
  for (Wall wall : walls)
    wall.draw();

  // Отрисовываем все двери
  for (Door door : doors)
    door.draw();

  // Отрисовываем все окна
  for (Window windous : windows)
    windous.draw();
}

void BathroomPlanBuilder::buildWalls()
{
    Wall wall_front(0, 0, 4, 0);
    Wall wall_left(0, 0, 0, 2);
    Wall wall_rigth(4,0, 4,2);
    Wall wall_back(0,2,4,2);
    plan_->addWall(wall_front);
    plan_->addWall(wall_left);
    plan_->addWall(wall_rigth);
    plan_->addWall(wall_back);
}

void BathroomPlanBuilder::buildDoors()
{
    Door door(0, 0, 0, 1);
    plan_->addDoor(door);
}

void BathroomPlanBuilder::buildWindows()
{}

void BedroomPlanBuilder::buildWalls()
{
    Wall wall_front(0, 0, 5, 0);
    Wall wall_left(0, 0, 0, 5);
    Wall wall_rigth(5, 0, 5, 5);
    Wall wall_back(0, 5, 5, 5);
    plan_->addWall(wall_front);
    plan_->addWall(wall_left);
    plan_->addWall(wall_rigth);
    plan_->addWall(wall_back);
}

void BedroomPlanBuilder::buildDoors()
{
    Door door(1, 0, 2, 0);
    plan_->addDoor(door);
}

void BedroomPlanBuilder::buildWindows()
{
    Window window(5, 2, 5, 5);
    plan_->addWindow(window);
}

void Director::constructPlan()
{
    planbuilder->buildWalls();
    planbuilder->buildWindows();
    planbuilder->buildDoors();
}
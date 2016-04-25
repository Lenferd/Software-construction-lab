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

// МЕТОДЫ ПУТОЙ КОМНАТЫ

// строим стены в пустой комнате
void EmptyPlanBuilder::buildWalls()
{
	Wall wall_front (0 ,0 ,10,0 );
	Wall wall_back  (10,0 ,10,10);
	Wall wall_left  (10,10,0 ,10);
	Wall wall_rigth (0 ,10,0 ,0 );

	plan->walls.push_back(wall_front);
	plan->walls.push_back(wall_back);
	plan->walls.push_back(wall_left);
	plan->walls.push_back(wall_rigth);
}

// Двери в пустой комнате будут? //Почему нет, если комната, то доступ должен быть
// Надо договориться, какой комнатой будем называть пустой)
void EmptyPlanBuilder::buildDoors()
{
}

// Окна в пуской комнате полагаю не будет
void EmptyPlanBuilder::buildDoors()
{
}

// МЕТОДЫ КУХНИ

// строим стены на кухне
// вообще координаты зависят от первоначального размера квартиры
// обязательно не забыть спросить
void KitchenPlanBuilder::buildWalls()
{
	Wall wall_front (0 ,0 ,10,0 );
	Wall wall_back  (10,0 ,10,10);
	Wall wall_left  (10,10,0 ,10);
	Wall wall_rigth (0 ,10,0 ,0 );

	plan->walls.push_back(wall_front);
	plan->walls.push_back(wall_back);
	plan->walls.push_back(wall_left);
	plan->walls.push_back(wall_rigth);
}

// 
void KitchenPlanBuilder::buildDoors()
{
  //???
	Door entrance (0,0,0,0);
	
	plan->doors.push_back(entrance);
}

// 
void KitchenPlanBuilder::buildDoors()
{
  //???
  Window first (0,0,0,0);
	
	plan->windows.push_back(first);
	
}
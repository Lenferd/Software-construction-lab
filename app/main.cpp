#include <iostream>

#include <abstract_fabrican.h>

int main() {
  FurnitureFactory* fabric;

  fabric = new Bathroom();

  Collection bathroom (fabric);
  bathroom.draw();

  delete fabric;

  std::cout << std::endl;

  fabric = new Kitchen();

  Collection kitchen (fabric);
  kitchen.draw();

  delete fabric;
  return 0;
}

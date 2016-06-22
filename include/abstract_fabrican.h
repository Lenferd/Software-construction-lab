//#include "furniture.h"


#include <vector>
#include <iostream>
#include <memory>

// aбстрактный продукт - предметы сиденья
class Chair {
public:
  virtual Chair* clone() = 0;  // Метод клонирование сиденья
  virtual void draw()    = 0;  // Отрисовка сиденья
};


// абстрактный продукт - предметы чистки
class Cleaning {
public:
  virtual Cleaning* clone() = 0;  // Метод клонирование чистящих предметов
  virtual void draw()    = 0;  // Отрисовка чистящих предметов
};

// конкретный продукт сидения для кухни (стул)
class KitchenChair : public Chair {
public:
    virtual KitchenChair* clone() override {
      return new KitchenChair(*this);
    }
    void draw() override {
      std::cout << "Cтул " << std::endl;
    }
};

// конкретный продукт сидения для ванной (туалет)
class BathroomChair : public Chair{
public:
    virtual BathroomChair* clone() override {
      return new BathroomChair(*this);
    }
    void draw() override {
      std::cout << "Туалет " << std::endl;
    }
};

// конкретный продукт чистки для кухни (посудомойка)
class KitchenCleaning : public Cleaning {
public:
    virtual KitchenCleaning* clone() override {
      return new KitchenCleaning(*this);
    }
    void draw() override {
      std::cout << "Посудомойка " << std::endl;
    }
};

// конкретный продукт чистки для ванны (душ)
class BathroomCleaning : public Cleaning {
public:
    virtual BathroomCleaning* clone() override {
      return new BathroomCleaning(*this);
    }
    void draw() override {
      std::cout << "Душ " << std::endl;
    }
};

// абстрактная фабрика
class Abstract {
public:
  virtual Chair* createChair () = 0;
  virtual Cleaning* createCleaning () = 0;
};


 // фабрика кухни
class Kitchen : public Abstract{
public:
  virtual Chair* createChair () override {
    return new KitchenChair();
  }
  virtual Cleaning* createCleaning () override {
    return new KitchenCleaning();
  }
};

// фабрика ванной
class Bathroom : public Abstract{
public:
  virtual Chair* createChair () override {
    return new BathroomChair();
  }
  virtual Cleaning* createCleaning () override {
    return new KitchenCleaning();
  }
};

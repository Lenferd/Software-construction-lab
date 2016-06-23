//#include "furniture.h"


#include <vector>
#include <iostream>
#include <memory>

/* АБСТРАКТНЫЕ ПРОДУКТЫ */

// aбстрактный продукт - предметы сиденья
class Chair {
public:
  virtual Chair* clone()    = 0;  // Метод клонирование сиденья
  virtual void   draw()     = 0;  // Отрисовка сиденья
};

// абстрактный продукт - предметы чистки
class Cleaning {
public:
  virtual Cleaning* clone()  = 0;  // Метод клонирование чистящих предметов
  virtual void      draw()   = 0;  // Отрисовка чистящих предметов
};

// абстрактный продукт - разновидные виды тумбочек
class Stand {
public:
  virtual Stand* clone()     = 0;  // Метод клонирование тумб
  virtual void   draw()      = 0;  // Отрисовка тумб
};

/* КОНКРЕТНЫЕ ПРОДУКТЫ */

// конкретный продукт сидения для кухни (стул)
class KitchenChair : public Chair {
public:
    virtual KitchenChair*     clone() override {
      return new KitchenChair(*this);
    }
    virtual void              draw()  override {
      std::cout << "Cтул " << std::endl;
    }
};

// конкретный продукт сидения для ванной (унитаз)
class BathroomChair : public Chair{
public:
    virtual BathroomChair*    clone() override {
      return new BathroomChair(*this);
    }
    virtual void              draw()  override {
      std::cout << "Унитаз " << std::endl;
    }
};

// конкретный продукт чистки для кухни (посудомойка)
class KitchenCleaning : public Cleaning {
public:
    virtual KitchenCleaning*  clone() override {
      return new KitchenCleaning(*this);
    }
    virtual void              draw()  override {
      std::cout << "Посудомойка " << std::endl;
    }
};

// конкретный продукт чистки для ванны (душ)
class BathroomCleaning : public Cleaning {
public:
    virtual BathroomCleaning* clone() override {
      return new BathroomCleaning(*this);
    }
    virtual void              draw()  override {
      std::cout << "Душ " << std::endl;
    }
};

// конкретный продук: кухонная тумбочка
class KitchenStand : public Stand {
public:
    virtual KitchenStand*     clone() override {
      return new KitchenStand(*this);
    }
    virtual void              draw()  override {
      std::cout << "Стол " << std::endl;
    }
};

// конкретный продукт: ванная тумбочка
class BathroomStand : public Stand {
public:
    virtual BathroomStand*    clone() override {
      return new BathroomStand(*this);
    }
    virtual void              draw()  override {
      std::cout << "Умывальник " << std::endl;
    }
};

/* АБСТРАКТНАЯ ФАБРИКА */

class FurnitureFactory {
public:
  virtual Chair*    createChair ()     = 0;
  virtual Stand*    createStand ()     = 0;
  virtual Cleaning* createCleaning ()  = 0;
};

/* КОНКРЕТНЫЕ ФАБРИКИ */

 // фабрика кухни
class Kitchen : public FurnitureFactory{
public:
  virtual Chair*     createChair ()    override {
    return new KitchenChair();
  }
  virtual Stand*     createStand ()    override {
    return new KitchenStand();
  }
  virtual Cleaning*  createCleaning () override {
    return new KitchenCleaning();
  }
};

// фабрика ванной
class Bathroom : public FurnitureFactory{
public:
  virtual Chair*     createChair ()    override {
    return new BathroomChair();
  }
  virtual Stand*     createStand ()    override {
    return new BathroomStand();
  }
  virtual Cleaning*  createCleaning () override {
    return new BathroomCleaning();
  }
};

/* КЛИЕНТ */

class Collection {
public:
  explicit Collection (FurnitureFactory* fabric) {
    chair = fabric->createChair();
    stand = fabric->createStand();
    cleaning = fabric->createCleaning();
  }
  void draw () {
    chair->draw();
    stand->draw();
    cleaning->draw();
  }


  ~Collection() {
    delete chair;
    delete stand;
    delete cleaning;
  }

protected:
  Chair* chair;
  Stand* stand;
  Cleaning* cleaning;
};


#include "config.h"

Config* Config::_self = 0;

//Конструктор
Config::Config(int width, int length) {
  //Считываем данные  из файла и
  //задаем значения переменным
  lastRun = time(0);
  width_ = width;
  length_ = length;
  Array2D.resize(width_);

  for (auto& Array1D : Array2D)
    Array1D.assign(length, false);


}

//Метод получения доступа к объекту
Config* Config::getConfig() {
  if(_self==0)
      _self = new Config(2,4);
  return _self;
}

//Сохраняет настройки в файл
void Config::saveConfig() {
  //записываем данные в файл
}

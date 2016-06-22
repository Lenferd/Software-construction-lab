#include "config.h"

Config* Config::_self = 0;

//Конструктор
Config::Config() {
  //Считываем данные  из файла и
  //задаем значения переменным
  lastRun = time(0);
}

//Метод получения доступа к объекту
Config* Config::getConfig() {
  if(_self==0)
      _self = new Config();
  return _self;
}

//Сохраняет настройки в файл
void Config::saveConfig() {
  //записываем данные в файл
}

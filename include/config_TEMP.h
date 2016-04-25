class Config
{
protected:
       //объект синхронизации
       static std::mutex _mutex;

// объект настроек
       staticConfig* _self;
       //Конструктор
       Config();
 

public:
       //Метод получения доступа к объекту
       staticConfig* getConfig();
       
       //настройки(время последнего запуска программы)
       time_t lastRun;
};
·         Config.cpp

Config* Config::_self = nullptr;
std::mutexConfig::_mutex;


//Конструктор
Config::Config()
{
       //Считываем данные  из файла и 
       //задаем значения переменным
       lastRun = time(0);
}

Config* Config::getConfig()
{
      
//захватываем мьютекс или ждем,
//пока его освободят
_mutex.lock();
{
             //возможно, пока мы ждали
             //освобождения мьютекса
             //другой поток инстанцировал
             //объект
             if(!_self)
             {
                    //секция try...catch
                    //нужна для гарантии
                    //освобождения
                    //занятого мьютекса
                    //даже если
                    //что-то пойдет не так
                    try
                    {
                             _self = new  Config();
                    }
                    catch(...)
                    {/*Обработка ошибки*/}
             }
       }
      //освобождаем мьютекс
       _mutex.unlock();
       return _self;
}
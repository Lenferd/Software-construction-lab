#ifndef _SETTINGS_H_
#define _SETTINGS_H_
#include <string>

using std::string;

// Пока сделай только интерфейс
// над реализацией потом будем ебаться )

class Settings
{
	public:
		string last_login;
		string name;
		int apartment_size;
		static Settings* getSettings();
		
	protected:
		Settings()
		static Settings* self_;
		
}


#endif
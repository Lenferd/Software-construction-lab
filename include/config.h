#ifndef CONFIG_H
#define CONFIG_H

#include <ctime>
#include <vector>

using std::vector;

class Config {

public:
  static Config* getConfig();
  void saveConfig();
  time_t lastRun;

  Config (const Config &) = delete;
  Config& operator= (const Config&) = delete;

protected:
    static Config* _self;
    Config(int wigth, int legth);

    int width_;
    int length_;
    vector<vector<short> > Array2D;
};


#endif // CONFIG_H

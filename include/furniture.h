// Интерфейсный класс. батька всех вещей :+1:
class Furniture
{
  public:
    virtual Furniture* clone() = 0;  // Метод клонирование мебели
    virtual void draw() = 0;         // Отрисовка мебели
  protected:
    Furniture(int width, int height);
    int width_;
    int height_;
};

class Bed : public Furniture
{
  public:
    Bed (int width, int height);
    virtual Bed* clone() override;
    void draw() override;
};

class Table : public Furniture
{
  public:
    Table (int width, int height);
    virtual Table* clone() override;
    void draw() override;
};

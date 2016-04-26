#include "apartment.h"

Apartment::Apartment(int width, int length)
{
  width_ = width;
  length_ = length;
  Array2D.resize(width_);

  for (auto& Array1D : Array2D)
    Array1D.assign(length, false);

}

#ifndef NORMALBIRD_H
#define NORMALBIRD_H

#include "bird.h"

#include <iostream>
#include <iomanip>
using namespace std;

class NormalBird : public Bird
{
  private:
  public:
   NormalBird();
   int hit();
   void draw();
};

#endif

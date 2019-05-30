#ifndef SACREDBIRD_H
#define SACREDBIRD_H

#include "bird.h"

#include <iostream>
#include <iomanip>
using namespace std;

class SacredBird : public Bird
{
//  private:
  public:
   SacredBird();
   int hit();
   void draw();
};

#endif

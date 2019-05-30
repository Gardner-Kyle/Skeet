#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "bird.h"
#include <iostream>

class ToughBird : public Bird
{
  private:

  public:
   ToughBird();
   int hit();
   void draw();
};

#endif

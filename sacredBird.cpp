#include "sacredBird.h"

#include <iomanip>
#include <iostream>
using namespace std;

SacredBird::SacredBird()
{
   velocity.setDx(velocity.getDx() + 10);
   if (point.getY() >= 0)
      velocity.setDy(velocity.getDy() - 5);
   else if (point.getY() < 0)
      velocity.setDy(velocity.getDy() + 10);
   if (velocity.getDy() == 0)
      velocity.setDx(velocity.getDx() + 15);
}

int SacredBird::hit()
{
   kill();
   return -15;
}

void SacredBird::draw()
{
   drawSacredBird(point, 20);
}

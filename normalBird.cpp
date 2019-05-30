#include "normalBird.h"

#include <iostream>
#include <iomanip>
using namespace std;

NormalBird::NormalBird()
{
   velocity.setDx(velocity.getDx() + 5);
   if (point.getY() >= 0)
      velocity.setDy(velocity.getDy() - 5);
   else if (point.getY() < 0)
      velocity.setDy(velocity.getDy() + 5);
   if (velocity.getDy() == 0)
      velocity.setDx(velocity.getDx() + 10);
}

int NormalBird::hit()
{
   kill();
   return 1;
}

void NormalBird::draw()
{
   drawCircle(point, 10);
}

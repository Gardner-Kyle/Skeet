#include "toughBird.h"

ToughBird::ToughBird()
{
   aimedIn = 3;
      velocity.setDx(velocity.getDx() + 1);
   if (point.getY() >= 0)
      velocity.setDy(velocity.getDy() - 5);
   else if (point.getY() < 0)
      velocity.setDy(velocity.getDy() + 1);
   if (velocity.getDy() == 0)
      velocity.setDx(velocity.getDx() + 5);
}

int ToughBird::hit()
{
   aimedIn = aimedIn - 1;
   if (aimedIn == 0)
   {
      kill();
      return 5;
   }
   return 1;
}

void ToughBird::draw()
{
   drawToughBird(point, 20, aimedIn);
}

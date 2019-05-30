#ifndef FLYINGTHING_H
#define FLYINGTHING_H

#include "point.h"
#include "velocity.h"

class FlyingThing
{
  protected:
   Point point;
   Point points;
   Velocity velocity;
   bool alive;
  public:
   FlyingThing()
   {
      this-> point = point;
      this-> velocity = velocity;
   }
   Velocity getVelocity();
   Point getPoint();
   bool isAlive();
   void advance();
   void kill();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
};

#endif

#include "flyingThing.h"

#include <iostream>
#include <iomanip>
using namespace std;

Velocity FlyingThing::getVelocity()
{
   return velocity;
}

Point FlyingThing::getPoint()
{
   return point;
}

bool FlyingThing::isAlive()
{
   return alive;
}

void FlyingThing::advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}

void FlyingThing::kill()
{
   alive = false;
}

void FlyingThing::setPoint(Point point)
{
   this->point = point;
}

void FlyingThing::setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}

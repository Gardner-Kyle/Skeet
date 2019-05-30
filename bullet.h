/*****************************************************
 * File: bullet.h
 * Author: Kyle Gardner
 *
 * Description: This file contains data to be used in bullet.cpp.
 ******************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "uiDraw.h"
#include "flyingThing.h"

#include <cmath>

class Bullet : public FlyingThing
{
  private:
   Point points;
  public:
   Bullet();
   void fire(Point point, float angle);
   void draw();
};

#endif

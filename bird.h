/*****************************************************
 * File: bird.h
 * Author: Kyle Gardner
 *
 * Description: This is the file that holds data to be used in bird.cpp.
 ******************************************************/

#ifndef BIRD_H
#define BIRD_H

#include "flyingThing.h"
#include "uiDraw.h"

#include <iostream>
#include <iomanip>
using namespace std;

class Bird : public FlyingThing
{
  protected:
   int aimedIn;
  public:
   Bird();
//   void setPoint(Point point);
   virtual int hit() = 0;
   virtual void draw() = 0;
};

#endif

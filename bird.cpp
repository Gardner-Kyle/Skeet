/*****************************************************
 * File: bird.cpp
 * Author: Kyle Gardner
 *
 * Description: This file contains the function that
 * handles all bird types.
 ******************************************************/

#include "bird.h"

Bird::Bird()
{
   setPoint(Point(-200, random(-200, 200)));
   velocity.setDx(velocity.getDx() + 0.5);
   alive = true;
}

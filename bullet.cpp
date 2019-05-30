/*****************************************************
 * File: bullet.cpp
 * Author: Kyle Gardner
 *
 * Description: This file contains the functions that draw and move the bullet.
 ******************************************************/

#include "bullet.h"

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define BULLET_SPEED 20.0

Bullet::Bullet()
{
   alive = true;
}

void Bullet::fire(Point point, float angle)
{
   this->point = point;
   float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
   velocity.setDx(velocity.getDx() + dx);
   velocity.setDy(velocity.getDy() + dy);
}

void Bullet::draw()
{
   drawDot(point);
   drawDot({point.getX() - 5, point.getY()});
   drawDot({point.getX() + 5, point.getY()});
   drawDot({point.getX(), point.getY() + 5});
   drawDot({point.getX(), point.getY() - 5});

}

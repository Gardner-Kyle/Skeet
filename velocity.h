#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
  private:
   float dx;
   float dy;
  public:
   Velocity();
   Velocity(float dx, float dy);
   float getDx() const;
   float getDy() const;
   void setDx(float dx);
   void setDy(float dy);
};

#endif

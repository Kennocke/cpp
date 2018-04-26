#include "point.hpp"

namespace geo2D
{

//------------------------------------------------------------------------------
point::point()
  :mX{0.f}
  ,mY{0.f}
{
}
//------------------------------------------------------------------------------
point::point(float aX, float aY)
  :mX{aX}
  ,mY{aY}
{

}
//------------------------------------------------------------------------------
void point::move(float aDx, float aDy)
{
  mX += aDx;
  mY += aDy;
}
//------------------------------------------------------------------------------
void point::move_to(float aX, float aY)
{
  mX = aX;
  mY = aY;
}
//------------------------------------------------------------------------------
const float &point::x()const
{
  return mX;
}
//------------------------------------------------------------------------------
const float &point::y()const
{
  return mY;
}
//------------------------------------------------------------------------------
void point::invert()
{
  x_invert();
  y_invert();
}
//------------------------------------------------------------------------------
void point::x_invert()
{
  mX *= -1.f;
}
//------------------------------------------------------------------------------
void point::y_invert()
{
  mY *= -1.f;
}

}

#ifndef INC_GEOMETRY_H_
#define INC_GEOMETRY_H_

#include <cmath>

// ---------------------------------------------------------------------
struct VEC2 {
  float x,y;
  VEC2() : x(0),y(0) {}
  VEC2( float ax, float ay ) : x(ax),y(ay) {}
  float Length() const { return sqrtf( x*x + y*y ); }
  float Dot( const VEC2 b ) const { return x*b.x + y*b.y; }
  VEC2 operator-() const { return VEC2( -x, -y ); }
};

VEC2 operator-(const VEC2 &a, const VEC2 &b);
VEC2 operator+(const VEC2 &a, const VEC2 &b);

#endif


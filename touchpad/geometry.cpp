#include "geometry.h"

VEC2 operator-(const VEC2 &a, const VEC2 &b) {
  return VEC2(a.x - b.x, a.y - b.y);
}
VEC2 operator+(const VEC2 &a, const VEC2 &b) {
  return VEC2(a.x + b.x, a.y + b.y);
}

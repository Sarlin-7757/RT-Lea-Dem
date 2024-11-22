#include "Ray.hpp"
#include "Vector3D.hpp"

Ray::Ray(const Vector3D & origin, const Vector3D& direction): origin(origin) , direction(direction.normalize()){}

Vector3D Ray::get_origin()const{
  return origin;
}

Vector3D Ray::get_direction()const{
  return direction;
}

/* The point_at_parameter will give the distance of the parameter 
 along a ray from the origin. */

Vector3D Ray::point_at_parameter(double t)const{
  return origin + (direction*t);
}

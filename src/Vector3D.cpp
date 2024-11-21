#include "Vector3D.hpp"
#include<cmath>

Vector3D::Vector3D(): x(0), y(0) , z(0) {}; // default constructor 
Vector3D::Vector3D(double x, double y , double z): x(x) ,y(y) , z(z){}; // constructor


Vector3D Vector3D::operator + (const  Vector3D & v)const{
  return Vector3D(this->x + v.x , this->y + v.y , this->z + v.z);
}
                                                                        
Vector3D Vector3D:: operator - ( const Vector3D & v) const{
  return Vector3D(this -> x - v.x , this -> y - v.y , this -> z - v.z);
}
                                                                        




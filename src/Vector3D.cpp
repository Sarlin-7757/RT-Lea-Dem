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


Vector3D Vector3D:: operator * (const double scalar)const{
  return Vector3D(this -> x * scalar , this->y * scalar, this->z * scalar);
}

double Vector3D::dot_product(const Vector3D& v)const{
  return (this->x * v.x + this->y * v.y + this->z * v.z);
}

Vector3D Vector3D::cross_product(const Vector3D& v) const { 
  return Vector3D(
    (this -> y * v.z - this -> z * v.y),
    (-1 *(this -> x * v.z - v.x * this-> z)),
    (this -> x * v.y - this-> y * v.x)
  );
}


Vector3D Vector3D::normalize()const{
  double length = (pow(this-> x, 2)+ pow(this-> y , 2) + pow(this-> z , 2))/3;
  return Vector3D(this->x/length , 
                  this->y/length , 
                  this->z/length);
}

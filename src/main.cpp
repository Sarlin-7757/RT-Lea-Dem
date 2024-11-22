#include<iostream>
#include "Vector3D.hpp"

int main(){
  Vector3D v1(1.0 , 3.0 , 4.0);
  Vector3D v2(2.0 , 7.0 , -5.0);
  
  Vector3D v3 = v1.normalize();
  std::cout << v3.x << " "<< v3.y<< " " << v3.z ;
  
  return 0;
}

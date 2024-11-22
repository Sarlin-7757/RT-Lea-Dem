#include "Vector3D.hpp"
#include "Ray.hpp"

int main(){
  Vector3D origin(1.0 , 3.0 , 4.0);
  Vector3D direction(2.0 , 7.0 , -5.0);
  Ray ray(origin , direction);
  
  Vector3D ray_origin = ray.get_origin();
  ray_origin.display_vector();
  
  
  return 0;
}

#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

class Vector3D{
  public: 

    double x, y ,z;

    Vector3D();
    Vector3D(double x, double y , double z);
    /* 
     Passed object values 
     Using const inside const Vector3D such that it  ensures that the object 
     values that is being referenced or passed does not get changed or modified.

     Invoked object for class
     Outside const is being used to ensure that the member function will not be 
     allowed to modify the state of the object on which it is called (that means 
     this operator + will not change the current object on which the operator is 
     being invoked. 
    */ 

    Vector3D operator +( const Vector3D& v)const; 
    Vector3D operator -( const Vector3D& v)const;
    Vector3D operator *(const double scalar)const;
    double dot_product(const Vector3D& v)const;
    Vector3D cross_product(const Vector3D& v)const;
    Vector3D normalize()const;

    void display_vector()const;
};

#endif

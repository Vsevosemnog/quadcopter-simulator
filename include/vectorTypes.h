#ifndef QC_VECTORTYPES_H
#define QC_VECTORTYPES_H

struct Vector3f
{
    Vector3f() {reset();}
    Vector3f(float x_, float y_, float z_) {x=x_; y=y_; z=z_; valid=true;}
    
    void reset() {x=0.0f; y=0.0f; z=0.0f; valid=true;}

    float x,y,z;
	bool valid;

    Vector3f operator+=(const Vector3f& other) { x+=other.x; y+=other.y; z+=other.z; return *this;}
    Vector3f operator*=(const float& mul) { x=x*mul; y=y*mul; z=z*mul; return *this;}
	Vector3f operator/=(const float& div) { x=x/div; y=y/div; z=z/div; return *this;}

    Vector3f operator-(const Vector3f& other) { x-=other.x; y-=other.y; z-=other.z; return *this;}
};

struct Vector4f
{
    Vector4f() {reset();}
    Vector4f(float x_, float y_, float z_, float q_) {x=x_; y=y_; z=z_; q=q_; valid=true;}

	void reset() {x=0.0f; y=0.0f; z=0.0f; q=0.0f; valid=true;}
	
	float x,y,z,q;
	bool valid;
};

#endif
#pragma once
#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "Shape.h"
#include "Vector3.h"
#include "Ray.h"
#include "rgb.h"

class Sphere : public Shape
{
public:
	Sphere(const Vector3 &center, float radius, const rgb &color);
	bool Hit(const Ray &r, float tmin, float tmax, float time, HitRecord &record) const override;
	bool ShadowHit(const Ray &r, float tmin, float tmax, float time) const override;

public:
	Vector3 center;
	float radius;
	rgb color;
};




#endif // !_SPHERE_H_


#pragma once
#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "Shape.h"
#include "Vector3.h"
#include "rgb.h"
#include "Ray.h"

class Triangle : public Shape
{
public:
	Triangle(const Vector3 &p0, const Vector3 &p1, const Vector3 &p2, const rgb &color);
	bool Hit(const Ray &r, float tmin, float tmax, float time, HitRecord &record) const override;
	bool ShadowHit(const Ray &r, float tmin, float tmax, float time) const override;

public:
	Vector3 p0, p1, p2;
	rgb color;
};



#endif // !_TRIANGLE_H_


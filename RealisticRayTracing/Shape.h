#pragma once
#ifndef _SHAPE_H_
#define _SHAPE_H_

#include "Ray.h"
#include "Vector3.h"
#include "rgb.h"
#include "Texture.h"

struct HitRecord
{
	float t;
	Vector3 normal;
	Vector2 uv;
	Vector3 pos;
	Texture *texture;
};

class Shape
{
public:
	virtual bool Hit(const Ray &r, float tmin, float tmax, float time, HitRecord &record) const = 0;
	virtual bool ShadowHit(const Ray &r, float tmin, float tmax, float time) const = 0;
};




#endif

#include "Shapes.h"

OPlane::OPlane(Vec normal, float _d, Color color)
{
	n = normal;
	d = _d;
	c = color;
}

void OPlane::test(Ray& ray, HitData& hit)
{
	//-d(f�r planet) minus skal�r produkten(allts� (n) *origin/normal*d.
	// Man ska f� ut t. Kolla f�rol�sning 2. Sen s� ska man �ndra Hitdata. 
	//Kanske l�ser ritningen sig sj�lv efter det.
}

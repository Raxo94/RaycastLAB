#include "Shapes.h"

OPlane::OPlane(Vec normal, float _d, Color color)
{
	n = normal;
	d = _d;
	c = color;
}

void OPlane::test(Ray& ray, HitData& hit)
{
	//-d(för planet) minus skalär produkten(alltså (n) *origin/normal*d.
	// Man ska få ut t. Kolla föroläsning 2. Sen så ska man ändra Hitdata. 
	//Kanske löser ritningen sig själv efter det.
}

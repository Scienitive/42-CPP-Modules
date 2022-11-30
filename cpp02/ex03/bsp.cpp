#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = point.getX();
	Fixed Py = point.getY();

	Fixed w1;
	Fixed w2;

	w1 = (Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)) / ((By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay));
	w2 = (Py - Ay - w1 * (By - Ay)) / (Cy - Ay);

	// std::cout << "w1: " << w1 << " | ";
	// std::cout << "w2: " << w2 << std::endl;

	if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
		return (true);
	else
		return (false);
}
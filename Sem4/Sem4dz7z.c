#include <stdio.h>
#include <math.h>

const double pi = 3.14159265359;

double distance(double x1, double y1, double x2, double y2) 
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double length(double x, double y) 
{
	return distance(x, y, 0, 0);
}

double scalar_product(double x1, double y1, double x2, double y2) 
{
	return x1 * x2 + y1 * y2;
}

double to_degrees(double rad) 
{
	return rad * 180 / pi;
}

double angle(int x1, int y1, int x2, int y2)
{
	return to_degrees(acos(scalar_product(x1, y1, x2, y2) / (length(x1, y1) * length(x2, y2))));
}

int main()
{
	int x1, y1, x2, y2;
	scanf("%i %i", &x1, &y1);
	scanf("%i %i", &x2, &y2);
	printf("%lf\n", angle(x1, y1, x2, y2));
}
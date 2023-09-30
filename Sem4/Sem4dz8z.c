#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double length(double x1, double y1, double x2, double y2);

void circle(double x1, double y1, double r1, double x2, double y2, double r2)
{
	double eps = pow(10, -5), d;
	d = length(x1, y1, x2, y2);
	if ((d - r1 - r2) > eps)
	{
		printf("Do not intersect\n");
	}
	else if (fabs(d - r1 - r2) < eps)
	{
		printf("Touch\n");
	}
	else
	{
		printf("Intersect\n");
	}
}

double length(double x1, double y1, double x2, double y2) 
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	int x1, y1, r1, x2, y2, r2;
	scanf("%i %i %i", &x1, &y1, &r1);
	scanf("%i %i %i", &x2, &y2, &r2);
	circle(x1, y1, r1, x2, y2, r2);
}
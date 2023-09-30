#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
	double zero = pow(10, -10), D;
	D = b * b - 4 * a * c;
	if (D > zero)
	{
		px1[0] = (-b - sqrt(D)) / (2 * a);
		px2[0] = (-b + sqrt(D)) / (2 * a);
		return 2;
	}
	if (D < zero)
	{
		return 0;
	}
	else
	{
		px1[0] = (-b) / (2 * a);
	}
}

int main()
{
	double a, b, c, Ans1, Ans2;
	double* px1 = &Ans1;
	double* px2 = &Ans2;
	scanf("%lf %lf %lf", &a, &b, &c);
	solve_quadratic(a, b, c, px1, px2);
	printf("%lf %lf\n", Ans1, Ans2);
}
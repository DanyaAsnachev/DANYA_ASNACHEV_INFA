#include <stdio.h>
#include <math.h>

double F(float t, float x);

double gamma_f(float x)
{
	
	float result = 0, t = 0, val, step = pow(10, -2), eps = pow(10, -10);
	val = F(t, x) * step;
	while ((val > eps) || ( t < 1))
	{
		result += val;
		val = F(t, x) * step;
		t += step;
	} 
	return result;
}

double F(float t, float x)
{
	return pow(t, x - 1) * exp(-t);
}

int main()
{
	float n;
	scanf("%f", &n);
	printf("%lf\n", gamma_f(n));
}
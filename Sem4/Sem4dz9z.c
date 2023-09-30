#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F1(float x)
{
	return (pow(x, 2) - 2);
}

double F2(float x)
{
	return (pow(x, 2) - 7);
}

double F3(float x)
{
	return (pow(x, 5) + 2 * pow(x, 4) + 5 * pow(x, 2) + 4 * x - 500);
}

double F4(float x)
{
	return (exp(x) * logf(x) - 7);
}

int main()
{
	double l, m, h, val, eps = pow(10, -10), k = 0, l1, h1;
	scanf("%lf %lf", &l, &h);
	l1 = l;
	h1 = h;
	while (k < 4)
	{
		l = l1;
		h = h1;
		m = (l1 + h1) / 2;
		if (k == 0)
		{
			val = F1(m);
		}
		if (k == 1)
		{
			val = F2(m);
		}
		if (k == 2)
		{
			val = F3(m);
		}
		if (k == 3)
		{
			val = F4(m);
		}
		while ((h - l) > eps)
		{
			if (val > 0)
			{
				h = m;
			}
			else
			{
				l = m;
			}
			m = (l + h) / 2;
			if (k == 0)
			{
				val = F1(m);
			}
			if (k == 1)
			{
				val = F2(m);
			}
			if (k == 2)
			{
				val = F3(m);
			}
			if (k == 3)
			{
				val = F4(m);
			}
		}
		k += 1;
		printf("%lf\n", m);
	}
}
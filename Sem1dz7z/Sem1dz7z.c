#include <stdio.h>

int main() 
{
  int n, m, sum = 0, k = 1;
  scanf("%i %i", &n, &m);
  for (int i = 0; i <= n; ++i)
  {

    for (int j = 0; j <= m; ++j)
    {
        if ((i + j) % 2 == 0) //в си нет операции возведения в степень
            k = 1;
        else
            k = -1;
        sum = sum + k*i*j;
    }

  } 
  printf("Sum = %i", sum);
}
#include <stdio.h>

int main() 
{
  int a, b, c;
  scanf("%i %i %i", &a, &b, &c);
  while (a <= b)
  {
    if (a % c == 0)
    {
        printf("%i ", a);
    }
    a += 1;
  }
}
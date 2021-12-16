#include "stdio.h"

int main (int argc, char *argv[])
{
  
  int b, x, c;

  printf("y = bx^2 + 0,5x - c\n");

  printf("Valiabel b = ");
  scanf("%d", &b);

  printf("Valiabel x = ");
  scanf("%d", &x);

  printf("Valiabel c = ");
  scanf("%d", &c);

  printf("y = %f", b*(x*x) + (0.5 * x) - c);

  return 0;
}

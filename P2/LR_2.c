#include "stdio.h"

int main (int argc, char *argv[])
{
 
  int x, z, a;

  printf("y = 0.3xz / 2a\n");

  printf("Variabel x = ");
  scanf("%d", &x);

  printf("Variabel z = ");
  scanf("%d", &z);

  printf("Variabel a = ");
  scanf("%d", &a);

  printf("y = %f", 0.3*x*z/2*a);

  return 0;
}

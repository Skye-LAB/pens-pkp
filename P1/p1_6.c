#include "stdio.h"

int main (int argc, char *argv[])
{
  
  int a;
  char b;

  printf("Masukkan char: ");
  b = getchar();
  printf("Masukkan integer: ");
  scanf("%i", &a);

  printf("Character: ");
  putchar(b);
  printf("\nInteger: %i", a);

  return 0;
}

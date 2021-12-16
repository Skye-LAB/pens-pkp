#include "stdio.h"

int main (int argc, char *argv[])
{
  
  float a, b, c;

  printf("Masukkan bilangan pertama: ");
  scanf("%f", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%f", &b);

  printf("Masukkan bilangan ketiga: ");
  scanf("%f", &c);

  printf("Hasil diskriman bilangan %.2f, %.2f dan %.2f adalah %.2f", a, b, c ,b*b-4*a*c);

  return 0;
}

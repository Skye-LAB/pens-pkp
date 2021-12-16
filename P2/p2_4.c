#include "stdio.h"

int main (int argc, char *argv[])
{
  
  int a, b, c;

  printf("Masukkan bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%d", &b);

  printf("Masukkan bilangan ketiga: ");
  scanf("%d", &c);

  printf("Hasil diskriman bilangan %d, %d dan %d adalah %d", a, b, c ,b*b-4*a*c);

  return 0;
}

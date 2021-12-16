#include "stdio.h"

int main(int argc, char *argv[]) {

  int a, b;
  float med;

  printf("Masukan Bilangan pertama: ");
  scanf("%i", &a);

  printf("Masukan Bilangan kedua: ");
  scanf("%i", &b);

  med = ((float)a + (float)b) / 2;

  printf("Jumlah bilangan pertama dan kedua adalah %i\n", a + b);
  printf("Rata - rata dari bilangan pertama dan kedua adalah %.2f\n", med);
  printf("Kuadrat bilangan pertama dan kedua adalah %i, %i\n", a * a, b * b);

  return 0;
}


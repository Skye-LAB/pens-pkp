#include "stdio.h"

float kuadrat(float);

int main(int argc, char *argv[]) {
  float n, hasil;

  printf("Masukkan bilangan: ");
  scanf("%f", &n);

  hasil = kuadrat(n);

  printf("Kuadrat dari %.2f adalah %.2f", n, hasil);

  return 0;
}

float kuadrat(float n) { return n * n; }

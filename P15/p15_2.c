#include "stdio.h"

int permutasi(int a, int b);
int kombinasi(int a, int b);

int main(int argc, char *argv[]) {
  int a, b, perm, komb;

  printf("Masukkan bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%d", &b);

  perm = permutasi(a, b);
  komb = kombinasi(a, b);

  printf("Permutasi: %d\n", perm);
  printf("Kombinasi: %d", komb);

  return 0;
}

int faktorial(int n) {
  int tmp = 1;

  for (int i = n; i >= 1; i--) {
    tmp *= i;
  }

  return tmp;
}

int permutasi(int a, int b) {
  int hasil, tmp = 1;

  hasil = faktorial(a);

  tmp = faktorial(a - b);

  hasil /= tmp;

  return hasil;
}

int kombinasi(int a, int b) {
  int hasil, tmp = 1, n = 1;

  hasil = faktorial(a);
  tmp = faktorial(b);
  n = faktorial(a - b);

  hasil = hasil / (tmp * n);

  return hasil;
}

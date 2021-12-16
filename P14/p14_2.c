#include "stdio.h"

long int faktorial(int);

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);
  printf("Hasil Faktorial: %ld", faktorial(n));

  return 0;
}

long int faktorial(int n) {
  int total = 1;

  if (n == 1) {
    return 1;
  }

  for (int i = 1; i <= n; i++) {
    total *= i;
  }

  return total;
}

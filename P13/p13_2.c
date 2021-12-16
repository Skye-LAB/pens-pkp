#include "stdio.h"

int triangular(int);

int main(int argc, char *argv[]) {
  int n, hasil;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  hasil = triangular(n);

  printf("Total: %d", hasil);

  return 0;
}

int triangular(int n) {
  int a = 0;
  for (int i = 1; i <= n; i++) {
    printf("%d ", a);
    a += i;
  }
  return a;
}

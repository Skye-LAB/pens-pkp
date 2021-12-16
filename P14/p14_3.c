#include "stdio.h"

int prima(int);

int main(int argc, char *argv[]) {

  int n, hasil;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  hasil = prima(n);
  if (hasil == 1) {
    printf("%d adalah bilangan prima", n);
  } else {
    printf("%d adalah bukan bilangan prima", n);
  }

  return 0;
}

int prima(int n) {
  int counter = 0;

  if (n == 0 || n == 1) {
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      counter++;
    }
  }

  if (counter != 2) {
    return 0;
  }

  return 1;
}

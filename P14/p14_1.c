#include "stdio.h"

int ganjil(int);

int main(int argc, char *argv[]) {
  int a, hasil;

  printf("Masukkan bilangan: ");
  scanf("%d", &a);

  hasil = ganjil(a);

  if (hasil == 1) {
    printf("Ganjil");
  } else {
    printf("Genap");
  }
  return 0;
}

int ganjil(int a) {
  if (a % 2 == 0) {
    return 0;
  }
  return 1;
}

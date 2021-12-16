#include "stdio.h"

int terbesar(int a, int b);

int main(int argc, char *argv[]) {
  int a, b;

  printf("Masukkan bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%d", &b);

  printf("Bilangan terbesar adalah: %d", terbesar(a, b));

  return 0;
}

int terbesar(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

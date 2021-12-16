#include "stdio.h"

int change(int n);

int main(int argc, char *argv[]) {
  int a, b;

  printf("Masukkan bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%d", &b);

  printf("Bilangan pertama setelah dinaikkan: %d\n", change(a));
  printf("Bilangan kedua setelah dinaikkan: %d", change(b));

  return 0;
}

int change(int n) { return n + 2; }

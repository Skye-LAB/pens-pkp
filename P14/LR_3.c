#include "stdio.h"

void ubah(int y);

int main(int argc, char *argv[]) {
  int x;

  printf("Masukkan nilai x: ");
  scanf("%d", &x);
  ubah(x);
  printf("x = %d", x);
  return 0;
}

void ubah(int y) { y = 85; }

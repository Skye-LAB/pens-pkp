#include "stdio.h"

int main(int argc, char *argv[]) {
  int x;

  printf("3x^2-5x+6\n");

  printf("Nilai X: ");
  scanf("%d", &x);

  printf("Hasil: %d", 3 * (x * x) - (5 * x) + 6);
  return 0;
}

#include "stdio.h"

int main(int argc, char *argv[]) {
  int a;

  printf("Masukkan nilai variable a: ");
  scanf("%d", &a);

  if (a > 0) {
    printf("Nilai a positif\n");
  } else {
    printf("Nilai a negatif\n");
  }

  return 0;
}

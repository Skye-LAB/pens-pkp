#include "stdio.h"

int main(int argc, char *argv[]) {
  int n, nilai, min = 0, max = 0, total = 0;
  char kar;

  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("Data ke-%d\n", i);
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (i == 1) {
      min = nilai;
    }

    if (nilai > max) {
      max = nilai;
    }
    if (nilai < min) {
      min = nilai;
    }

    total += nilai;
  }

  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("Total: %d", total);

  return 0;
}

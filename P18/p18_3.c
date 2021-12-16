#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan ordo(nXn): ");
  scanf("%d", &n);

  int a[n][n], b[n][n], c[n][n];

  printf("\nMatriks A\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Masukkan Baris %d dan Kolom %d : ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nMatriks B\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Masukkan Baris %d dan Kolom %d : ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("Hasil penjumlahan (Matriks c)\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Baris %d dan Kolom %d : %d\n", i + 1, j + 1, c[i][j]);
    }
  }

  return 0;
}

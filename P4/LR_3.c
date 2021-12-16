#include "stdio.h"

int main(int argc, char *argv[]) {
  int bil;

  printf("Masukkan nilai bil: ");
  scanf("%d", &bil);

  if (bil > 0) {
  } else {
    printf("Kategori B\n");
  }
  printf("Kategori A");

  /* if (bil < 0) { */
  /*   printf("Kategori B\n"); */
  /* } */
  /* printf("Kategori A"); */

  return 0;
}

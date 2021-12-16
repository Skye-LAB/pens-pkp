#include "stdio.h"
#include <string.h>

#define MAKS 256

int main(int argc, char *argv[]) {
  int hasil1, hasil2;
  char awal[MAKS], akhir[MAKS];

  printf("Masukkan kalimat pertama: ");
  fgets(awal, sizeof awal, stdin);

  printf("Masukkan kalimat kedua: ");
  fgets(akhir, sizeof akhir, stdin);

  // NOTE: strcasecmp sama dengan strcmpi
  hasil1 = strcmp(awal, akhir);
  hasil2 = strcasecmp(awal, akhir);

  printf("Perbandingan dengan strcmp()\n");
  if (hasil1 == 0) {
    printf("Kalimat pertama dan kedua sama");
  } else {
    printf("Kalimat pertama dan kedua tidak sama");
  }
  printf("\n");

  printf("Perbandingan dengan strcmpi()\n");
  if (hasil2 == 0) {
    printf("Kalimat pertama dan kedua sama");
  } else {
    printf("Kalimat pertama dan kedua tidak sama");
  }

  return 0;
}

#include "stdio.h"
#include "string.h"

#define MAKS 255

int main(int argc, char *argv[]) {
  char pertama[MAKS];
  char kedua[MAKS];
  char tmp[1];

  printf("Masukkan kalimat: ");
  fgets(pertama, sizeof pertama, stdin);

  strcpy(kedua, pertama);

  tmp[0] = kedua[0];
  kedua[0] = kedua[strlen(kedua) - 2];
  kedua[strlen(kedua) - 2] = tmp[0];

  printf("Sebelum: %s", pertama);
  printf("Sesudah: %s", kedua);

  return 0;
}

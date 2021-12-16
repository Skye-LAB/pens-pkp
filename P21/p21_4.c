#include "stdio.h"

#define MAKS 256

char kata[MAKS];
char kopi[MAKS];

void copystr();

int main(int argc, char *argv[]) {
  printf("Masukkan kalimat: ");
  fgets(kata, sizeof kata, stdin);

  copystr();

  printf("Kalimat utama: %s", kata);
  printf("Kalimat hasil kopi: %s", kopi);

  return 0;
}

void copystr() {
  for (int i = 0; kata[i] != '\n'; i++) {
    kopi[i] = kata[i];
  }
}

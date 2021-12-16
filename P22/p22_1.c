#include "stdio.h"
#include "string.h"

#define MAKS 256

int main(int argc, char *argv[]) {
  char kata[MAKS];
  char kopi[MAKS];

  printf("Masukkan kalimat: ");
  fgets(kata, sizeof kata, stdin);

  printf("Banyak karakter: %ld", strlen(kata));
  printf("\nKalimat dibalik: %s", strrev(kata));
  strcpy(kopi, kata);
  printf("\nHasil Pencopyan: %s", kopi);

  return 0;
}

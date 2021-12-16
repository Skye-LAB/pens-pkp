#include "stdio.h"

#define MAKS 256

int jmlstr(char kata[]);

int main(int argc, char *argv[]) {
  char kata[MAKS];
  int jml = 0;

  printf("Masukkan kalimat: ");
  fgets(kata, sizeof kata, stdin);

  jml = jmlstr(kata);

  printf("Jumlah karakter: %d", jml);

  return 0;
}

int jmlstr(char kata[]) {
  int jml = 0;
  for (int i = 0; kata[i] != '\0'; i++) {
    jml++;
  }

  return jml;
}

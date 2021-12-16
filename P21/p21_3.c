#include "stdio.h"

#define MAKS 256

void pjgstr();
void balikstr(int jml);

char kata[MAKS];
int main(int argc, char *argv[]) {
  printf("Masukkan kalimat: ");
  fgets(kata, sizeof kata, stdin);

  printf("Kalimat yang dibalik: ");
  pjgstr();

  return 0;
}

void pjgstr() {
  int jml = 0;
  for (int i = 0; kata[i] != '\0'; i++) {
    jml++;
  }

  balikstr(jml);
}

void balikstr(int jml) {
  char tmp;
  for (int i = jml; i >= 0; i--) {
    tmp = kata[i];
    printf("%c", tmp);
  }
  printf("\n");
}

#include "stdio.h"
#include <string.h>

#define MAKS 256

int bandingstr(char awal[MAKS], char akhir[MAKS]);

int main(int argc, char *argv[]) {
  int hasil;
  char awal[MAKS], akhir[MAKS];

  printf("Masukkan kalimat pertama: ");
  fgets(awal, sizeof awal, stdin);

  printf("Masukkan kalimat kedua: ");
  fgets(akhir, sizeof akhir, stdin);

  hasil = bandingstr(awal, akhir);

  if (hasil == 0) {
    printf("Kalimat pertama dan kedua sama");
  } else {
    printf("Kalimat pertama dan kedua tidak sama");
  }

  return 0;
}

int bandingstr(char awal[MAKS], char akhir[MAKS]) {
  int status;
  int a, b;

  for (int i = 0; i < strlen(awal) || i < strlen(akhir); i++) {
    a = awal[i];
    b = akhir[i];
    if (awal[i] >= 97 && awal[i] <= 122) {
      a = awal[i] - 32;
    }
    if (akhir[i] >= 97 && akhir[i] <= 122) {
      b = akhir[i] - 32;
    }

    if (a > b) {
      status = 1;
      continue;
    } else if (a < b) {
      status = -1;
      continue;
    } else {
      status = 0;
      continue;
    }
  }

  return status;
}

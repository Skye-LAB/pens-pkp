#include "stdio.h"

float konversiSuhu(float, char, char);

int main(int argc, char *argv[]) {

  int n;
  float hasil;
  char asal, tuj;

  printf("Masukkan derajat: ");
  scanf("%d", &n);
  printf("Asal: ");
  scanf(" %c", &asal);
  printf("Tujuan: ");
  scanf(" %c", &tuj);

  hasil = konversiSuhu(n, asal, tuj);
  printf("Hasil: %.2f", hasil);

  return 0;
}

float konversiCel(float suhu, char tuj) {
  float hasil = 0;
  switch (tuj) {
  case 'F':
    hasil = suhu * 1.8 + 32;
    break;
  case 'R':
    hasil = suhu * 0.8;
    break;
  }

  return hasil;
}

float konversiFah(float suhu, char tuj) {
  float hasil = 0;
  switch (tuj) {
  case 'C':
    hasil = (suhu - 32) / 1.8;
    break;
  case 'R':
    hasil = (suhu - 32) / 2.25;
    break;
  }

  return hasil;
}

float konversiRem(float suhu, char tuj) {
  float hasil = 0;
  switch (tuj) {
  case 'C':
    hasil = suhu / 0.8;
    break;
  case 'F':
    hasil = (suhu * 2.25) + 32;
    break;
  }

  return hasil;
}

float konversiSuhu(float suhu, char asal, char tuj) {
  float hasil = 0;
  switch (asal) {
  case 'C':
    hasil = konversiCel(suhu, tuj);
    break;
  case 'F':
    hasil = konversiFah(suhu, tuj);
    break;
  case 'R':
    hasil = konversiRem(suhu, tuj);
    break;
  }

  return hasil;
}

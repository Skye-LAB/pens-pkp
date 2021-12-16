#include "stdio.h"

int main(int argc, char *argv[]) {
  int pil, panjang, tinggi;

  printf("1. Volume Kubus\n");
  printf("2. Luas Lingkaran\n");
  printf("3. Volume Silinder\n");

  printf("Masukkan pilihan Anda: ");
  scanf("%d", &pil);

  switch (pil) {
  case 1:
    printf("Masukkan panjang sisi: ");
    scanf("%d", &panjang);

    printf("Volume Kubus: %d", panjang * panjang * panjang);
    break;
  case 2:
    printf("Masukkan panjang jari-jari: ");
    scanf("%d", &panjang);

    printf("Luas lingkaran: %f", 3.14 * panjang * panjang);
    break;
  case 3:
    printf("Masukkan panjang jari-jari: ");
    scanf("%d", &panjang);

    printf("Masukkan tinggi silinder: ");
    scanf("%d", &tinggi);

    printf("Volume tabung: %f", 3.14 * panjang * panjang * tinggi);
    break;
  default:
    printf("Pilihan tidak valid");
    break;
  }

  return 0;
}

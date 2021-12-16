#include "stdio.h"

int main(int argc, char *argv[]) {
  int a, b, pil;

  printf("Masukkan bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan bilangan kedua: ");
  scanf("%d", &b);

  printf("Menu Matematika\n");
  printf("1. Penjumlahan\n");
  printf("2. Pengurangan\n");
  printf("3. Pembagian\n");
  printf("4. Perkalian\n");

  printf("Masukkan Pilihan Anda: ");
  scanf("%d", &pil);

  if (pil == 1) {
    printf("Hasil operasi tersebut = %d", a + b);
  } else if (pil == 2) {
    printf("Hasil operasi tersebut = %d", a - b);
  } else if (pil == 3) {
    printf("Hasil operasi tersebut = %d", a / b);
  } else if (pil == 4) {
    printf("Hasil operasi tersebut = %d", a * b);
  } else {
    printf("Pilihan Anda salah");
  }

  return 0;
}

#include "stdio.h"

int main(int argc, char *argv[]) {

  int a, b;
  float f;

  printf("1. Nama Bayu Prima Setiawan, NRP: 3121510301 \n");
  printf("2. %i\n", 1024 * 4096);

  printf("Variable 1: ");
  scanf("%i", &a);
  printf("Variable 2: ");
  scanf("%i", &b);

  printf("3. Nilai penjumlahan variable 1 dan 2 adalah %i\n", a + b);

  printf("Variable float: ");
  scanf("%f", &f);

  printf("4. Nilai perkalian variable float dan 50 adalah %f", f * 50);

  return 0;
}

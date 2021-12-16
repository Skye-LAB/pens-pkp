#include "stdio.h"

int main(int argc, char *argv[]) {
  float a, b;

  printf("Masukkan nilai bilangan pertama: ");
  scanf("%f", &a);

  printf("Masukkan nilai bilangan kedua: ");
  scanf("%f", &b);

  if (a == 0 || b == 0) {
    printf("Error: division by zero");
  } else {
    printf("Hasil bagi bilangan %.2f dan %.2f: %.3f", a, b, a / b);
  }

  return 0;
}

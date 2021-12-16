#include "stdio.h"

int main(int argc, char *argv[]) {
  int a;

  printf("Masukkan nilai variable a: ");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("a adalah bilangan genap");
  } else if(a % 2 != 0) {
    printf("a adalah bilanagan ganjil");
  }

  return 0;
}

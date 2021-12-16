#include "stdio.h"

int main(int argc, char *argv[]) {
  int a;

  printf("Masukkan bilangan: ");
  scanf("%d", &a);

  for (int i = 1; i <= a; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i * -1);
    } else {
      printf("%d\n", i);
    }
  }

  return 0;
}

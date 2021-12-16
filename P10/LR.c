#include "stdio.h"

int main(int argc, char *argv[]) {
  int n, prima, i = 0, a = 1;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  while (a <= n) {
    prima = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        prima++;
      }
    }

    if (prima == 2) {
      printf("%d\n", i);
      a++;
    }
    i++;
  }

  return 0;
}

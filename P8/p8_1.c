#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  int a = 1;
  for (int i = 0; i < n; i++) {
    printf("%d\n", a);
    a += 2;
  }

  return 0;
}

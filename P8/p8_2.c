#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  int total = 0;
  for (int i = n; i != 0; i--) {
    printf("%d\n", n);
    total += n;
    n -= 1;
  }
  printf("Total: %d\n", total);

  return 0;
}

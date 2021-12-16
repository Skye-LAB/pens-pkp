#include "stdio.h"

int main(int argc, char *argv[]) {
  int a, stat = 0;

  printf("Masukkan bilangan: ");
  scanf("%d", &a);

  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      stat++;
    }
  }

  if (stat == 2) {
    printf("%d adalah bilangan prima", a);
  }
  return 0;
}

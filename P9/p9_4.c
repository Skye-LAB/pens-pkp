#include <stdio.h>

int main(int argc, char *argv[]) {
  int counter = 0, a, n = 0;

  printf("Masukkan bilangan: ");
  scanf("%d", &a);

  while (counter < a) {
    n += counter;
    printf("%d\n", n);
    counter++;
  }

  return 0;
}

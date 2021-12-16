#include "stdio.h"

int main(int argc, char *argv[]) {
  char total = 0;
  char bil;

  printf("Masukkan bilangan: ");
  while ((bil = getchar()) != '\n') {
    total += bil - '0';
  }

  printf("Total: %d", total);

  return 0;
}

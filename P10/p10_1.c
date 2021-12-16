#include "stdio.h"

int main(int argc, char *argv[]) {
  char kar;

  printf("Masukkan kalimat: ");

  while (1) {
    kar = getchar();
    if (kar == '\n') {
      break;
    }
    printf("%c", kar);
  }

  return 0;
}

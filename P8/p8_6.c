#include "stdio.h"

int main(int argc, char *argv[]) {
  int a, total = 0, tot = 0;
  char b;

  for (int i = 1; i <= 5; i++) {
    fflush(stdin);
    printf("Masukkan nilai mata kuliah ke-%d: ", i);
    scanf(" %c", &b);
    printf("Masukkan jumlah jam mata kuliah ke-%d: ", i);
    scanf(" %d", &a);

    switch (b) {
    case 'a':
    case 'A':
      total = total + (4 * a);
      break;

    case 'b':
    case 'B':
      total = total + (3 * a);
      break;

    case 'c':
    case 'C':
      total = total + (2 * a);

      break;
    case 'd':
    case 'D':
      total = total + (1 * a);
      break;

    case 'e':
    case 'E':
      total = total + (0 * a);
      break;

    default:
      printf("a");
    }

    tot += a;
  }

  printf("Total IPS: %d/%d -> %d", total, tot, total/tot);

  return 0;
}

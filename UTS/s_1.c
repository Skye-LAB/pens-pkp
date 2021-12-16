#include "stdio.h"

int main(int argc, char *argv[]) {
  int a, b, c, tmp;

  printf("Masukkan bilangan ke-1: ");
  scanf("%d", &a);
  printf("Masukkan bilangan ke-2: ");
  scanf("%d", &b);
  printf("Masukkan bilangan ke-3: ");
  scanf("%d", &c);

  if (a < b && a < c) {
    if (b > c) {
      tmp = b;
      b = c;
      c = tmp;
    }
  } else if (b < a && b < c) {
    if (a < c) {
      tmp = a;
      a = b;
      b = tmp;
    } else {
      tmp = a;
      a = b;
      b = tmp;

      tmp = b;
      b = c;
      c = tmp;
    }
  } else {
    if (b < a) {
      tmp = a;
      a = c;
      c = tmp;
    } else {
      tmp = a;
      a = b;
      b = tmp;

      tmp = a;
      a = c;
      c = tmp;
    }
  }

  printf("Bilangan setelah diurutkan: %d %d %d", a, b, c);

  return 0;
}

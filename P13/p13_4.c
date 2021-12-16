#include "stdio.h"

int cn(int);
int sn(int);

int main(int argc, char *argv[]) {
  int n, c, s;

  printf("Masukkan bilangan(n): ");
  scanf("%d", &n);

  c = cn(n);
  s = sn(n);

  printf("Cn = Cn-1 + 2: %d\n", c);
  printf("Sn = Sn-1 + n -1: %d", s);

  return 0;
}

int cn(int n) {
  int curr = 1;

  for (int i = 1; i <= n; i++) {
    curr = 2 * curr + 1;
  }

  if (n == 0)
    return 0;

  return curr;
}

int sn(int n) {
  int curr = 0;

  for (int i = 2; i <= n; i++) {
    curr = curr + i - 1;
  }

  if (n == 1)
    return 0;

  return curr;
}

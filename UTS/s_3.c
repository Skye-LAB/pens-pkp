#include "stdio.h"

int main(int argc, char *argv[]) {
  int total = 0;
  int faktor, n;

  printf("Masukkan Bilangan: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    faktor = 0;
    if (n % i == 0) {
      if (i != n) {
        faktor = i;
      }
    }
    total += faktor;
  }

  if (total == n) {
    printf("Bilangan %d merupakan bilangan sempurna", n);
  } else {
    printf("Bilangan %d bukan merupakan bilangan sempurna", n);
  }

  return 0;
}

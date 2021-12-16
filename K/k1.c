#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = 0, total = 0, ganjil = 0, genap = 0;

  printf("Berapa kali? ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int a = 0;
    printf("Masukkan bilangan ke-%d: ", i);
    scanf("%d", &a);
    total += a;
    if (a % 2 == 0) {
      genap++;
    } else {
      ganjil++;
    }
  }

  printf("Total: %d\n", total);
  printf("Ganjil: %d\n", ganjil);
  printf("Genap: %d\n", genap);

  return 0;
}

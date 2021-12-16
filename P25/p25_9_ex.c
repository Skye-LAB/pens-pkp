#include <stdio.h>
int findbil(int[], int);

int main() {
  int hasil, n, bilangan[10] = {15, 2, 1, 64, 9, 0, 23, 67, 38, 19};
  puts("Mencari Bilangan dalam Array\n");
  printf("Masukkan bilangan : ");
  scanf("%d", &n);
  hasil = findbil(bilangan, n);
  if (hasil == 1)
    printf("bilangan %d berada di dalam array", n);
  else
    printf("bilangan %d tidak berada di dalam array", n);
  return 0;
}
int findbil(int *pbilangan, int x) {
  int i, hsl = 0;
  for (i = 0; i < 10; i++) {
    if (*pbilangan == x) {
      hsl = 1;
      break;
    }
    *pbilangan++;
  }
  return hsl;
}

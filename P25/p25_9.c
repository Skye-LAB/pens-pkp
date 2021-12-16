#include <stdio.h>

int caribil(int *pbil, int n);

int main() {
  int hasil, n, bilangan[10] = {3, 5, 23, 64, 1, 12, 34, 54, 11, 122};

  puts("Mencari Bilangan Dengan Pointer\n");
  printf("Masukkan bilangan : ");
  scanf("%d", &n);

  hasil = caribil(bilangan, n);
  if (hasil == 1)
    printf("bilangan %d berada di dalam array", n);
  else
    printf("bilangan %d tidak berada di dalam array", n);
  return 0;
}

int caribil(int *pbil, int n) {
  for (int i = 0; i < 10; i++) {
    if (*pbil == n) {
      return 1;
    }
    *pbil++;
  }

  return 0;
}

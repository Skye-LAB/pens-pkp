#include "stdio.h"

int main (int argc, char *argv[])
{
  int total, diskon = 0;

  printf("Masukkan total pembayaran: ");
  scanf("%d", &total);

  if (total < 100000) {
    printf("Diskon: %d\n", diskon);
    printf("Total pembayaran: %d", total);
  } else {
    diskon = 0.05 * total;
    printf("Diskon: %d\n", diskon);
    printf("Total pembayaran: %d", total - diskon);
  }

  return 0;
}

#include "stdio.h"

int main(int argc, char *argv[]) {

  int hargaTiket = 50000, jmlTiket, total, tmp, sisa, dis;

  printf("Jumlah tiket yang ingin dibeli: ");
  scanf("%d", &jmlTiket);

  tmp = jmlTiket / 3;

  sisa = jmlTiket % 3;

  dis = jmlTiket - (tmp * 2 + sisa);

  total = tmp * (2 * 50000) + (sisa * 50000);

  printf("Diskon: %d\n", dis * hargaTiket);
  printf("Harga yang harus dibayar: %d", total);

  return 0;
}

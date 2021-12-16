#include "stdio.h"
#include "string.h"

void showMenu();

struct menu {
  char kode;
  int jml;
} keranjang[20];

int i = 0, harga, total = 0;
char jwb, jenis[6];

int main(int argc, char *argv[]) {
  showMenu();

  printf("\n\nMasukkan Pesanan Anda");
  do {
    fflush(stdin);
    printf("\nPesanan ke-%d", i + 1);
    printf("\nJenis [D/P/S]\t: ");
    scanf(" %c", &keranjang[i].kode);
    printf("Jumlah \t\t: ");
    scanf(" %d", &keranjang[i].jumlah);

    i++;
    printf("\nMau pesan lagi [y/n] ?");
    scanf(" %c", &jwb);
  } while (jwb == 'Y' || jwb == 'y');

  return 0;
}

void showMenu() {
  printf("Toko GFC-Gerobak Fried Chicken\n");
  printf("\nDAFTAR HARGA");
  printf("\nKode\tJenis\tHarga Per Potong");
  printf("\nD\tDada\tRp. 5000.00");
  printf("\nP\tPaha\tRp. 4000.00");
  printf("\nS\tSayap\tRp. 3000.00");
  printf("\n\nHarga belum termasuk pajak : 10 %%");
}

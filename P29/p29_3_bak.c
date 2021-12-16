#include "stdio.h"
#include "string.h"

struct menu {
  char kode;
  int jumlah;
} keranjang[20];

void showMenu();
void showBill();

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

  showBill();
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

void showBill() {

  printf("\n\nNota Belanja Anda : \n");
  printf("\n                    GEROBAK FRIED CHICKEN\n");
  printf("\n================================================================");
  printf("\nNo\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga");
  printf("\n================================================================");

  for (int j = 0; j < i; j++) {
    switch (keranjang[j].kode) {
    case 'D':
    case 'd':
      strcpy(jenis, "DADA");
      harga = 5000;
      break;
    case 'P':
    case 'p':
      strcpy(jenis, "PAHA");
      harga = 4000;
      break;
    case 'S':
    case 's':
      strcpy(jenis, "SAYAP");
      harga = 3000;
      break;
    }

    printf("\n%d\t%s\t\tRp. %.2d\t%d\tRp. %6.2d", j + 1, jenis, harga,
           keranjang[j].jumlah, harga * keranjang[j].jumlah);
    total = total + harga * keranjang[j].jumlah;
  }
  printf("\n================================================================");
  printf("\n\t\t\t\tJumlah bayar\tRp. %6.2d", total);
  printf("\n\t\t\t\tPajak 10%%\tRp. %6.2d", total / 10);
  printf("\n\t\t\t\tTotal bayar\tRp. %6.2d", total + total / 10);
  printf("\n\n\t\tTERIMA KASIH ATAS KUNJUNGANNYA\n");
}

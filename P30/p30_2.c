#include "stdio.h"
#include "string.h"

struct barang {
  char kode;
  int jumlah;
};

void showMenu();
void hasil(struct barang pesan[]);

int n;

int main(int argc, char *argv[]) {

  showMenu();

  printf("\n\nBanyak barang: ");
  scanf("%d", &n);

  struct barang pesan[n];

  for (int i = 0; i < n; i++) {
    printf("Data ke-%d", i + 1);

    printf("\nUkuran [S/M/L] : ");
    scanf(" %c", &pesan[i].kode);
    printf("Jumlah beli    : ");
    scanf(" %d", &pesan[i].jumlah);
  }

  hasil(pesan);

  return 0;
}

void showMenu() {
  printf("\t\tToko Laris");
  printf("\n\t\tDaftar Harga");
  printf("\n================================================");
  printf("\nUkuran Baju\tNama Ukuran\tHarga Per Potong");
  printf("\n================================================");
  printf("\n    S\t\tSMALL\t\tRp. 36.000,-");
  printf("\n    M\t\tMEDIUM\t\tRp. 43.000,-");
  printf("\n    L\t\tLARGE\t\tRp. 62.000,-");
  printf("\n================================================");
  printf("\n\nDapatkan diskon 20 %% untuk pembelian lebih dari 10 potong...");
  printf("\nJangan lupa, pajaknya ya... (10%% x (harga - diskon))");
}

void hasil(struct barang pesan[]) {
  int j;
  float total = 0, harga, diskon;
  char jenis[10];

  printf("\nNota Belanja Anda :\n\n");
  printf("\t\t\t\tToko LARIS\n");
  printf("====================================================================="
         "===========\n");
  printf("No\tNama Ukuran\tHarga Satuan\tQty\tDiskon\t\tJumlah Harga\n");
  printf("====================================================================="
         "===========\n");
  for (j = 0; j < n; j++) {
    switch (pesan[j].kode) {
    case 'S':
    case 's':
      strcpy(jenis, "SMALL");
      harga = 36000;
      break;
    case 'M':
    case 'm':
      strcpy(jenis, "MEDIUM");
      harga = 43000;
      break;
    case 'L':
    case 'l':
      strcpy(jenis, "LARGE");
      harga = 62000;
      break;
    }
    if (pesan[j].jumlah > 10)
      diskon = harga * pesan[j].jumlah * 0.2;
    else
      diskon = 0;
    printf("%d\t%s\t\tRp%5.2f\t%d\tRp%10.2f\tRp%10.2f\n", j + 1, jenis, harga,
           pesan[j].jumlah, diskon, harga * pesan[j].jumlah);

    total = total + harga * pesan[j].jumlah - diskon;
  }
  printf("====================================================================="
         "===========\n");
  printf("\t\t\t\t\t\tJumlah Bayar\tRp %10.2f\n", total);
  printf("\t\t\t\t\t\tPajak 10%%\tRp %10.2f\n", total * 0.1);
  printf("\t\t\t\t\t\tTOTAL BAYAR\tRp %10.2f\n\n", total + total * 0.1);
  printf("\t\t\tTERIMA KASIH ATAS KUNJUNGAN ANDA");
}

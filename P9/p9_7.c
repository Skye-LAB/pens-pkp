#include "stdio.h"

int main(int argc, char *argv[]) {
  int rata, bulan = 0, tahun = 0;
  long int biaya, cicil, tabung = 0;

  printf("Biaya awal: ");
  scanf("%ld", &biaya);

  printf("Cicilan tiap bulan: ");
  scanf("%ld", &cicil);

  printf("Rata-rata kenaikkan/bulan(%%): ");
  scanf("%d", &rata);

  do {
    bulan++;
    tabung += cicil;
    if (bulan == 12) {
      biaya += ((biaya * rata) / 100);
      bulan = 0;
      tahun++;
    }
  } while (tabung < biaya);

  printf("Waktu yang dibutuhkan: %d bulan\n", (tahun * 12) + bulan);

  return 0;
}

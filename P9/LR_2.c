#include "stdio.h"

int main(int argc, char *argv[]) {
  int naik, bulan = 0, tahun = 0;
  float biaya, cicil, bonus, tabung = 0;
  float rata;

  printf("Biaya awal: ");
  scanf("%f", &biaya);

  printf("Cicilan tiap bulan: ");
  scanf("%f", &cicil);

  printf("Kenaikkan pada tahun kemarin: ");
  scanf("%d", &naik);

  printf("Bonus gaji: ");
  scanf("%f", &bonus);

  rata = (biaya - (biaya - naik)) / biaya;

  do {
    bulan++;
    tabung += cicil + bonus;
    if (bulan == 12) {
      biaya += (biaya * rata);
      bulan = 0;
      tahun++;
    }
  } while (tabung < biaya);

  printf("Waktu yang dibutuhkan: %d bulan\n", (tahun * 12) + bulan);

  return 0;
}

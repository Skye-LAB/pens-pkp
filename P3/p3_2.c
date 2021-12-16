#include "stdio.h"

int main(int argc, char *argv[]) {

  float gajiPokok, pajak, tunjanganSuami, tunjanganIstri, tunjanganAnak;
  int jmlAnak, masaKerja, masukKerja, transport = 3000, thr = 5000,
                                      asuransi = 20000;

  printf("Gaji pokok: ");
  scanf("%f", &gajiPokok);

  printf("Jumlah anak: ");
  scanf("%i", &jmlAnak);

  printf("Masa kerja(Tahun): ");
  scanf("%i", &masaKerja);

  printf("Masuk Kerja(Hari/Bulan): ");
  scanf("%i", &masukKerja);

  tunjanganIstri = 0.1 * gajiPokok;
  tunjanganSuami = 0.1 * gajiPokok;
  tunjanganAnak = (0.05 * jmlAnak) * gajiPokok;

  int total = gajiPokok + tunjanganIstri + tunjanganAnak;

  pajak = 0.15 * total;
  transport *= masukKerja;

  thr *= masaKerja;

  int pendapatan = (gajiPokok + thr + tunjanganSuami + tunjanganIstri + tunjanganAnak) -
                   (pajak + transport + asuransi);

  printf("Gaji Pokkok: %.2f\n", gajiPokok);
  printf("Tunjangan Suami: %.2f\n", tunjanganSuami);
  printf("Tunjangan Istri: %.2f\n", tunjanganIstri);
  printf("Tunjangan Anak: %.2f\n", tunjanganAnak);
  printf("THR: %d\n", thr);
  printf("Pajak: %.2f\n", pajak);
  printf("Transport: %d\n", transport);
  printf("Asuransi: %d\n", asuransi);
  printf("Pendapatan: %d\n", pendapatan);

  return 0;
}

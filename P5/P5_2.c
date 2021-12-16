#include "stdio.h"

int main(int argc, char *argv[]) {
  int akademik, ketrampilan, psikologi;

  printf("Masukkan nilai test akademik: ");
  scanf("%d", &akademik);

  printf("Masukkan nilai test ketrampilan: ");
  scanf("%d", &ketrampilan);

  printf("Masukkan nilai test psikologi: ");
  scanf("%d", &psikologi);

  if (akademik >= 75 && ketrampilan >= 75 && psikologi >= 75) {

    if (akademik > ketrampilan && akademik > psikologi) {
      printf("Diterima, ditempatkan di bagian Administrasi");
    } else if (ketrampilan > akademik && ketrampilan > psikologi) {
      printf("Diterima, ditempatkan di bagian Produksi");
    } else {
      printf("Diterima, ditempatkan di bagian Pemasaran");
    }

  } else {
    printf("Nilai dibawah rata-rata");
  }

  return 0;
}

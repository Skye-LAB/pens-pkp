#include "stdio.h"

int validasiTgl(int tgl, int bln, int thn);

int main(int argc, char *argv[]) {
  int tgl, bln, thn, valid;

  printf("Masukkan tanggal: ");
  scanf("%d", &tgl);
  printf("Masukkan bulan: ");
  scanf("%d", &bln);
  printf("Masukkan tahun: ");
  scanf("%d", &thn);
  valid = validasiTgl(tgl, bln, thn);

  if (valid) {
    printf("Tanggal Valid");
  } else {
    printf("Tanggal Tidak Valid");
  }

  return 0;
}

int validasiThn(int thn) {
  if (thn % 400 == 0 || thn % 4 == 0) {
    return 1;
  }

  return 0;
}

int validasiTgl(int tgl, int bln, int thn) {
  int kabisat = validasiThn(thn);

  if (kabisat) {
    if (bln == 2) {
      if (tgl <= 29) {
        return 1;
      }
    }
  } else {
    if (bln == 2) {
      if (tgl <= 28) {
        return 1;
      }
    }
  }

  return 0;
}

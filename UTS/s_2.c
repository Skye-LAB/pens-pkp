#include "stdio.h"

int main(int argc, char *argv[]) {
  int tgl, bln;

  printf("Masukkan Bulan: ");
  scanf("%d", &bln);
  printf("Masukkan Tanggal: ");
  scanf("%d", &tgl);

  if (bln == 1) {
    if (tgl >= 1 && tgl <= 19) {
      printf("Bintang Anda adalah Capicorn");
    } else if (tgl >= 20 && tgl <= 31) {
      printf("bintang anda adalah aquarius");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 2) {
    if (tgl >= 1 && tgl <= 18) {
      printf("Bintang Anda adalah Aquarius");
    } else if (tgl >= 19 && tgl <= 28) {
      printf("Bintang Anda adalah Pisces");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 3) {
    if (tgl >= 1 && tgl <= 20) {
      printf("Bintang Anda adalah Pisces");
    } else if (tgl >= 21 && tgl <= 31) {
      printf("Bintang Anda adalah Aries");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 4) {
    if (tgl >= 1 && tgl <= 19) {
      printf("Bintang Anda adalah Aries");
    } else if (tgl >= 20 && tgl <= 30) {
      printf("Bintang Anda adalah Taurus");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 5) {
    if (tgl >= 1 && tgl <= 20) {
      printf("Bintang Anda adalah Taurus");
    } else if (tgl >= 21 && tgl <= 31) {
      printf("Bintang Anda adalah Gemini");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 6) {
    if (tgl >= 1 && tgl <= 20) {
      printf("Bintang Anda adalah Gemini");
    } else if (tgl >= 21 && tgl <= 30) {
      printf("Bintang Anda adalah Cancer");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 7) {
    if (tgl >= 1 && tgl <= 22) {
      printf("Bintang Anda adalah Cancer");
    } else if (tgl >= 23 && tgl <= 31) {
      printf("Bintang Anda adalah Leo");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 8) {
    if (tgl >= 1 && tgl <= 22) {
      printf("Bintang Anda adalah Leo");
    } else if (tgl >= 23 && tgl <= 31) {
      printf("Bintang Anda adalah Virgo");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 9) {
    if (tgl >= 1 && tgl <= 22) {
      printf("Bintang Anda adalah Virgo");
    } else if (tgl >= 23 && tgl <= 30) {
      printf("Bintang Anda adalah Libra");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 10) {
    if (tgl >= 1 && tgl <= 22) {
      printf("Bintang Anda adalah Libra");
    } else if (tgl >= 23 && tgl <= 31) {
      printf("Bintang Anda adalah Scorpio");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 11) {
    if (tgl >= 1 && tgl <= 21) {
      printf("Bintang Anda adalah Scorpio");
    } else if (tgl >= 22 && tgl <= 30) {
      printf("Bintang Anda adalah Sagittarius");
    } else {
      printf("Tanggal Invalid");
    }
  } else if (bln == 12) {
    if (tgl >= 1 && tgl <= 21) {
      printf("Bintang Anda adalah Sagittarius");
    } else if (tgl >= 22 && tgl <= 31) {
      printf("Bintang Anda adalah Capicorn");
    } else {
      printf("Tanggal Invalid");
    }
  } else {
    printf("Bulan Invalid");
  }

  return 0;
}

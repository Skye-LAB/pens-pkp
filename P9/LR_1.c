#include <stdio.h>

int main(int argc, char *argv[]) {
  char kar;
  int karak = 0, spaci = 0, besar = 0, kecil = 0, angka = 0;

  printf("Masukkan kalimat acak: ");
  while ((kar = getchar()) != '\n') {
    karak++;
    if (kar == ' ') {
      spaci++;
    } else if (kar >= 65 && kar <= 90) {
      besar++;
    } else if (kar >= 97 && kar <= 122) {
      kecil++;
    } else if (kar >= 48 && kar <= 57) {
      angka++;
    }
  }

  printf("Jumlah spasi: %d\n", spaci);
  printf("Jumlah angka: %d\n", angka);
  printf("Jumlah karakter: %d\n", karak);
  printf("Jumlah huruf besar: %d\n", besar);
  printf("Jumlah huruf kecil: %d\n", kecil);

  return 0;
}

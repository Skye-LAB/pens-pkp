#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  char nama;
  float ipk;
  long int nrp;

  printf("Berapa kali? ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    fflush(stdin);
    printf("\nData mahasiswa ke-%d\n", i);
    printf("Masukkan nama: ");
    scanf(" %c", &nama);
    printf("Masukkan NRP: ");
    scanf("%ld", &nrp);
    printf("Masukkan IPK: ");
    scanf("%f", &ipk);

    printf("Nama: %c\n", nama);
    printf("NRP: %ld\n", nrp);
    printf("IPK: %.2f\n", ipk);

    if (ipk >= 3) {
      printf("Keterangan: Memuaskan");
    } else if (ipk >= 2.5 && ipk < 3) {
      printf("Keterangan: Cukup");
    } else if (ipk < 2.5) {
      printf("Keterangan: Memprihatinkan");
    } else {
      printf("Error: IPK harus diantara 1-4");
    }

    printf("\n\n");
  }
  return 0;
}

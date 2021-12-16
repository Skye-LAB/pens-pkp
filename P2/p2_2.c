#include "stdio.h"

int main (int argc, char *argv[])
{
  
  int uang, ratusanRibu, limaPuluhRibu,
    duaPuluhRibu, sepuluhRibu, limaRibu, duaRibu, ribuan, sisa;

  printf("Masukkan jumlah uang: ");
  scanf("%i", &uang);

  ratusanRibu = uang / 100000; 

  uang %= 100000;

  limaPuluhRibu = uang / 50000;

  uang %= 50000;

  duaPuluhRibu = uang / 20000;

  uang %= 20000;

  sepuluhRibu = uang / 10000;

  uang %= 10000;

  limaRibu = uang / 5000;

  uang %= 5000;

  duaRibu = uang / 2000;

  uang %= 2000;

  ribuan = uang / 1000;


  printf("Ratusan Ribu: %d\n", ratusanRibu);
  printf("Lima Puluhan Ribu: %d\n", limaPuluhRibu);
  printf("Dua Puluh Ribu: %d\n", duaPuluhRibu);
  printf("Sepuluh Ribu: %d\n", sepuluhRibu);
  printf("Lima Ribu: %d\n", limaRibu);
  printf("Dua Ribu: %d\n", duaRibu);
  printf("Ribuan: %d\n", ribuan);

  return 0;
}

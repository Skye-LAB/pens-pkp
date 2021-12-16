#include "stdio.h"

int main (int argc, char *argv[])
{
  
  float idr, usd, hsl;

  printf("Masukkan jumlah Dollar yang ingin dikonversikan: ");
  scanf("%f", &usd);

  printf("Masukkan nilai Dollar hari ini: ");
  scanf("%f", &idr);

  hsl = usd * idr;

  printf("Konversi %.2f USD ke IDR: %.2f", usd, hsl);

  return 0;
}

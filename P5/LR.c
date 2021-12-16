#include "stdio.h"

int main (int argc, char *argv[])
{
  int hari;

  printf("Masukkan hari dalam nomor(1-7): ");
  scanf("%d", &hari);

  if (hari == 1) {
    printf("Minggu");
  } else if (hari == 2) {
    printf("Senin");
  } else if (hari == 3) {
    printf("Selasa");
  } else if (hari == 4) {
    printf("Rabu");
  } else if (hari == 5) {
    printf("Kamis");
  } else if (hari == 6) {
    printf("Jumat");
  } else if (hari == 7) {
    printf("Sabtu");
  } else {
    printf("Hari tidak Valid");
  }
  
  return 0;
}

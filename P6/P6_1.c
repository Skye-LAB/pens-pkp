#include "stdio.h"

int main (int argc, char *argv[])
{
  int hari;
  
  printf("Masukkan hari dalam nomor(1-7): ");
  scanf("%d", &hari);

  switch (hari) {
    case 1:
      printf("Minggu");
      break;
    case 2:
      printf("Senin");
      break;
    case 3:
      printf("selasa");
      break;
    case 4:
      printf("Rabu");
      break;
    case 5:
      printf("Kamis");
      break;
    case 6:
      printf("Jumat");
      break;
    case 7:
      printf("Sabtu");
      break;
    default:
      printf("Hari tidak valid");
      break;
  }
  
  return 0;
}

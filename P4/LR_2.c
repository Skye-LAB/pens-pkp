#include "stdio.h"

int main (int argc, char *argv[])
{
  int bil;


  printf("Masukkan nilai bil: ");
  scanf("%d", &bil);

  if (bil > 0) {
    printf("Kategori A");
  } else {
    printf("Kategori B");
  }
  
  return 0;
}

#include "stdio.h"

int main (int argc, char *argv[])
{
  int cel;


  printf("Masukkan suhu(Celcius): ");
  scanf("%d", &cel);

  printf("%d Celcius sama dengan %.2f Fahrenheit", cel, cel * 1.8 + 32);
  
  return 0;
}

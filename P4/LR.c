#include "stdio.h"

int main (int argc, char *argv[])
{
  int a;

  printf("Masukkan nilai: ");
  scanf("%d", &a);

  if (a < 0) {
    printf("Nilai absolut dari %d adalah %d", a, a * -1);
  } else {
    printf("Nilai absolut dari %d adalah %d", a, a);
  }
  
  return 0;
}

#include "stdio.h"

int main (int argc, char *argv[])
{
  int a, b;

  printf("Masukkan nilai bilangan pertama: ");
  scanf("%d", &a);

  printf("Masukkan nilai bilangan kedua: ");
  scanf("%d", &b);
  
  if (a / b == 0) {
    printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua");
  } else {
    printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua");
  }

  return 0;
}

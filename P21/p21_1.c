#include "stdio.h"

int main(int argc, char *argv[]) {
  char nama[5];

  printf("Masukkan kalimat: ");
  // fgets(nama, sizeof nama, stdin);
  // gets(nama);
  scanf("%s", nama);

  printf("%s", nama);

  return 0;
}

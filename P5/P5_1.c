#include "stdio.h"

int main(int argc, char *argv[]) {
  int suhu;

  printf("Masukkan suhu: ");
  scanf("%d", &suhu);

  if (suhu > 0) {
    if (suhu > 100) {
      printf("Benda berbentuk gas");
    } else {
      printf("Benda berbentuk cair");
    }
  } else {
    printf("Benda berbentuk padat");
  }
  return 0;
}

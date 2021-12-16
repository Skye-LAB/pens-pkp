#include "stdio.h"

int main(int argc, char *argv[]) {
  int nilai;

  printf("Masukkan nilai: ");
  scanf("%d", &nilai);

  if (nilai <= 40) {
    printf("Nilai huruf adalah F");
  } else if (nilai > 40 && nilai <= 55) {
    printf("Nilai huruf adalah D");
  } else if (nilai > 55 && nilai <= 60) {
    printf("Nilai huruf adalah C");
  } else if (nilai > 60 && nilai <= 80) {
    printf("Nilai huruf adalah B");
  } else if (nilai > 80 && nilai <= 100) {
    printf("Nilai huruf adalah A");
  } else {
    printf("Error: Nilai should be in the range of 1-100");
  }

  return 0;
}

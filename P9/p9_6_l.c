#include <stdio.h>

int main(int argc, char *argv[]) {
  int bil, count = 0, tens = 1;

  printf("Masukkan bilangan: ");
  scanf("%d", &bil);

  int tmp = bil;

  do {
    bil /= 10;
    count++;
  } while (bil != 0);

  for (int i = 1; i < count; i++) {
    tens *= 10;
  }

  int total = 0, sisa = 0;
  for (int i = 1; i <= count; i++) {
    total = total + (tmp / tens);
    tmp %= tens;
    tens /= 10;
    if (tens == 0) {
      tens = 1;
    }
  }

  printf("\nTotal: %d", total);

  return 0;
}

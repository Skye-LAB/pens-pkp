#include <stdio.h>

int main(int argc, char *argv[]) {
  int counter = 1, total = 0, max = 0, min = 0, a;
  char ans;

  do {
    printf("Masukkan bilangan ke-%d: ", counter);
    scanf(" %d", &a);
    if (counter == 1) {
      min = a;
    }
    total += a;
    if (a > max) {
      max = a;
    }
    if (a < min) {
      min = a;
    }
    printf("Mau memasukkan data lagi [y/t] ?");
    scanf(" %c", &ans);
    counter++;
  } while (ans == 'y' || ans == 'Y');

  printf("Total: %d\n", total);
  printf("Maximum: %d\n", max);
  printf("Minimum: %d\n", min);
  printf("Rata-rata: %.2f\n", (float)total / counter);
  return 0;
}

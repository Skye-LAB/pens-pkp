#include <stdio.h>

int main(int argc, char *argv[]) {
  int counter = 1, total = 0, a;
  char ans;

  do {
    printf("Masukkan bilangan ke-%d: ", counter);
    scanf(" %d", &a);
    total += a;
    printf("Mau memasukkan data lagi [y/t] ?");
    scanf(" %c", &ans);
    counter++;
  } while (ans == 'y' || ans == 'Y');

  printf("Total: %d", total);
  return 0;
}

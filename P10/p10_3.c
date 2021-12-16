#include "stdio.h"

int main(int argc, char *argv[]) {
  char kar;

  /* NOTE: do..while untuk nomor 7 */
  do {
    int n, i = 0;
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    while (i < n) {
      i++;
      if (i == 100) {
        break;
      }
      if (i % 7 == 0 || i % 11 == 0) {
        continue;
      }
      if (i % 2 != 0) {
        printf("%d\n", i);
      }
    }
    printf("Apakah anda ingin keluar?(y/t): ");
    scanf(" %c", &kar);
  } while (kar == 't');

  return 0;
}

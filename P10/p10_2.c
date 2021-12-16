#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;
  char kar;

  /* NOTE: do..while untuk nomor 7 */
  do {
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0) {
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

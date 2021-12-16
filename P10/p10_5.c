#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;
  char kar;

  /* NOTE: do..while untuk nomor 7 */
  do {
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        printf("%d", j);
      }
      printf("\n");
    }
    printf("Apakah anda ingin keluar?(y/t): ");
    scanf(" %c", &kar);
  } while (kar == 't');

  return 0;
}

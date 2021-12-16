#include <stdio.h>

int main(int argc, char *argv[]) {
  char a;
  printf("Masukkan kalimat: ");
  scanf("%c", &a);
  while (a != 'X') {
    a = getchar();
    printf("%c", a);
  }

  return 0;
}

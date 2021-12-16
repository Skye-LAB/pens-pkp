#include <stdio.h>

int main(int argc, char *argv[]) {
  char kar;
  int a = 0, b = 0;

  printf("Masukkan kalimat acak: ");
  while ((kar = getchar()) != '\n') {
    a++;
    if (kar == ' ') {
      b++;
    }
  }

  printf("Jumlah karakter: %d\n", a);
  printf("Jumlah spasi: %d", b);

  return 0;
}

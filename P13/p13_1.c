#include <stdio.h>

void menu();

int main(int argc, char const *argv[]) {
  int n;

  printf("Berapa kali: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    menu();
  }

  return 0;
}

void menu() { printf("Pilihan Menu\n"); }

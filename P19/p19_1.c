#include "stdio.h"

void findMax(int n[]);
void input();

int n;

int main(int argc, char *argv[]) {
  int max;

  input();

  return 0;
}

void input() {

  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Value index ke-%d: ", i);
    scanf("%d", &arr[i]);
  }

  findMax(arr);
}

void findMax(int arr[]) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Bilangan terbesar: %d", max);
}

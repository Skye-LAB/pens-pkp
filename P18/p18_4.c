#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Value index ke-%d: ", i);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Bilangan terbesar: %d", max);

  return 0;
}

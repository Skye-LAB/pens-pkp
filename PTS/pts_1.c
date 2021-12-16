#include "stdio.h"

#define MAKS 10

int main(int argc, char *argv[]) {
  int arr[MAKS] = {1, 2, 3, 4, 5};
  int n, val, tmp;

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nIndeks keberapa: ");
  scanf("%d", &n);

  printf("Nilai: ");
  scanf("%d", &val);

  for (int i = 0; i < 6; i++) {
    if (i >= n) {
      if (i == n) {
        tmp = arr[i + 1];
        arr[i + 1] = arr[i];

        arr[i] = val;
      }

      if (i > n) {
        arr[i + 1] = tmp;
        tmp = arr[i + 2];
      }
    }
  }

  for (int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

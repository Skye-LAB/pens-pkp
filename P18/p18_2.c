#include "stdio.h"

int main(int argc, char *argv[]) {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      arr[i] = 0;
    } else if (i == 1) {
      arr[i] = 1;
    } else {
      arr[i] = arr[i - 1] + arr[i - 2];
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

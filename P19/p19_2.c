#include "stdio.h"

int main(int argc, char *argv[]) {
  int nilai[4][3] = {{81, 90, 62}, {50, 83, 87}, {89, 55, 65}, {77, 70, 92}};

  printf("No\tBHS\tMTK\tDGL\n");
  for (int i = 0; i < 4; i++) {
    printf("%d\t", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("%d\t", nilai[i][j]);
    }
    printf("\n");
  }

  printf("No\tRata-rata\n");
  for (int i = 0; i < 4; i++) {
    float tot = 0;
    for (int j = 0; j < 3; j++) {
      tot += nilai[i][j];
      if (j == 2) {
        printf("%d\t%.2f\n", i + 1, tot / 3);
      }
    }
  }

  return 0;
}

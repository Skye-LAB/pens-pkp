#include <stdio.h>
#include <stdlib.h>

#define macro

int main() {
  int idx_max = 5;
  int nilai[5] = {1, 2, 3, 4, 5};
  int sisip, tempat, edit_max;

  for (int i = 0; i < idx_max; i++) {
    printf("Nilai[%d] = %d \n", i, nilai[i]);
  }

  printf("\n");

  printf("Pada index ke berapa : ");
  scanf("%d", &tempat);
  printf("nilai yang akan dimasukan: ");
  scanf("%d", &sisip);
  edit_max = idx_max + 1;

  while (idx_max >= tempat) {
    nilai[idx_max + 1] = nilai[idx_max];
    idx_max = idx_max - 1;
  }
  nilai[tempat] = sisip;
  printf(" array yang baru :\n");
  for (int i = 0; i < edit_max; i++) {
    printf("Nilai[%d] = %d \n", i, nilai[i]);
  }
}

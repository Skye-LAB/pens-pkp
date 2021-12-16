#include "stdio.h"

int main(int argc, char *argv[]) {
  int array1[10], array2[10];
  int *ip1, *ip2 = array2;
  int *akhir = &array1[10];

  for (ip1 = &array1[0]; ip1 < akhir; ip1++) {
    *ip2++ = *ip1;
  }

    printf("%d", *ip2);
    printf("%d", array2[0]);
  return 0;
}

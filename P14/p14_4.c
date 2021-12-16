#include "stdio.h"


float radian(float);

int main(int argc, char *argv[]) {
  float n;

  printf("Masukkan derajat: ");
  scanf("%f", &n);
  printf("Radian: %f", radian(n));

  return 0;
}

float radian(float degree) {
  float pi = 3.14159f;
  return degree / 180.0f * pi;
}

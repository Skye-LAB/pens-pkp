#include "stdio.h"

struct dataMhs {
  char nama[255];
  float fisika, mtk, kimia, biologi, rata;
};

void hasil(struct dataMhs mahasiswa[]);

int n;

int main(int argc, char *argv[]) {

  printf("Banyak Mahasiswa: ");
  scanf("%d", &n);

  struct dataMhs mahasiswa[n];

  for (int i = 0; i < n; i++) {
    printf("\nMahasiswa ke-%d\n", i + 1);
    printf("Nama: ");
    scanf(" %s", mahasiswa[i].nama);
    printf("Nilai Fisika: ");
    scanf(" %f", &mahasiswa[i].fisika);
    printf("Nilai MTK: ");
    scanf(" %f", &mahasiswa[i].mtk);
    printf("Nilai kimia: ");
    scanf(" %f", &mahasiswa[i].kimia);
    printf("Nilai Biologi: ");
    scanf(" %f", &mahasiswa[i].biologi);
  }

  hasil(mahasiswa);

  return 0;
}

void hasil(struct dataMhs mahasiswa[n]) {
  int j;
  printf("No.\tMahasiswa\tFisika\tMTK\tKimia\tBiologi\tRata - Rata\n");
  printf("---------------------------------------------------------------------"
         "----\n");
  for (j = 0; j < n; j++) {
    mahasiswa[j].rata = (mahasiswa[j].fisika + mahasiswa[j].mtk +
                         mahasiswa[j].kimia + mahasiswa[j].biologi) /
                        4;
    printf("%d\t%s\t\t%g\t%g\t%g\t%g\t%g\n", j + 1, mahasiswa[j].nama,
           mahasiswa[j].fisika, mahasiswa[j].mtk, mahasiswa[j].kimia,
           mahasiswa[j].biologi, mahasiswa[j].rata);
  }
  printf("---------------------------------------------------------------------"
         "----\n\n");
}

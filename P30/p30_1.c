#include "stdio.h"


struct dataMhs {
  char nama[255], grade;
  float tugas, uts, uas, akhir;
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
    printf("Nilai tugas: ");
    scanf(" %f", &mahasiswa[i].tugas);
    printf("Nilai uts: ");
    scanf(" %f", &mahasiswa[i].uts);
    printf("Nilai uas: ");
    scanf(" %f", &mahasiswa[i].uas);
  }

  hasil(mahasiswa);

  return 0;
}

void hasil(struct dataMhs mahasiswa[n]) {
  int j;
  printf("\t\t\tDAFTAR NILAI\n");
  printf("\t\tMATAKULIAH KONSEP PEMROGRAMAN\n");
  printf("---------------------------------------------------------------------"
         "----\n");
  printf("No\tNama\t\t\t\tNilai\t\t\tGrade\n");
  printf("\tMahasiswa\t\tTugas\tUTS\tUAS\tAkhir\n");
  printf("---------------------------------------------------------------------"
         "----\n");
  for (j = 0; j < n; j++) {
    mahasiswa[j].akhir = (mahasiswa[j].tugas * 0.2) + (mahasiswa[j].uts * 0.4) +
                         (mahasiswa[j].uas * 0.4);
    if (mahasiswa[j].akhir >= 80)
      mahasiswa[j].grade = 'A';
    else if (mahasiswa[j].akhir >= 70)
      mahasiswa[j].grade = 'B';
    else if (mahasiswa[j].akhir >= 60)
      mahasiswa[j].grade = 'C';
    else if (mahasiswa[j].akhir >= 50)
      mahasiswa[j].grade = 'D';
    else if (mahasiswa[j].akhir < 50)
      mahasiswa[j].grade = 'E';
    printf("%d\t%s\t\t\t%g\t%g\t%g\t%g\t%c\n", j + 1, mahasiswa[j].nama,
           mahasiswa[j].tugas, mahasiswa[j].uts, mahasiswa[j].uas,
           mahasiswa[j].akhir, mahasiswa[j].grade);
  }
  printf("---------------------------------------------------------------------"
         "----\n\n");
  printf("Total Mahasiswa = %d", n);
}

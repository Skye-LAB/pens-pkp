#include "stdio.h"

struct date {
  int tgl, bln, thn;
} today, tomorrow;

void getDate();
void checkDate();
int jumhari(int bln, int thn);

int main(int argc, char *argv[]) {

  getDate();

  if (today.tgl >= jumhari(today.bln, today.thn)) {
    if (today.bln == 12) {
      tomorrow.tgl = 1;
      tomorrow.bln = 1;
      tomorrow.thn = today.thn + 1;
    } else {
      tomorrow.tgl = 1;
      tomorrow.bln = today.bln + 1;
      tomorrow.thn = today.thn;
    }
  } else {
    tomorrow.tgl = today.tgl + 1;
    tomorrow.bln = today.bln;
    tomorrow.thn = today.thn;
  }
  printf("\nMaka tanggal besok: %d-%d-%d", tomorrow.tgl, tomorrow.bln,
         tomorrow.thn);

  return 0;
}

void getDate() {
  printf("Masukkan tanggal hari ini!\n");
  printf("Hari: ");
  scanf("%d", &today.tgl);
  printf("Bulan: ");
  scanf("%d", &today.bln);
  printf("Tahun: ");
  scanf("%d", &today.thn);

  checkDate();
}

void checkDate() {
  if (today.tgl < 1 || today.tgl > 31 || today.bln < 1 || today.bln > 12) {
    printf("Tanggal tidak valid\n");
    getDate();
  } else if (today.bln == 2 && today.thn % 4 != 0) {
    if (today.thn % 100 == 0 || today.thn % 400 != 0) {
      if (today.tgl > 28) {
        printf("Tanggal tidak valid\n");
        getDate();
      }
    }
  }
}

int jumhari(int bln, int thn) {
  int hari[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int jmlhari = hari[bln];
  if (bln == 2 && thn % 4 == 0) {
    if (thn % 100 != 0 || thn % 400 == 0)
      jmlhari = 29;
  }
  return jmlhari;
}

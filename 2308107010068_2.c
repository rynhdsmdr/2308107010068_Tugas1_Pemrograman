#include <stdio.h>

int main() {
  int year;

  while (1) {
    printf("Masukkan tahun : ");
    if (scanf("%d", &year) != 1) {
      while (getchar() != '\n');
      printf("Tahun tidak valid. Masukkan tahun dalam format angka.\n");
    } else if (year < 1000 || year > 9999) {
      printf("Tahun harus sebanyak 4 angka.\n");
    } else {
      break;
    }
  }

  if (year % 400 == 0) {
    printf("%d adalah tahun kabisat.\n", year);
  } else if (year % 100 == 0) {
    printf("%d bukan tahun kabisat.\n", year);
  } else if (year % 4 == 0) {
    printf("%d adalah tahun kabisat.\n", year);
  } else {
    printf("%d bukan tahun kabisat.\n", year);
  }

  return 0;
}

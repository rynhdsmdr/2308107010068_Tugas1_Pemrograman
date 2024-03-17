#include <stdio.h>

int main() {
  int pilihan, bilangan, hasil, sisa, i;
     
  do {
    printf("1. Desimal to Biner\n");
    printf("2. Biner to Desimal\n");
    printf("3. Desimal to Oktal\n");
    printf("4. Oktal to Desimal\n");
    printf("\n");
    printf("Operasi yang dipilih : ");
    scanf("%d", &pilihan);

    if (pilihan < 1 || pilihan > 4) 
      printf("pilihan tidak valid. Pilihlah pilihan 1 sampai 4.\n");
    
  } while (pilihan < 1 || pilihan > 4);

  switch (pilihan) {
    case 1:
      printf("\nMasukkan bilangan desimal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 2;
        hasil = hasil + sisa * i;
        i *= 10;
        bilangan /= 2;
      }
      printf("Bilangan Biner: %d\n", hasil);
      break;
    case 2:
      printf("\nMasukkan bilangan Biner: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 10;
        hasil = hasil + sisa * i;
        i *= 2;
        bilangan /= 10;
      }
      printf("Bilangan Desimal: %d\n", hasil);
      break;
    case 3:
      printf("\nMasukkan bilngan Desimal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 8;
        hasil = hasil + sisa * i;
        i *= 10;
        bilangan /= 8;
      }
      printf("Bilangan oktal: %d\n", hasil);
      break;
    case 4:
      printf("\nMasukkan bilangan Oktal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 10;
        hasil = hasil + sisa * i;
        i *= 8;
        bilangan /= 10;
      }
      printf("Angka Desimal: %d\n", hasil);
      break;
  }

  return 0;
}

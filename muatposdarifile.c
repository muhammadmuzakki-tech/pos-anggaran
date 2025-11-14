#include <stdio.h>
#include <string.h>
#include "posanggaran.h"

int muatPosDariFile(PosAnggaran daftar[], int *jumlah, const char *filename) {
    FILE *file = fopen("posanggaran.txt", "r");
    if (file == NULL) {
        printf("File tidak ditemukan.\n");
        return 0;
    }

    *jumlah = 0;
    while (fscanf(file, "%49[^|]|%lf\n", daftar[*jumlah].nama, &daftar[*jumlah].batas) == 2) {
        (*jumlah)++;
     
      printf("Jumlah data dimuat: %d\n", *jumlah);



    }

    fclose(file);
    return 1;
}

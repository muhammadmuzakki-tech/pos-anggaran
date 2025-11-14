#include <stdio.h>
#include <string.h>
#include "posanggaran.h"

// Fungsi untuk menyimpan ke file eksternal
void simpanPosKeFile(PosAnggaran daftar[], int jumlah, const char *filename ) {
    FILE *file = fopen("posanggaran.txt", "a");

    if (file == NULL) {
        printf("Error: Tidak bisa membuka file %s\n");
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        fprintf(file, "%s|%.2f\n", daftar[i].nama, daftar[i].batas);
    }

    fclose(file);
    printf("Data pos anggaran berhasil disimpan\n");
}

#include <stdio.h>
#include "posanggaran.h"

//Untuk menampilkan isi array ke layar
void tampilkanPos(PosAnggaran daftar[], int jumlah) {
    printf("\n--- DAFTAR POS ANGGARAN ---\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%d. %s - Rp %.4f\n", i + 1, daftar[i].nama, daftar[i].batas);
    }
}
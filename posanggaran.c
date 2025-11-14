#include <stdio.h>
#include <string.h>
#include "posanggaran.h"

// Fungsi untuk menambah pos anggaran baru
int tambahPos(PosAnggaran daftar[], int *jumlah, const char *nama, double batas) {
    


    


    // Validasi batas nominal
    if (batas <= 0) {
        printf("Error: Batas nominal harus > 0.\n");
        return 0; 
    }

    // Validasi nama tidak boleh sama
    for (int i = 0; i < *jumlah; i++) {
        if (strcmp(daftar[i].nama, nama) == 0) {
            printf("Error: Nama pos anggaran sudah ada.\n");
            return 0; 
        }
    }

    // Tambahkan ke array
    strcpy(daftar[*jumlah].nama, nama);
    daftar[*jumlah].batas = batas;
    (*jumlah)++;

    printf("Pos anggaran '%s' berhasil ditambahkan dengan batas Rp %.2f\n", nama, batas);
    return 1; // sukses
}


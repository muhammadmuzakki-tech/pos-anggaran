#ifndef POSANGGARAN_H
#define POSANGGARAN_H

#define MAX_POS 100

typedef struct {
    char nama[50];
    double batas;
} PosAnggaran;

// Deklarasi fungsi
int tambahPos(PosAnggaran daftar[], int *jumlah, const char *nama, double batas);
void simpanPosKeFile(PosAnggaran daftar[], int jumlah, const char *filename);
void tampilkanPos(PosAnggaran daftar[], int jumlah);
int muatPosDariFile(PosAnggaran daftar[], int *jumlah, const char *filename);


#endif

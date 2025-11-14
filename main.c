#include <stdio.h>
#include <string.h>
#include "posanggaran.h"

int main() {
    PosAnggaran daftar[MAX_POS];
    int jumlah = 0;
    int pilihan;
    char nama[50];
    double batas;

    do {
        printf("\n--- MENU POS ANGGARAN ---\n");
        printf("1. Tambah Pos Anggaran\n");
        printf("2. Lihat Semua Pos\n");
        printf("3. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);
        getchar(); // buang newline

        if (pilihan == 1) {
            printf("Nama Pos: ");
            fgets(nama, sizeof(nama), stdin);
            nama[strcspn(nama, "\n")] = 0; // hapus newline

            printf("Batas Nominal (Rp): ");
            scanf("%lf", &batas);
            getchar();

            tambahPos(daftar, &jumlah, nama, batas);
            simpanPosKeFile(daftar, jumlah, "posanggaran.txt");

        } else if (pilihan == 2) {
            if( muatPosDariFile(daftar, &jumlah, "posanggaran.txt")){
                tampilkanPos(daftar,  jumlah);
            }else{
                printf("Gagal memuat data dari file.\n");
            }
        }
    } while (pilihan != 3);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {

    char hari[10];
    char nama[20];
    int umur;
    

    printf("=== Program Penjualan Tiket Wahana ===\n");

    printf("Masukkan nama Anda : ");
    scanf("%s", &nama);
    
    printf("Masukkan umur pembeli : ");
    scanf("%d", &umur);

    printf("Masukkan hari pembelian (contoh: Senin, Selasa, Jumat): ");
    scanf("%s", hari);

    
    if ((umur >= 12 && umur <= 21) && 
        (strcmp(hari, "selasa") == 0 || strcmp(hari, "jumat") == 0)) {
        printf("Selamat! Anda mendapatkan diskon tiket.\n");
    } else {
        printf("Maaf, Anda tidak mendapatkan diskon.\n");
    }

    return 0;

    //KUIZ 3- 4 SOAL WAKTU 2 JAM
}

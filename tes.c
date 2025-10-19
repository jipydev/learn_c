#include <stdio.h>
#include <string.h>

int main() {
    int umur;
    char hari[10];

    printf("=== Program Penjualan Tiket Wahana ===\n");
    printf("Masukkan umur pembeli : ");
    scanf("%d", &umur);

    printf("Masukkan hari pembelian (contoh: Senin, Selasa, Jumat): ");
    scanf("%s", hari);

    // Logika pemberian diskon
    if ((umur >= 12 && umur <= 21) && 
        (strcmp(hari, "selasa") == 0 || strcmp(hari, "jumat") == 0)) {
        printf("Selamat! Anda mendapatkan diskon tiket.\n");
    } else {
        printf("Maaf, Anda tidak mendapatkan diskon.\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int jumlahBarang;
    float harga, totalHarga = 0;

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Loop untuk setiap item
    for (int i = 1; i <= jumlahBarang; i++) {
        printf("\nBarang ke-%d\n", i);

        // Validasi agar harga harus lebih dari 0
        while (1) {
            printf("Masukkan harga item ke-%d: ", i);
            scanf("%f", &harga);

            if (harga > 0) {
                totalHarga += harga; // hanya dijumlahkan jika harga valid
                break; // keluar dari while jika harga valid
            } else {
                printf("Harga tidak valid! Harus diisi dengan nilai lebih dari 0!\n");
            }
        }
    }

    printf("\n====================================\n");
    printf("Total harga semua barang: %.2f\n", totalHarga);
    printf("====================================\n");

    return 0;
}
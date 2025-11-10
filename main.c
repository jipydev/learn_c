#include <stdio.h>

int main() {
    int N;

    // Input dari pengguna
    printf("Masukkan durasi jam misi: ");
    scanf("%d", &N);

    // Validasi input
    if (N == 0) {
        printf("Input salah\n");
        return 0;
    }

    int total = 0;

    printf("\n=== Detail Misi Goa Mebius ===\n");

    for (int jam = 1; jam <= N; jam++) {
        int perJam = 15 + 9 + 6; // Tanjiro + Zenitsu + Inosuke = 30
        printf("Jam ke-%d: ", jam);

        // Aura Kebijaksanaan (jam 6 & 12)
        if (jam == 6 || jam == 12) {
            perJam += 20;
            printf("Aura Kebijaksanaan → Tanjiro mendapat bonus +20 kristal.\n");
        }
        // Aura Kemarahan (ganjil & kelipatan 3)
        else if (jam % 2 == 1 && jam % 3 == 0) {
            perJam += 10;
            printf("Aura Kemarahan → Zenitsu kehilangan bonus, Inosuke mendapat +10 kristal.\n");
        }
        // Aura Puncak (jam ganjil biasa)
        else if (jam % 2 == 1) {
            perJam += 5;
            printf("Aura Puncak → Zenitsu merasakan aura kuat dan mendapat +5 kristal.\n");
        }
        // Jam genap biasa (tidak ada aura khusus)
        else {
            printf("Tidak ada aura khusus, tim bekerja normal.\n");
        }

        total += perJam;
    }

    // Output total
    printf("\nTotal Kristal Mebius yang dikumpulkan: %d\n", total);

    return 0;

    
}
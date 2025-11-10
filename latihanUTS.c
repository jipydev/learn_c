// #include <stdio.h>

// int main() {

    // 1. MENGHITUNG GAJI BERSIH, TUNJANGAN, PAJAK

    // char nama [100];
    // int gajiPokok, gajiBersih, gajiKotor;
    // float tunjangan, pajak;
    // printf("Masukan nama anda!");
    // scanf("%s", &nama);
    // printf("Masukan nominal gaji anda!");
    // scanf("%d", &gajiPokok);
    // gajiKotor = tunjangan + gajiPokok;
    // tunjangan = 0.2 * gajiPokok;
    // pajak = 0.15 * gajiKotor;
    // gajiBersih = gajiBersih - pajak;
    // printf("Gaji Bersih %s adalah %d per bulan", nama, gajiBersih);
    // return 0;

    // 2. DISKON 

    // float orignalPrice, percengace, finalPrice;
    // printf("What is the price?");
    // scanf("%f", &orignalPrice);
    // printf("Input the percentage of discound!");
    // scanf("%f", &percengace);
    // finalPrice = orignalPrice - (orignalPrice * percengace/100);
    // printf("The final price of your product is %2.f", finalPrice);
    // return 0;


    // 3. NGITUNG KWH

    // int kwh, totalBiaya;
    // const int hargaKwh = 1500;
    // const int biayaAdm = 20000;

    // printf("Berapa biaya kwh penggunaan listrik Anda?");
    // scanf("%d", &kwh);
    // totalBiaya = kwh * hargaKwh + biayaAdm;
    // printf("Tagihan listrk anda untuk %d adalah Rp %d", totalBiaya);
    // return 0;

    // 4. Ngitung tabungan

    // float tabunganMingguan, jumlahMinggu;
    // const int hargaSepeda = 1500000;

    // printf("Berapa tabungan anda perminggu?");
    // scanf("%f", &tabunganMingguan);
    // jumlahMinggu = hargaSepeda / tabunganMingguan;
    // printf ("jumlah minggu yang diperlukan adalah %.0f jika tabungan anda %.0f", jumlahMinggu, tabunganMingguan);

    // return 0;

    //5. Ngitung uang sisa

    // const int totalHadiah = 5000000;
    // int jumlahPemenang;
    // float uangDiterima, uangSisa;

    // printf("Berapakah jumlah orang pada tim Anda?");
    // scanf("%d", &jumlahPemenang);
    // uangSisa = totalHadiah % jumlahPemenang;
    // uangDiterima = (totalHadiah - uangSisa) / jumlahPemenang;
    // printf("Jika jumlah pemenang %d, maka setiap orang mendapatkan Rp %.3f dengan sisa Rp %.0f", jumlahPemenang, uangDiterima, uangSisa);

    // return 0;

    // 6. Ngitung sisa proyek

    // int hari, bulan, sisaHari, tahun;
    // printf ("Masukan sisa hari pengerjaan proyek: ");
    // scanf("%d", &hari);
    // tahun = hari / 365;
    // sisaHari = hari % 365;
    // bulan = sisaHari / 30;
    // hari = sisaHari % 30;

    // printf ("Proyek dikerjakan selama %d tahun, %d bulan, %d hari", tahun, bulan, hari);

    // return 0;


//   int main() {
//     float durasiPertarungan;
//     int shinraTensei;

//     printf("Masukkan durasi pertarungan (menit): ");
//     scanf("%f", &durasiPertarungan);

//     shinraTensei = (int)((durasiPertarungan * 60) / 5);

//     printf("Shinra Tensei sebanyak %d kali.\n", shinraTensei);

//     return 0;
// }

// }

// SOAL UTS 2025
// 1
// #include <stdio.h>

// int main() {
//     int uang;

//     // Input dari pengguna
//     printf("Masukkan jumlah uang Naruto (Ryo): ");
//     scanf("%d", &uang);

//     // Harga dasar dan promo
//     int hargaSatu = 180;
//     int hargaPaket = 2 * hargaSatu; // beli 2 kunai
//     int totalKunai = 0;
//     int sisaUang = uang;

//     // Jika uang cukup untuk minimal 2 kunai (1 paket)
//     if (uang >= hargaPaket) {
//         // Hitung berapa paket promo yang bisa dibeli
//         int paket = uang / hargaPaket;
//         totalKunai = paket * 3;  // setiap paket dapat 3 kunai (2 beli + 1 gratis)
//         sisaUang = uang % hargaPaket;
//     } 
//     else {
//         // Uang kurang dari harga 2 kunai, tidak bisa beli
//         totalKunai = 0;
//         sisaUang = uang;
//     }

//     // Output hasil
//     printf("Total Kunai: %d\n", totalKunai);
//     printf("Sisa Uang: %d\n", sisaUang);

//     return 0;
// }

// 2
// #include <stdio.h>

// int main() {
//     int N;

//     // Input dari pengguna
//     printf("Masukkan durasi jam misi: ");
//     scanf("%d", &N);

//     // Validasi input
//     if (N == 0) {
//         printf("Input salah\n");
//         return 0;
//     }

//     int total = 0;

//     printf("\n=== Detail Misi Goa Mebius ===\n");

//     for (int jam = 1; jam <= N; jam++) {
//         int perJam = 15 + 9 + 6; // Tanjiro + Zenitsu + Inosuke = 30
//         printf("Jam ke-%d: ", jam);

//         // Aura Kebijaksanaan (jam 6 & 12)
//         if (jam == 6 || jam == 12) {
//             perJam += 20;
//             printf("Aura Kebijaksanaan → Tanjiro mendapat bonus +20 kristal.\n");
//         }
//         // Aura Kemarahan (ganjil & kelipatan 3)
//         else if (jam % 2 == 1 && jam % 3 == 0) {
//             perJam += 10;
//             printf("Aura Kemarahan → Zenitsu kehilangan bonus, Inosuke mendapat +10 kristal.\n");
//         }
//         // Aura Puncak (jam ganjil biasa)
//         else if (jam % 2 == 1) {
//             perJam += 5;
//             printf("Aura Puncak → Zenitsu merasakan aura kuat dan mendapat +5 kristal.\n");
//         }
//         // Jam genap biasa (tidak ada aura khusus)
//         else {
//             printf("Tidak ada aura khusus, tim bekerja normal.\n");
//         }

//         total += perJam;
//     }

//     // Output total
//     printf("\nTotal Kristal Mebius yang dikumpulkan: %d\n", total);

//     return 0;

    
// }

// #include <stdio.h>


// int main(){

//     int jenis_ticket, umur, jumlahticket, uang_yangDibayar, harga_ticket, diskon, total_harga, total_akhir = 0;

//     printf("piliih jenis ticket \n");
//     printf("1. Regular \n");
//     printf("2. VIP \n");
//     scanf("%d", &jenis_ticket);

//     printf("umur : ");
//     scanf("%d", &umur);

//     printf("jumlah tiket : ");
//     scanf("%d", &jumlahticket);

//     printf("masuk kan uang yang mau di bayar : ");
//     scanf("%d", &uang_yangDibayar);


//     if(jenis_ticket == 2 || jenis_ticket == 1){
//         if(jenis_ticket == 2){

//             if(jumlahticket >= 5  || jumlahticket <10){
//             harga_ticket = 75000 * jumlahticket;
//             diskon = 10 * harga_ticket / 100;
//             total_harga = harga_ticket - diskon;

//             }else if(jumlahticket >= 10){
//             harga_ticket = 75000 * jumlahticket;
//             diskon = 20 * harga_ticket / 100;
//             total_harga = harga_ticket - diskon;

//             }else if(jumlahticket < 5 || jumlahticket > 0){
//             harga_ticket = 75000 * jumlahticket;
//             total_harga = harga_ticket;

//             }else{
//                 printf("jumlah ticket tidak valid \n");
//             }

//         }else if(jenis_ticket == 1){
//             if(umur > 0 && umur <= 12){
//                 if(jumlahticket >= 5  || jumlahticket <10){
//                 harga_ticket = 25000 * jumlahticket;
//                 diskon = 10 * harga_ticket / 100;
//                 total_harga = harga_ticket - diskon;
            
//                 }else if(jumlahticket >= 10){
//                 harga_ticket = 25000 * jumlahticket;
//                 diskon = 20 * harga_ticket / 100;
//                 total_harga = harga_ticket - diskon;

//                 }else if(jumlahticket < 5 || jumlahticket > 0){
//                 harga_ticket = 25000 * jumlahticket;
//                 total_harga = harga_ticket;

//                 }else{
//                 printf("jumlah ticket tidak valid \n");
//                 }
                

//             }else if(umur > 12){
                
//                 if(jumlahticket >= 5 || jumlahticket < 10){
//                 harga_ticket = 40000 * jumlahticket;
//                 diskon = 10 * harga_ticket / 100;
//                 total_harga = harga_ticket - diskon;
            
//                 }else if(jumlahticket >= 10){
//                 harga_ticket = 40000 * jumlahticket;
//                 diskon = 20 * harga_ticket / 100;
//                 total_harga = harga_ticket - diskon;
                
//                 }else if(jumlahticket < 5 || jumlahticket > 0){
//                 harga_ticket = 40000 * jumlahticket;
//                 total_harga = harga_ticket;

//                 }else{
//                 printf("jumlah ticket tidak valid \n");
//                 }
//             }
            
//         }else{}

//     }else{ 
//         printf("jenis tiket tidak valid \n");
//     }

//     if(uang_yangDibayar >= total_harga){
//         total_akhir = uang_yangDibayar - total_harga;
//         printf("uang anda kembali : %d \n", total_akhir);
//     }else if(uang_yangDibayar < total_harga){
//         total_akhir = total_harga - uang_yangDibayar;
//         printf("uang anda kurang : %d \n", total_akhir);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int jenis_ticket, umur, jumlahticket;
    int uang_yangDibayar;
    int harga_ticket = 0;
    int diskon = 0;
    int total_harga = 0;
    int total_bayar = 0;
    int kembalian;

    printf("Pilih jenis tiket:\n");
    printf("1. Regular\n");
    printf("2. VIP\n");
    printf("Pilihan: ");
    scanf("%d", &jenis_ticket);

    printf("Umur: ");
    scanf("%d", &umur);

    printf("Jumlah tiket: ");
    scanf("%d", &jumlahticket);

    printf("Masukkan uang pembayaran: ");
    scanf("%d", &uang_yangDibayar);

    // Validasi input
    if (jenis_ticket != 1 && jenis_ticket != 2) {
        printf("Jenis tiket tidak valid\n");

    } else if (umur < 0 || jumlahticket <= 0 || uang_yangDibayar < 0) {
        printf("Data tidak valid\n");

    } else {
        // Menentukan harga satu tiket
        if (jenis_ticket == 2) {
            harga_ticket = 75000;

        } else if (jenis_ticket == 1) {
            if (umur <= 12) {
                harga_ticket = 25000;
            } else {
                harga_ticket = 40000;
            }
        }

        // Menghitung harga seluruh tiket
        total_harga = harga_ticket * jumlahticket;

        // Menentukan diskon
        if (jumlahticket >= 10) {
            diskon = total_harga * 20 / 100;
        } else if (jumlahticket >= 5) {
            diskon = total_harga * 10 / 100;
        }

        // Menghitung total setelah diskon
        total_bayar = total_harga - diskon;

        printf("\n===== STRUK BIOSKOP =====\n");
        printf("Harga awal : Rp%d\n", total_harga);
        printf("Diskon     : Rp%d\n", diskon);
        printf("Total bayar: Rp%d\n", total_bayar);

        // Memeriksa pembayaran
        if (uang_yangDibayar >= total_bayar) {
            kembalian = uang_yangDibayar - total_bayar;
            printf("Kembalian  : Rp%d\n", kembalian);
        } else {
            kembalian = total_bayar - uang_yangDibayar;
            printf("Uang kurang: Rp%d\n", kembalian);
        }

        // Memeriksa kelipatan 5
        if (jumlahticket % 5 == 0) {
            printf("Jumlah tiket merupakan kelipatan 5\n");
        }
    }

    return 0;
}
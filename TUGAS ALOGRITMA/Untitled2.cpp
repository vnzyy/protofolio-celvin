#include<stdio.h>

int CoreApp() {
    int no_pelanggan, total_bayar, jumlah_barang;
    char nama_pelanggan[100], alamat_pelanggan[100];

    printf ("Masukan Nomor Pelanggan: "); scanf("%d", &no_pelanggan);
    printf ("Masukan Nama Pelanggan: "); scanf("%s", &nama_pelanggan);
    printf ("Masukkan Alamat Pelanggan: "); scanf("%s", &alamat_pelanggan);
    printf ("Masukan Harga Total: "); scanf("%d", &total_bayar);
    printf("Masukkan Jumlah Barang: "); scanf("%d", &jumlah_barang);

    if(jumlah_barang >= 3)
    {
        total_bayar = total_bayar - 200000;
    };

    printf("No: %d\nNama: %s\nAlamat: %s\nJumlah Barang: %d\nTotal Bayar: %d\n", no_pelanggan, nama_pelanggan, alamat_pelanggan, jumlah_barang, total_bayar);

    return 0;
};


main() {
    printf("Selamat Datang\n");

   CoreApp();
}

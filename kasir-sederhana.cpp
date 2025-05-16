#include <iostream>
using namespace std;

// Struktur barang
struct Barang {
    string nama;
    int harga;
};

// Array daftar barang
Barang daftarBarang[5] = {
    {"Baju", 100000},
    {"Celana", 75000},
    {"Sepatu", 150000},
    {"Tas", 200000},
    {"JamTangan", 250000}
};

// Fungsi untuk menampilkan daftar barang
void tampilDaftarBarang() {
    cout << "Daftar Barang:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << daftarBarang[i].nama << "\t-> Rp. " << daftarBarang[i].harga << endl;
    }
}

// Fungsi untuk menghitung total harga
int hitungTotalHarga(string namaBarang, int jumlahBarang) {
    int totalHarga = 0;
    for (int i = 0; i < 5; i++) {
        if (daftarBarang[i].nama == namaBarang) {
            totalHarga = daftarBarang[i].harga * jumlahBarang;
            break;
        }
    }
    return totalHarga;
}

// Fungsi utama
int main() {
    string namaBarang;
    int jumlahBarang;
    char balik;

    atas:
    tampilDaftarBarang();
    cout << "\nMasukkan nama barang yang akan dibeli    : ";
    cin >> namaBarang;
    cout << "Masukkan jumlah barang yang akan dibeli : ";
    cin >> jumlahBarang;

    int totalHarga = hitungTotalHarga(namaBarang, jumlahBarang);
    cout << "\nTotal harga yang harus dibayar: Rp. " << totalHarga << endl;

    cout << "Ingin input data lagi? [Y/T] : ";
    cin >> balik;
    if (balik == 'y' || balik == 'Y') {
        goto atas;
    }

    return 0;
}

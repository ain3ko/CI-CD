#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

void kalkulatorKubus() {
    int s, pilihan;
    char kembali;
kubusMenu:
    system("cls");
    cout << "=== Kalkulator Kubus ===\n";
    cout << "1. Volume\n";
    cout << "2. Keliling\n";
    cout << "3. Kembali\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan sisi: "; cin >> s;
            cout << "Volume: " << s*s*s << endl;
            break;
        case 2:
            cout << "Masukkan sisi: "; cin >> s;
            cout << "Keliling: " << 12*s << endl;
            break;
        case 3: return;
        default: cout << "Pilihan tidak valid!\n";
    }

    cout << "\nKembali ke menu Kubus? (Y/N): ";
    cin >> kembali;
    if (kembali == 'Y' || kembali == 'y') goto kubusMenu;
}

void kalkulatorBalok() {
    int p, l, t, pilihan;
    char kembali;
balokMenu:
    system("cls");
    cout << "=== Kalkulator Balok ===\n";
    cout << "1. Volume\n";
    cout << "2. Keliling\n";
    cout << "3. Kembali\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang: "; cin >> p;
            cout << "Masukkan lebar: "; cin >> l;
            cout << "Masukkan tinggi: "; cin >> t;
            cout << "Volume: " << p*l*t << endl;
            break;
        case 2:
            cout << "Masukkan panjang: "; cin >> p;
            cout << "Masukkan lebar: "; cin >> l;
            cout << "Masukkan tinggi: "; cin >> t;
            cout << "Keliling: " << 4*(p + l + t) << endl;
            break;
        case 3: return;
        default: cout << "Pilihan tidak valid!\n";
    }

    cout << "\nKembali ke menu Balok? (Y/N): ";
    cin >> kembali;
    if (kembali == 'Y' || kembali == 'y') goto balokMenu;
}

void kalkulatorTabung() {
    double r, t;
    system("cls");
    cout << "=== Kalkulator Tabung ===\n";
    cout << "Masukkan jari-jari: "; cin >> r;
    cout << "Masukkan tinggi: "; cin >> t;
    cout << "Volume: " << M_PI * r * r * t << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali...";
    cin.get();
}

void kalkulatorKerucut() {
    double r, t;
    system("cls");
    cout << "=== Kalkulator Kerucut ===\n";
    cout << "Masukkan jari-jari: "; cin >> r;
    cout << "Masukkan tinggi: "; cin >> t;
    cout << "Volume: " << (1.0/3.0) * M_PI * r * r * t << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali...";
    cin.get();
}

void kalkulatorBola() {
    double r;
    system("cls");
    cout << "=== Kalkulator Bola ===\n";
    cout << "Masukkan jari-jari: "; cin >> r;
    cout << "Volume: " << (4.0/3.0) * M_PI * r * r * r << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali...";
    cin.get();
}

void kalkulatorPrisma() {
    int pilihan;
    double luasAlas, tinggi;
prismaMenu:
    system("cls");
    cout << "=== Kalkulator Prisma ===\n";
    cout << "1. Prisma Segitiga\n";
    cout << "2. Prisma Segiempat\n";
    cout << "3. Kembali\n";
    cout << "Pilih: ";
    cin >> pilihan;

    if (pilihan == 1 || pilihan == 2) {
        cout << "Masukkan luas alas: "; cin >> luasAlas;
        cout << "Masukkan tinggi prisma: "; cin >> tinggi;
        cout << "Volume: " << luasAlas * tinggi << endl;
    } else if (pilihan == 3) {
        return;
    } else {
        cout << "Pilihan tidak valid!\n";
    }

    char kembali;
    cout << "\nKembali ke menu Prisma? (Y/N): ";
    cin >> kembali;
    if (kembali == 'Y' || kembali == 'y') goto prismaMenu;
}

int main() {
    int pilihan;

menuUtama:
    system("cls");
    cout << "=== Kalkulator Bangun Ruang ===\n";
    cout << "1. Kubus\n";
    cout << "2. Balok\n";
    cout << "3. Tabung\n";
    cout << "4. Kerucut\n";
    cout << "5. Bola\n";
    cout << "6. Limas\n";
    cout << "7. Prisma\n";
    cout << "8. Keluar\n";
    cout << "Pilih bangun ruang (1-8): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1: kalkulatorKubus(); goto menuUtama;
        case 2: kalkulatorBalok(); goto menuUtama;
        case 3: kalkulatorTabung(); goto menuUtama;
        case 4: kalkulatorKerucut(); goto menuUtama;
        case 5: kalkulatorBola(); goto menuUtama;
        case 6: kalkulatorPrisma(); goto menuUtama;
        case 7:
            system("cls");
            cout << "Terima kasih telah menggunakan kalkulator.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            system("pause");
            goto menuUtama;
    }

    return 0;
}

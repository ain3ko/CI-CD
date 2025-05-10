#include <iostream>
#include <cmath>
#include <cstdlib> // untuk system("cls")
using namespace std;

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

void kalkulatorKubus() {
    int s;
    int pilihan;
    char kembali;

kubusMenu:
    system("cls");
    cout << "=== Kalkulator Kubus ===\n";
    cout << "1. Volume\n";
    cout << "2. Keliling\n";
    cout << "3. Kembali ke Menu Utama\n";
    cout << "Pilih opsi (1-3): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan sisi: ";
            cin >> s;
            cout << "Volume Kubus: " << s * s * s << endl;
            break;
        case 2:
            cout << "Masukkan sisi: ";
            cin >> s;
            cout << "Keliling Kubus: " << 12 * s << endl;
            break;
        case 3:
            return;
        default:
            cout << "Pilihan tidak valid!\n";
    }

    cout << "\nKembali ke kalkulator kubus? (Y/N): ";
    cin >> kembali;
    if (kembali == 'Y' || kembali == 'y') {
        goto kubusMenu;
    }
}

void kalkulatorBalok() {
    int p, l, t;
    int pilihan;
    char kembali;

balokMenu:
    system("cls");
    cout << "=== Kalkulator Balok ===\n";
    cout << "1. Volume\n";
    cout << "2. Keliling\n";
    cout << "3. Kembali ke Menu Utama\n";
    cout << "Pilih opsi (1-3): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan panjang: ";
            cin >> p;
            cout << "Masukkan lebar: ";
            cin >> l;
            cout << "Masukkan tinggi: ";
            cin >> t;
            cout << "Volume Balok: " << p * l * t << endl;
            break;
        case 2:
            cout << "Masukkan panjang: ";
            cin >> p;
            cout << "Masukkan lebar: ";
            cin >> l;
            cout << "Masukkan tinggi: ";
            cin >> t;
            cout << "Keliling Balok: " << 4 * (p + l + t) << endl;
            break;
        case 3:
            return;
        default:
            cout << "Pilihan tidak valid!\n";
    }

    cout << "\nKembali ke kalkulator balok? (Y/N): ";
    cin >> kembali;
    if (kembali == 'Y' || kembali == 'y') {
        goto balokMenu;
    }
}

void kalkulatorTabung() {
    double r, t;
    system("cls");
    cout << "=== Kalkulator Tabung ===\n";
    cout << "Masukkan jari-jari: ";
    cin >> r;
    cout << "Masukkan tinggi: ";
    cin >> t;
    double volume = M_PI * r * r * t;
    cout << "Volume Tabung: " << volume << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali ke menu...";
    cin.get();
}

void kalkulatorKerucut() {
    double r, t;
    system("cls");
    cout << "=== Kalkulator Kerucut ===\n";
    cout << "Masukkan jari-jari: ";
    cin >> r;
    cout << "Masukkan tinggi: ";
    cin >> t;
    double volume = (1.0 / 3.0) * M_PI * r * r * t;
    cout << "Volume Kerucut: " << volume << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali ke menu...";
    cin.get();
}

void kalkulatorBola() {
    double r;
    system("cls");
    cout << "=== Kalkulator Bola ===\n";
    cout << "Masukkan jari-jari: ";
    cin >> r;
    double volume = (4.0 / 3.0) * M_PI * r * r * r;
    cout << "Volume Bola: " << volume << endl;
    cin.ignore();
    cout << "\nTekan Enter untuk kembali ke menu...";
    cin.get();
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
    cout << "6. Keluar\n";
    cout << "Pilih bangun ruang (1-6): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            kalkulatorKubus();
            goto menuUtama;
        case 2:
            kalkulatorBalok();
            goto menuUtama;
        case 3:
            kalkulatorTabung();
            goto menuUtama;
        case 4:
            kalkulatorKerucut();
            goto menuUtama;
        case 5:
            kalkulatorBola();
            goto menuUtama;
        case 6:
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


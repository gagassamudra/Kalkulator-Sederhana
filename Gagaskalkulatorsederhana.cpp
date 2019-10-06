#include <iostream>

using namespace std;

int main()
{
    cout << "\nNama :   Gusti Gagas Samudra";
    cout << "\nNIM  :   19051397022";
    cout << "\nPRODI:   D4 Manajemen informatika";

    int pilih;
    ulang:
    cout << "\n\n========== KALKULATOR SEDERHANA ==========";
    cout << "\n 1. Penjumlahan";
    cout << "\n 2. Pengurangan";
    cout << "\n 3. Perkalian";
    cout << "\n 4. Pembagian";
    cout << "\nMasukkan Inputan = 1 - 4 :";
    cin >> pilih;

    float bil1,bil2,total;

    switch(pilih)
    {
    case 1:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 + bil2;

        cout << total;
        break;

    case 2:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 - bil2;

        cout << total;
        break;

    case 3:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 * bil2;

        cout << total;
        break;

    case 4:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 / bil2;

        cout << total;
        break;

    default:
        cout << "\nInputan Anda Salah";
        goto ulang;
        break;
    }

}

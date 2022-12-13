#include <iostream>

using namespace std;

int main()
{
    cout << "Program Untuk Menginput Harga Barang" << endl;
    cout << "====================================\n" << endl;

    int harga_satuan, kuantitas, total_harga;
    int x = 1;

    do {
        cout << "Inputkan Bararng ke-" << x << endl;
        cout << "     Harga Satuan : ";
        cin >> harga_satuan;
        cout << "     Kuantitas    : ";
        cin >> kuantitas;
        cout << " " << endl;
        total_harga += harga_satuan;
        x++;


        if (harga_satuan == 0 || kuantitas == 0) {
            break;
        }
    } while (x > 0);

    cout << " " << endl;
    cout << "====================================\n" << endl;
    cout << "Total Harganya Adalah : RP " << total_harga << endl;

    return 0;
}

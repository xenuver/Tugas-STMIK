#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Hari;
    int Kamar = 250000;
    int Dokter = 65000;
    double Diskon, TotalBiayaDokter, TotalBiayaKamar, Totalbersih;

    cout << "Program Menghitung Total Biaya Rawat Inap" << endl;
    cout << "=========================================" << endl << endl;

    cout << "Total Hari Rawat Inap : ";
    cin >> Hari;
    cout << endl << "=========================================" << endl;


    TotalBiayaKamar = Kamar * Hari;
    TotalBiayaDokter = Dokter * Hari;
    Diskon = TotalBiayaKamar * 0.1;
    Totalbersih = TotalBiayaDokter + TotalBiayaKamar - Diskon;

    cout << "Total Biaya Kamar Sebesar       : Rp. " << TotalBiayaKamar << endl;
    cout << "Total Biaya Dokter Sebesar      : Rp. " << TotalBiayaDokter << endl;
    cout << "Diskon Biaya Kamar Potongan 10% : Rp. " << Diskon << endl;
    cout << "Biaya yang harus dibayar        : Rp. " << Totalbersih << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string golongan;
    char npwp;
    double pajak = 0;
    int sks, gajipersks, gaji, gajibersih;

    cout << "Program menghitung honor per sks berdasarkan golongan" << endl;
    cout << "===================================================== \n" << endl;
    cout << "Golongan 1 : Lektor Kepala" << endl;
    cout << "Golongan 2 : Lektor" << endl;
    cout << "Golongan 3 : Asisten Ahli" << endl;
    cout << "Golongan 4 : Dosen\n" << endl;
    cout << "===================================================== \n" << endl;

    cout << "Inputkan Golongan               : ";
    getline(cin, golongan);

    cout << "Inputkan Jumlah Sks             : ";
    cin >> sks;

    cout << "Apakah Anda Memiliki NPWP [Y,N] : ";
    cin >> npwp;

    if (golongan == "Lektor Kepala") {
        gajipersks = 40000;
        gaji = gajipersks * sks;
    } else if (golongan == "Lektor") {
        gajipersks = 37000;
        gaji = gajipersks * sks;
    } else if (golongan == "Asisten Ahli") {
        gajipersks = 33000;
        gaji = gajipersks * sks;
    } else if (golongan == "Dosen") {
        gajipersks = 28000;
        gaji = gajipersks * sks;
    }

    if (npwp == 'Y') {
        pajak = gaji * 0.025;
        gajibersih = gajipersks * sks + pajak;
    } else if (npwp == 'N') {
        pajak = gaji * 0.03;
        gajibersih = gajipersks * sks + pajak;
    }

    cout << endl << "=====================================================\n" << endl;
    cout << "Honor Per sks Sebesar : " << gajipersks << endl;
    cout << "Total Sks             : " << sks << endl;
    cout << "Gaji Sebelum Pajak    : " << gaji << endl;
    cout << "Total Pajak           : " << pajak << endl;
    cout << "Total Gaji            : " << gajibersih     << endl;


    return 0;
}

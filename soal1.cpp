#include <iostream>
#include <string>
using namespace std;

int main()
{
    string golongan;
    char npwp;
    double pajak = 0;
    int sks, gajipersks, gaji;

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
        cout << "Apakah Anda Memiliki NPWP [Y,N] : ";
        cin >> npwp;

        if (npwp == 'Y') {
            gajipersks = 28000;
            pajak = (gajipersks * sks) * 0.025;
            gaji = gajipersks * sks + pajak;
        } else if (npwp == 'N') {
            gajipersks = 28000;
            pajak = (gajipersks * sks) * 0.03;
            gaji = gajipersks * sks + pajak;
        }
    }

    cout << endl << "=====================================================\n" << endl;
    cout << "Honor Per sks Sebesar : " << gajipersks << endl;
    cout << "Total Sks             : " << sks << endl;
    cout << "Total Pajak           : " << pajak << endl;
    cout << "Total Gaji            : " << gaji << endl;


    return 0;
}

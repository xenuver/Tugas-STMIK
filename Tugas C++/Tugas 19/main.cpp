#include <iostream>

using namespace std;

int main()
{
    string golongan;
    int gaji = 0, jam, upahlembur = 0, totalgaji;

    cout << "Program Menetapkan Gaji Berdasarkan Golongan" << endl;
    cout << "============================================" << endl << endl;

    cout << "Inputkan Golongan   : "; cin >> golongan;

    if (golongan == "A") {
        gaji = gaji + 1800000;
    } else if (golongan == "B") {
        gaji = gaji + 2500000;
    } else if (golongan == "C") {
        gaji = gaji + 4000000;
    }

    cout << "Inputkan lama kerja : "; cin >> jam;

    if (jam > 150)
        upahlembur = (jam - 150) * 12000;

    totalgaji = gaji + upahlembur;

    cout << endl << "============================================" << endl << endl;
    cout << "Golongan Karyawan : " << golongan << endl;
    cout << "Gaji Karyawan     : " << gaji << endl;
    cout << "Lama Kerja        : " << jam << endl;
    cout << "Upah Lembur       : " << upahlembur << endl;
    return 0;
}

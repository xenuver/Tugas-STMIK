#include <iostream>

using namespace std;

int main()
{
    cout << "Program Untuk Menghitung Rata-rata Tinggi Badan Siswa" << endl;
    cout << "=====================================================\n" << endl;

    int jmlh_siswa, tinggi_badan, tinggi_terendah, rata_tinggi, jumlah_tinggi;

    cout << "Inputkan Jumlah siswa dalam kelas : "; cin >> jmlh_siswa;

    cout << "Inputkan Tinggi Badan : ";
    cin >> tinggi_badan;
    tinggi_terendah = tinggi_badan;
    jumlah_tinggi = tinggi_badan;

    for(int x = 2; x <= jmlh_siswa; x++) {
        cout << "Inputkan Tinggi Badan : ";
        cin >> tinggi_badan;
        jumlah_tinggi += tinggi_badan;
        rata_tinggi = jumlah_tinggi / jmlh_siswa;

        if ( tinggi_badan < tinggi_terendah ) {
            tinggi_terendah = tinggi_badan;
        }
    }

    cout << " " << endl;
    cout << "=====================================================\n" << endl;
    cout << "Jadi Rata-rata Tinggi Siswa   : " << rata_tinggi << endl;
    cout << "Tinggi Terendahnya Adalah     : " << tinggi_terendah << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Program Untuk mengetahui jumlah mahasiswa yang dapat dan tidak dapat mengikuti ujian akhir" << endl;
    cout << "==========================================================================================\n" << endl;

    int jmlmhs, tkdosen;
    double nk_mhs, tkmhs;
    int lulus = 0, tidak_lulus = 0;

    cout << "Inputkan Jumlah Mahasiswa      : "; cin >> jmlmhs;
    cout << "Inputkan Total Kehadiran Dosen : "; cin >> tkdosen;
    cout << endl << "==========================================================================================\n" << endl;

    for(int i = 1; i <= jmlmhs; i++) {
        cout << "Inputkan Jumlah Kehadiran Mahasiswa ke-" << i << " : ";
        cin >> tkmhs;

        nk_mhs = (tkmhs / tkdosen) * 10;
        cout << "Nilai Aktivitas Mahasiswa ke-" << i << " : " << nk_mhs << endl << endl;

        if (nk_mhs <= 7.5) {
            tidak_lulus += 1;
        } else {
            lulus += 1;
        }
    }

    cout << endl << "==========================================================================================\n" << endl;
    cout << "Total Jumlah Mahasiswa yang lulus       : " << lulus<<endl;
    cout << "Total Jumlah Mahasiswa yang tidak lulus : " << tidak_lulus<<endl;

    return 0;
}

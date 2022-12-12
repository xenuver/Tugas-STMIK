#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Nilai_AK, Nilai_Tugas, Nilai_MID, Nilai_UAS;
    int Total_AK, Total_Tugas, Total_MID, Total_UAS, TotalNilai;

    cout << "Program Untuk Menampilkan Nilai DPNA" << endl;
    cout << "====================================================" << endl << endl;

    cout << "Nilai dari Aktivitas Kelas   : ";
    cin >> Nilai_AK;
    cout << "Nilai dari Tugas Terstruktur : ";
    cin >> Nilai_Tugas;
    cout << "Nilai dari Ujian Mid         : ";
    cin >> Nilai_MID;
    cout << "Nilai dari Ujian Akhir       : ";
    cin >> Nilai_UAS;
    cout << endl << "==================================================== \n" << endl;


    Total_AK = Nilai_AK * 0.1;
    Total_Tugas = Nilai_Tugas * 0.2;
    Total_MID = Nilai_MID * 0.3;
    Total_UAS = Nilai_UAS * 0.4;
    TotalNilai = Total_AK + Total_Tugas + Total_MID + Total_UAS;

    cout << "Nilai dari Aktivitas Kelas dengan Bobot 10%   : " << Total_AK << endl;
    cout << "Nilai dari Tugas Terstruktur dengan Bobot 20% : " << Total_Tugas << endl;
    cout << "Nilai dari Ujian Mid dengan Bobot 30%         : " << Total_MID << endl;
    cout << "Nilai dari Ujian Akhir dengan Bobot 40%       : " << Total_Tugas << endl << endl;;
    cout << "==================================================== \n" << endl;
    cout << "Total Nilai DPNA                              : " << TotalNilai << endl;

    return 0;
}

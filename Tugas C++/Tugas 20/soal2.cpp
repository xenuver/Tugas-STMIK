#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Nilai_AK, Nilai_Tugas, Nilai_MID, Nilai_UAS, TotalNilai;
    double Total_AK, Total_Tugas, Total_MID, Total_UAS;
    string grade;

    cout << "Program Untuk Menampilkan Nilai Kumulatif" << endl;
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

    if (TotalNilai >= 80 && TotalNilai <= 100) {
        grade = "Grade A";
    } else if (TotalNilai >= 70 && TotalNilai < 80) {
        grade = "Grade B";
    } else if (TotalNilai >= 60 && TotalNilai < 70) {
        grade = "Grade C";
    } else if (TotalNilai >= 40 && TotalNilai < 60) {
        grade = "Grade D";
    } else if (TotalNilai >= 0 && TotalNilai < 40) {
        grade = "Grade E";
    }   

    cout << "Nilai dari Aktivitas Kelas dengan Bobot 10%   : " << Total_AK << endl;
    cout << "Nilai dari Tugas Terstruktur dengan Bobot 20% : " << Total_Tugas << endl;
    cout << "Nilai dari Ujian Mid dengan Bobot 30%         : " << Total_MID << endl;
    cout << "Nilai dari Ujian Akhir dengan Bobot 40%       : " << Total_Tugas << endl << endl;;
    cout << "Total Nilai DPNA                              : " << TotalNilai << endl;
    cout << "Grade                                         : " << grade << endl;
    cout << "==================================================== \n" << endl;

    return 0;
}

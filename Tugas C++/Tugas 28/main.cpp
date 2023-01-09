#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jmlmhs, ttlhadirdosen;
    int nim[50];
    double totalhadirmhs[50];
    double nilaiak[50];
    string namamhs[50];
    string status[50];
    double jmlnak = 0;
    double ratanak;
    int jmlmhstidakujian = 0;

    cout << "Jumlah Mahasiswa  = "; cin >> jmlmhs;
    cout << "Total Hadir Dosen = "; cin >> ttlhadirdosen;
    cout << endl;
    double thnmin = ttlhadirdosen;

    for (int x = 1; x <= jmlmhs; x++) {
        cout << "   Nim             = "; cin >> nim[x];
        cout << "   Nama Manusia    = "; cin >> namamhs[x];
        cout << "   Total Hadir Mhs = "; cin >> totalhadirmhs[x];

        nilaiak[x] = (totalhadirmhs[x] / ttlhadirdosen) * 10;

        if (nilaiak[x] < 7.5) {
            status[x] = "Tidak Ikut Ujian";
        }else {
            status[x] = "Ikut Ujian";
            jmlmhstidakujian = jmlmhstidakujian + 1;
        }

        jmlnak = jmlnak + nilaiak[x];
        if (totalhadirmhs[x] < thnmin) {
            thnmin = totalhadirmhs[x];
        }


        cout << endl;
    }

    cout << "REKAPTULASI KEHADIRAN MAHASISWA" << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left);
    cout << "NO" << setw(15) << "   NIM" << setw(15) << "  NAMA MAHASISWA" << setw(15) << "  TOTAL HADIR" << setw(10) << "  NILAI AK        STATUS" << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
    for (int x = 1; x <= jmlmhs; x++) {
        cout << setiosflags(ios::left);
        cout << x << "    " << setw(10) << nim[x] << "       " << setw(15) << namamhs[x] << "   " << setw(10) << totalhadirmhs[x] << "  " << setw(10) << setprecision(2) << nilaiak[x] << status[x] << endl;

    }
    cout << "----------------------------------------------------------------------------------" << endl;
    ratanak = jmlnak / jmlmhs;
    cout << "RATA-RATA NILAI AKTIVITAS KELAS   = " << ratanak << endl;
    cout << "TOTAL HADIR PALING RENDAH         = " << thnmin << endl;
    cout << "JUMLAH MAHASISWA TIDAK IKUT UJIAN = " << jmlmhstidakujian << endl;

    return 0;
}

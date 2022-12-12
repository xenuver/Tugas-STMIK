#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << "Program untuk menentukan kenaikan gaji berdasarkan kinerja" << endl;
    cout << "==========================================================\n" << endl;

    int terlambat, sakit, izin, alpha;
    int b_terlambat, b_sakit, b_izin, b_alpha, total_b, jmlh_naik_gaji;
    double ikp;
    string grade;

    cout << "Jumlah Menit Keterlambatan : "; cin >> terlambat;
    cout << "Jumlah Hari Sakit          : "; cin >> sakit;
    cout << "Jumlah Hari Izin           : "; cin >> izin;
    cout << "Jumlah Hari Alpha          : "; cin >> alpha;

    cout << endl;

    if (terlambat == 0) {
        b_terlambat = 4;
    } else if (terlambat <= 60) {
        b_terlambat = 3;
    } else if (terlambat <= 90) {
        b_terlambat = 2;
    } else if (terlambat <= 120) {
        b_terlambat = 1;
    } else {
        b_terlambat = 0;
    }

    if (sakit == 0) {
        b_sakit = 4;
    } else if (sakit <= 3) {
        b_sakit = 3;
    } else if (sakit <= 7) {
        b_sakit = 2;
    } else if (sakit <= 14) {
        b_sakit = 1;
    } else {
        b_sakit = 0;
    }

    if (izin == 0) {
        b_izin = 4;
    } else if (izin <= 3) {
        b_izin = 3;
    } else if (izin <= 5) {
        b_izin = 2;
    } else if (izin <= 7) {
        b_izin = 1;
    } else {
        b_izin = 0;
    }

    if (alpha == 0) {
        b_alpha = 4;
    } else if (alpha <= 1) {
        b_alpha = 3;
    } else if (alpha <= 2) {
        b_alpha = 2;
    } else if (alpha <= 3) {
        b_alpha = 1;
    } else {
        b_alpha = 0;
    }

    total_b = b_terlambat + b_sakit + b_izin + b_alpha;
    ikp = total_b / 4.0;

    if (ikp >= 3.75 && ikp <= 4.00) {
        grade = "Star";
        jmlh_naik_gaji = 1500000;
    } else if (ikp >= 3.00 && ikp < 3.75) {
        grade = "Potential";
        jmlh_naik_gaji = 750000;
    } else if (ikp >= 2.00 && ikp < 3.00) {
        grade = "Career Person";
        jmlh_naik_gaji = 200000;
    } else if (ikp >= 1.00 && ikp < 2.00) {
        grade = "Problem Employee";
        jmlh_naik_gaji = 100000;
    } else if (ikp >= 0.00 && ikp < 1.00) {
        grade = "Daedwood";
        jmlh_naik_gaji = 0;
    }

    cout << "==========================================================\n" << endl;
    cout << "Total Bobot Keseluruhan : " << total_b << endl;
    cout << "Index Kinerja Pegawai   : " << ikp << endl;
    cout << "Grade                   : " << grade << endl;
    cout << "Jumlah Kenaikan Gaji    : Rp." << jmlh_naik_gaji << endl;

    return 0;
}

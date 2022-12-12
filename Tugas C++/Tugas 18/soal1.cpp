#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
    const int bpp = 2000000, dMahasiswa = 200000, biayaPerSks = 115000;
    int jmlSks, ttlBiayaSks, ttl;
    
    
    
    cout <<"<!--Soal No. 1-->\n";
    cout <<"Program Menghitung Biaya Kuliah Mahasiswa\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Jumlah Sks ";
    cin >>jmlSks;
    ttlBiayaSks = jmlSks * biayaPerSks;
    ttl = bpp+  dMahasiswa + ttlBiayaSks;
    //cout <<setprecision(10); //Jika menggunaka float, sebaiknya aktifkan ini dan <iomanip>
    cout <<"_____________________________________________________________\n";
    cout <<"| Jumlah Sks Mahasiswa                    = "<<jmlSks <<" Sks"<<endl;
    cout <<"| Biaya Per Sks                           = Rp."<<biayaPerSks <<endl;
    cout <<"|============================================================ x \n";
    cout <<"| Total Biaya Sks Mahasiswa               = Rp."<<ttlBiayaSks <<endl;
    cout <<"| BPP                                     = Rp."<<bpp <<endl;
    cout <<"| Dana Kemahasiswaan                      = Rp."<<dMahasiswa <<endl;
    cout <<"|============================================================ + \n";
    cout <<"|\n";
    cout <<"| Total Biaya Kuliah Mahasiswa            = Rp."<<ttl <<endl;
    cout <<"|                                         -------------------     \n";
    cout <<"|____________________________________________________________";
    return 0;

}

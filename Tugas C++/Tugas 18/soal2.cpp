#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float berat, biayaPerKg, biaya,pajak,ttl;
    
    
    cout <<"<!--Soal No. 2-->\n";
    cout <<"Program Menghitung Biaya Ekspedisi\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Berat Barang ";
    cin >>berat;
    cout <<"Masukkan Biaya Per Kg ";
    cin >>biayaPerKg;
    biaya = berat * biayaPerKg;
    pajak = biaya * 0.1;
    ttl = biaya - pajak;
    cout <<setprecision(10); //Jika menggunaka float, sebaiknya aktifkan ini dan <iomanip>
    cout <<"_____________________________________________________________\n";
    cout <<"| Berat barang                           = "<<berat <<" Kg"<<endl;
    cout <<"| Biaya Pengiriman Per Kg                = Rp."<<biayaPerKg <<endl;
    cout <<"|============================================================ x \n";
    cout <<"| Biaya Pengiriman Sebelum Pajak         = Rp."<<biaya <<endl;
    cout <<"| Pajak                                  = Rp."<<pajak <<endl;
    cout <<"|============================================================ + \n";
    cout <<"|\n";
    cout <<"| Total Biaya Pengiriman                 = Rp."<<ttl <<endl;
    cout <<"|                                         -------------------     \n";
    cout <<"|____________________________________________________________";
    return 0;

}

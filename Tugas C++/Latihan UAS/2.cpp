#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string nama[50];
    float nilaiipk[50];
    int jmlsks[50];
    int jmlmhsjago = 0;
    int jmlmhsmls = 0;
    double jmlipk;
    double rataipk;


    cout << "Inputkan Jumlah Mahasiswa : "; cin >> n;

    cout << endl;

    for(int x = 1; x <= n; x++) {
        cout << "   Input Nama Mhs         :"; cin >> nama[x];
        cout << "   Input Nilai Ipk        :"; cin >> nilaiipk[x];
        cout << endl;
        double tinggi = nilaiipk[x];

        if (nilaiipk[x] >= 0.00 && nilaiipk[x] <= 1.49) {
            jmlsks[x] = 12;
            jmlmhsmls += 1;
        }else if(nilaiipk[x] >= 1.50 && nilaiipk[x] <= 1.99){
            jmlsks[x] = 15;
            jmlmhsmls += 1;
        }else if(nilaiipk[x] >= 2.00 && nilaiipk[x] <= 2.49){
            jmlsks[x] = 18;
        }else if(nilaiipk[x] >= 2.50 && nilaiipk[x] <= 2.99){
            jmlsks[x] = 21;
        }else if(nilaiipk[x] >= 3.00 && nilaiipk[x] <= 4.00){
            jmlsks[x] = 24;
            jmlmhsjago += 1;
        }

        jmlipk += nilaiipk[x];
        if (nilaiipk[x] > tinggi)
            tinggi = nilaiipk[x];

    }

    rataipk = jmlipk / n;
    cout << setiosflags(ios::left);
    cout << setw(15) << "REKAPTULASI INDEX PRESTASI MAHASISWA" << endl;
    cout << setiosflags(ios::left);
    cout << "No" << "    " << setw(5) << "Nama Mahasiswa" << "    " << setw(10) << "Nilai IPK" << "    " << setw(10) << "Jml SKS" << endl;

    for (int x = 1; x <= n; x++) {
        cout << setiosflags(ios::left);
        cout << x << "     " << setw(5) << nama[x] << "    " << setw(10) << fixed <<setprecision(2) << nilaiipk[x] << "    " << setw(10) << jmlsks[x] << endl;
    }

    cout << rataipk << endl;
    cout << tinggi << endl;
    cout << jmlmhsjago << endl;
    cout << jmlmhsmls << endl;



    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int tahunmasuk,lamakerja, golongan,tahunsekarang,gaji,incentive,totalgaji;

    cout<<"Nama Pegawai : ";
    getline(cin, nama);
    cout <<"Golongan : ";
    cin>>golongan;

    if (golongan = 1) {
        gaji=500000;
    }
    else if (golongan = 2) {
        gaji=750000;
    }

    else if (golongan = 3) {
        gaji=1000000;
    }

    else if (golongan = 4) {
        gaji=1500000;
    }

    cout <<"Tahun masuk : ";
    cin>>tahunmasuk;

    cout<<" "<<endl<<endl;

    tahunsekarang=2016;
    lamakerja=tahunsekarang-tahunmasuk;
    cout<<"Lama kerja : "<<lamakerja<<endl;

    if ( lamakerja < 1) {
        incentive = 250000;
    }
    else if (( lamakerja == 1 ) ||  ( lamakerja == 2)) {
        incentive = 500000;
    }
    else if (( lamakerja == 3) ||  (lamakerja == 4)) {
        incentive = 1000000;
    }
    else if ( lamakerja > 4) {
        incentive = 1500000;
    }
    totalgaji=gaji+incentive;
    cout <<"Jumlah gaji : "<<totalgaji;
    return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int pilihan,saldo,transfer,tunai,norek;
    string opsi;

    cout << "Masukkan jumlah saldo : ";
    cin >>saldo;
    cout <<endl<<endl;
     do {
    cout << "Simulasi mesin ATM" << endl;
    cout << "# Menu ATM #" << endl;
    cout << "______________________" << endl;
    cout << "1 = Cek saldo" << endl;
    cout << "2 = Transfer" << endl;
    cout << "3 = Ambil Tunai" << endl;
    cout << "4 = Keluar" << endl;
    cout << "----------------------" << endl<<endl;
    cout << "Masukkan Pilihan ( 1 - 4 ) : ";

    cin>>pilihan;
    switch(pilihan)
    {
    case 1 : // cek saldo
        cout<<"Saldo anda berjumlah : "<<saldo<<endl;
        break;
    case 2 : //transfer
        cout<<"Masukan nomor rekening tujuan : ";
        cin>>norek;
        cout<<"Masukan jumlah saldo yang ditransfer : ";
        cin>>transfer;
        if (transfer < saldo) {
            saldo = saldo - transfer;
            cout << "Transfer dengan no rek : "<<norek << " berhasil dilakukan"<<endl;
            cout << "Saldo Anda saat ini : "<<saldo<<endl;}
            else {cout << "Maaf saldo tidak mencukupi";
        }
        break;
    case 3 : // ambil tunai
        cout<<"Masukan jumlah saldo yang diambil : ";
        cin>>tunai;
        if (tunai < saldo) {
            saldo = saldo - tunai;
            cout << "Saldo Anda saat ini : "<<saldo<<endl;}
            else {cout << "Maaf saldo tidak mencukupi";
        }
        break;
    case 4 : return 0;
    default :
        cout << "Masukan pilihan antara 1 - 4 "<<endl;
    }
    cout << "Kembali ke menu awal ? (y/n) : " ;
    cin >> opsi;
    system("cls");
    }
      while (opsi=="y");
}

#include <iostream>

using namespace std;

int main()
{
    int kode_hari;
    cout<<"Menentukan hari"<<endl;
    cout<<"1 = Senin"<<endl;
    cout<<"2 = Selasa"<<endl;
    cout<<"3 = Rabu"<<endl;
    cout<<"4 = Kamis"<<endl;
    cout<<"5 = Jumat"<<endl;
    cout<<"6 = Sabtu"<<endl;
    cout<<"7 = Minggu"<<endl;
    cout<<"Kode hari ( 1 sampai 7 )"<<endl<<endl;

    cin>>kode_hari;
    switch(kode_hari)
    {
    case 1:
        cout <<"Senin"<<endl;
        break;
    case 2:
        cout <<"Selasa"<<endl;
        break;
    case 3:
        cout <<"Rabu"<<endl;
        break;
    case 4:
        cout <<"Kamis"<<endl;
        break;
    case 5:
        cout <<"Jumat"<<endl;
        break;
    case 6:
        cout <<"Sabtu"<<endl;
        break;
    case 7:
        cout <<"Minggu"<<endl;
        break;
    default:
        cout << "Hari salah";
        break;
    }
    return 0;
}

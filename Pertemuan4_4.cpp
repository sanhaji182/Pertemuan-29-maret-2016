#include <iostream>
#include <string>

using namespace std;

int main()
{
int bil1,bil2;
char operan;
double hasil;
cout<<"Kalkulator"<<endl;
cout<<"Angka 1 : ";
cin >> bil1;
cout<<"Operator : ";
cin >> operan;
cout<<"Angka 2 : ";
cin >> bil2;
cout<<"------"<<endl;

switch (operan)
  {
      case '*':
          hasil=bil1*bil2;
      break;
      case '+':
          hasil=bil1+bil2;
      break;
      case '-':
          hasil=bil1-bil2;
      break;
      case '/':
          hasil=bil1/bil2;
      break;
  default :
      cout<<"Maaf blm terdaftar";
  }
  cout <<"Hasil : "<< hasil;
    return 0;
}

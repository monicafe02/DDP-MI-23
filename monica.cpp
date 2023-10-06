#include <iostream>

using namespace std;

int main()
{
  string nama, npm;
  int angka1, angka2, hasil;
  getline(cin, nama);
  cin >> npm >> angka1 >> angka2;
  hasil = angka1 * angka2;

  cout << " Nama : " << nama << endl;
  cout << " Npm : " << npm << endl;
  cout << " Angka pertama adalah " << angka1 << endl;
  cout << " Angka kedua adalah " << angka2 << endl;
  cout << " hasil kali dari " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
}
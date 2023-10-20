#include <iostream>
using namespace std;

int main()
{
    char ulangi = 'y';
    int i = 0;

    do 
    {
        cout << "Apakah kamu sayang dia?" << endl;
        cout << "Jawab (y/t): ";
        cin >> ulangi;

        i++;
    }   while (ulangi == 'y');
    {
        cout << "\n\n----------------\n";
        cout << "Kamu punya harapan!" << endl;
        cout << "Setidaknya kamu sudah mencoba sebanyak " << i << " Kali. " << endl;

    }
}

 
#include <iostream>
using namespace std;

int main() {
    char ulangi = 'y';
    int counter = 0;

    while (ulangi == 'y') {
        cout << "apakah kamu sayang aku" <<endl;
        cout << "jawab (y/t): ";
        cin >> ulangi;

        counter++;

    }

    cout << "n\n-------------\n";
    cout << "Anda kuarang beruntung" << endl;
    cout << " kamu berusaha sebanyak " << counter << "kali"<< 
    endl;

}
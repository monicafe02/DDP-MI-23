#include <iostream>
using namespace std;

int main () {
    int value;
    cin>>value;
    
    if (value>= 0 && value <= 9) {
        cout << "Satuan" << endl;
    } else if (value >= 10 && value <= 99) {
        cout << "Puluhan" << endl;
    } else if (value >= 100 && value <= 999) {
        cout << "Ratusan" << endl;
    } else { 
        cout << "Tidak Tahu" << endl;
    }
       
}
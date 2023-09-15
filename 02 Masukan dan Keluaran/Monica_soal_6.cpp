#include <iostream>

using namespace std;

int main() {
int b, c;
    cin >> b >> c;
    
    int pembagian = b / c;
    int sisa_bagi = b % c;
    
    cout << "masing-masing " <<pembagian<< endl;
    cout << "bersisa " <<sisa_bagi<< endl;
    
    return 0;
}

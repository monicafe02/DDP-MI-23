#include <iostream>
using namespace std;


int main() {
       int value;
        cin >> value;
    if (value < 0 ){
        cout << "Negatif" << endl;      
    }else if(value % 2 == 0 ){
        cout << "Positif Genap" << endl;
    }else{
        cout << "Positif Ganjil" << endl;
    }
        
    return 0;
}
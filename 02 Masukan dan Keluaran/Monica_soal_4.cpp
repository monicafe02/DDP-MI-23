#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int y, z;
    cin >> y >> z;
    
    int penjumlahan = y + z;
    int pengurangan = y - z;
    int perkalian = y * z;
    double pembagian = (double) y / z;
    
     cout << "Hasil dari Penjumlahan " << y << " dengan " << z << " adalah " <<penjumlahan<< endl;
     cout << "Hasil dari Pengurangan " << y << " dengan " << z << " adalah " <<pengurangan<< endl;
     cout << "Hasil dari Perkalian " << y << " dengan " << z << " adalah " <<perkalian<< endl;
     cout << "Hasil dari Pembagian " << y << " dengan " << z << " adalah " <<pembagian<< endl;
    
    return 0;

}


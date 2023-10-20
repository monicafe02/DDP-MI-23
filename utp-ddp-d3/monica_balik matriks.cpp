include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int matriks[A][B];
    
    for(int o=0; o<A; o++){
        for(int p=0; p<B; p++){
            cin >> matriks[o][p];
        }    
    }
    
    for(int o=A-1; o>=0; o--){
        for(int p=B-1; p>=0; p--){
            cout << matriks[o][p] << " ";
        }
        cout << endl;
    }
    return 0;
    }
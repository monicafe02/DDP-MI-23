#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A;
    cin >> B;

    int matriks[A][B];

    for (int m = 0; m < A; m++) {
        for (int n = 0; n < B; n++) {
            matriks[m][n] = (m+1) * (n+1);
        }
    }
    for (int m = 0; m < A; m++) {
        for (int n = 0; n < B; n++) {
            cout << matriks[m][n] << " ";
        }
        cout << endl;
    }

    return 0;
}
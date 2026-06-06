#include <iostream>
using namespace std;

int main() {
    int BN, N;
    cin >> BN >> N;

    int X;
    if (BN < 10000) {
        X = BN;
    }
    else {
        X = 2 * BN;
    }

    int ukupno = N * X;
    cout << ukupno << endl;

    return 0;
}

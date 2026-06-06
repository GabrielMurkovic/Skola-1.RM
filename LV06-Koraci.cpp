#include <iostream>
using namespace std;

int main() {
    int P[4], M[4]; // P = Pat, M = Mat

    // Unos podataka
    for (int i = 0; i < 4; i++) cin >> P[i];
    for (int i = 0; i < 4; i++) cin >> M[i];

    int sumaPat = 0, sumaMat = 0;

    for (int i = 0; i < 4; i++) {
        sumaPat += P[i];
        sumaMat += M[i];

        if (sumaPat > sumaMat) cout << "PAT" << endl;
        else cout << "MAT" << endl;
    }

    return 0;
}

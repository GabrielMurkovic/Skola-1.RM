#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int mat[20][20]; // N <= 20

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> mat[i][j];

    int count = 0;

    // prolazimo kroz sve moguće centre pluseva
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // maksimalna veličina plusa oko centra
            for (int sz = 3; sz <= N; sz += 2) {
                int half = sz / 2;
                // provjeravamo da kvadrat ne izlazi iz matrice
                if (i - half < 0 || i + half >= N || j - half < 0 || j + half >= N) break;

                bool valid = true;
                for (int x = i - half; x <= i + half && valid; x++) {
                    for (int y = j - half; y <= j + half; y++) {
                        if (x == i || y == j) { // srednji red ili stupac
                            if (mat[x][y] != 1) valid = false;
                        }
                        else { // ostali dijelovi kvadrata
                            if (mat[x][y] != 0) valid = false;
                        }
                    }
                }
                if (valid) count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}

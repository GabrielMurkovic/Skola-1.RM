#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int mat[20][20]; // zamijeni 20 s većim brojem ako treba
    int minH = 1000000, maxH = 0;

    // unos visina i traženje min i max visine
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
            if (mat[i][j] < minH) minH = mat[i][j];
            if (mat[i][j] > maxH) maxH = mat[i][j];
        }
    }

    int A, B;
    cin >> A >> B;

    long long minTrosak = 1e18;

    // probiramo sve ciljne visine
    for (int cilj = minH; cilj <= maxH; cilj++) {
        long long trosak = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (mat[i][j] < cilj)
                    trosak += (long long)(cilj - mat[i][j]) * A;
                else
                    trosak += (long long)(mat[i][j] - cilj) * B;
            }
        }
        if (trosak < minTrosak) minTrosak = trosak;
    }

    cout << minTrosak << endl;

    return 0;
}

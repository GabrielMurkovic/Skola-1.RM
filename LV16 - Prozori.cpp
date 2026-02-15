#include <iostream>
#include <string>
using namespace std;

int main() {
    int M, N, rez[5] = { 0 };
    cin >> M >> N;

    string zgrada[505]; // Dovoljno veliko za 100 katova
    for (int i = 0; i < 5 * M + 1; i++) cin >> zgrada[i];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int zvjezdica = 0;
            // Samo prebroji zvjezdice u prvom stupcu svakog prozora
            for (int k = 0; k < 4; k++) {
                if (zgrada[5 * i + 1 + k][5 * j + 1] == '*') zvjezdica++;
            }
            rez[zvjezdica]++;
        }
    }

    for (int i = 0; i < 5; i++) cout << rez[i] << " ";
    return 0;
}

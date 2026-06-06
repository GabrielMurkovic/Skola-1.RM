#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    int N;
    cin >> N;

    int neuspjele = 0;

    for (int i = 0; i < N; i++) {
        int V;
        cin >> V;

        if (V <= M) {
            M -= V;
        }
        else {
            neuspjele++;
        }
    }

    cout << neuspjele << endl;

    return 0;
}
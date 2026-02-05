#include <iostream>
using namespace std;

int main() {
    int N, K;

    cout << "Unesi koliko je natjecatelja bilo: ";
    cin >> N;
    if (N < 1 || N > 100) return 0;

    cout << "Koji je bio Patrikov broj (1 do N): ";
    cin >> K;
    if (K < 1 || K > N) return 0;

    int n[100];
    int rez[100];
    int br = 0;

    for (int i = 0; i < N; i++) {
        cout << "Unesi koliko bodova ima " << i + 1 << ". natjecatelj: ";
        cin >> n[i];
    }

    int patrikBodovi = n[K - 1];

    for (int i = 0; i < N; i++) {
        if (n[i] > patrikBodovi) {
            rez[br] = i + 1;
            br++;
        }
    }

    cout << "Natjecatelji koji imaju vise bodova od Patrika: ";
    for (int i = 0; i < br; i++) {
        if (i > 0) cout << " i ";
        cout << rez[i];
    }
    cout << endl;

    return 0;
}



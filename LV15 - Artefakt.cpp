#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;                // broj trgovaca
    int Pi[10];              // polje za njihove ponude

    for (int i = 0; i < N; i++) {
        cin >> Pi[i];        // unos svake ponude
    }

    int najmanja = 101;      // postavljamo početnu vrijednost veće od max moguće ponude
    bool jedinstvena;

    // prolazimo kroz sve ponude
    for (int i = 0; i < N; i++) {
        jedinstvena = true;  // pretpostavimo da je trenutna ponuda jedinstvena

        // provjeravamo sve ostale ponude
        for (int j = 0; j < N; j++) {
            if (i != j && Pi[i] == Pi[j]) {
                jedinstvena = false;  // ako se ponavlja, nije jedinstvena
                break;                // izlazimo iz unutarnje petlje
            }
        }

        // ako je jedinstvena i manja od trenutnog minimuma → update minimuma
        if (jedinstvena && Pi[i] < najmanja) {
            najmanja = Pi[i];
        }
    }

    // ako nema jedinstvene ponude → ispis 0
    if (najmanja == 101) cout << 0;
    else cout << najmanja;

    return 0;
}


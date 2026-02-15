#include <iostream>
using namespace std;

int main() {
    int L, N;
    cin >> L >> N;

    // Polja za pohranu početka (Pi) i kraja (Ki) za svakog gledatelja
    int Pi[1001];
    int Ki[1001];

    // 1. DIO: Pronalaženje onoga tko je MISLIO da će dobiti najviše
    int max_planirano = -1;
    int gledatelj_planirao = 0;

    for (int i = 1; i <= N; i++) {
        cin >> Pi[i] >> Ki[i];

        int planirano = Ki[i] - Pi[i] + 1;

        // Ako je ovaj planirao više, on postaje novi "pobjednik" prvog dijela
        if (planirano > max_planirano) {
            max_planirano = planirano;
            gledatelj_planirao = i;
        }
    }

    // 2. DIO: Pronalaženje onoga tko je STVARNO dobio najviše
    int orehnjaca[1001] = { 0 }; // 0 znači da je komad slobodan
    int max_dobio = -1;
    int gledatelj_dobio = 0;

    for (int i = 1; i <= N; i++) {
        int trenutno_dobio = 0;

        // Gledatelj 'i' ide redom i uzima samo slobodne komade u svom rasponu
        for (int j = Pi[i]; j <= Ki[i]; j++) {
            if (orehnjaca[j] == 0) {
                orehnjaca[j] = 1; // Označavamo komad kao zauzet
                trenutno_dobio++;
            }
        }

        // Provjera je li ovaj gledatelj uzeo više komada od prethodnog najboljeg
        if (trenutno_dobio > max_dobio) {
            max_dobio = trenutno_dobio;
            gledatelj_dobio = i;
        }
    }

    // Finalni ispis prema zahtjevima zadatka
    cout << gledatelj_planirao << endl;
    cout << gledatelj_dobio << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int temperatura1, temperatura2, temperatura3;
    int ispod_nule = 0, nula_ili_više = 0;

    // Unos temperatura za tri dana
    cout << "Unesite temperaturu za prvi dan: ";
    cin >> temperatura1;
    cout << "Unesite temperaturu za drugi dan: ";
    cin >> temperatura2;
    cout << "Unesite temperaturu za treæi dan: ";
    cin >> temperatura3;

    // Provjera za prvi dan
    if (temperatura1 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_više++;
    }

    // Provjera za drugi dan
    if (temperatura2 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_više++;
    }

    // Provjera za treæi dan
    if (temperatura3 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_više++;
    }

    // Ispis rezultata
    cout << "Broj dana sa temperaturom ispod nule: " << ispod_nule << endl;
    cout << "Broj dana sa temperaturom 0 ili više: " << nula_ili_više << endl;

    return 0;
}

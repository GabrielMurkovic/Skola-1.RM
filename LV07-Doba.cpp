#include <iostream>      // Biblioteka za unos i ispis
using namespace std;     // Koristimo standardni prostor imena

int main() {

    int mjesec, dan;     // Varijable za unos mjeseca i dana
    cout << "Unesite mjesec (1-12): ";
    cin >> mjesec;       // Unos mjeseca
    cout << "Unesite dan (1-31): ";
    cin >> dan;          // Unos dana

    // Provjera osnovne ispravnosti unosa
    if (mjesec < 1 || mjesec > 12 || dan < 1 || dan > 31) {
        cout << "Pogresan unos!" << endl;
        return 0;        // Prekid programa zbog neispravnog unosa
    }

    string doba;         // Varijabla u koju spremamo rezultat – godišnje doba

    // Određivanje godišnjeg doba prema mjesecu i danu (switch-case obavezno!)
    switch (mjesec) {

    case 1:
    case 2:
        doba = "ZIMA";       // Siječanj i veljača su uvijek zima
        break;

    case 3:
        if (dan < 21) doba = "ZIMA";   // Do 20.3 je zima
        else doba = "PROLJECE";        // Od 21.3 je proljeće
        break;

    case 4:
    case 5:
        doba = "PROLJECE";  // Travanj i svibanj su proljeće
        break;

    case 6:
        if (dan < 21) doba = "PROLJECE"; // Do 20.6 proljeće
        else doba = "LJETO";             // Od 21.6 ljeto
        break;

    case 7:
    case 8:
        doba = "LJETO";      // Srpanj i kolovoz su ljeto
        break;

    case 9:
        if (dan < 23) doba = "LJETO";    // Do 22.9 ljeto
        else doba = "JESEN";             // Od 23.9 jesen
        break;

    case 10:
    case 11:
        doba = "JESEN";      // Listopad i studeni su jesen
        break;

    case 12:
        if (dan < 21) doba = "JESEN";    // Do 20.12 jesen
        else doba = "ZIMA";              // Od 21.12 zima
        break;

    default:
        cout << "Pogresan unos!" << endl;
        return 0;
    }

    // Ispis rezultata
    cout << doba << endl;

    return 0;   // Kraj programa
}

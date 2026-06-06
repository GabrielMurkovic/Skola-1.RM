#include <iostream>
#include <string>
using namespace std;

int main() {
    string niz;
    cout << "Unesi niz manji od 40 znakova: ";
    cin >> niz; // unos bez razmaka


    if (niz.size() > 40) {
        cout << "Unijeli ste previse znakova!" << endl;
        return 0;
    }

    // provjera razmaka
    bool imaRazmak = false;
    for (int i = 0; i < niz.size(); i++) {
        if (niz[i] == ' ') {
            imaRazmak = true;
            break;
        }
    }

    if (imaRazmak) {
        cout << "Niz sadrzi razmak!" << endl;
        return 0;
    }

    // provjera palindroma
    bool palindrom = true;
    for (int i = 0; i < niz.size() / 2; i++) {
        if (niz[i] != niz[niz.size() - 1 - i]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom)
        cout << "Niz je palindrom!" << endl;
    else
        cout << "Niz nije palindrom!" << endl;

    return 0;
}

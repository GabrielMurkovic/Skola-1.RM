#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_BROJ = 20;
const int SIRINA_CELIJE = 4;

void ispis_vodoravne_linije() {
    int ukupna_sirina = (MAX_BROJ + 1) * SIRINA_CELIJE + (MAX_BROJ + 1);
    cout << setfill('-') << setw(ukupna_sirina) << "" << endl;
    cout << setfill(' ');
}

int main() {

    cout << right;

    ispis_vodoravne_linije();
    cout << "| " << setw(SIRINA_CELIJE - 1) << "X";

    for (int stupac = 1; stupac <= MAX_BROJ; ++stupac) {
        cout << "| " << setw(SIRINA_CELIJE - 1) << stupac;
    }
    cout << "|" << endl;

    ispis_vodoravne_linije();

    for (int redak = 1; redak <= MAX_BROJ; ++redak) {

        cout << "| " << setw(SIRINA_CELIJE - 1) << redak;

        for (int stupac = 1; stupac <= MAX_BROJ; ++stupac) {
            int umnozak = redak * stupac;
            cout << "| " << setw(SIRINA_CELIJE - 1) << umnozak;
        }

        cout << "|" << endl;
        ispis_vodoravne_linije();
    }

    return 0;
}

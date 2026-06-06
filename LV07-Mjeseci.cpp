#include <iostream>
using namespace std;

int main() {

    int mjesec, godina;

    cout << "Unesite redni broj mjeseca (1-12): ";
    cin >> mjesec;

    cout << "Unesite godinu: ";
    cin >> godina;

    int brojDana;

    switch (mjesec) {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        brojDana = 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        brojDana = 30;
        break;

    case 2:
        if ((godina % 400 == 0) || (godina % 4 == 0 && godina % 100 != 0)) {
            brojDana = 29;
        }
        else {
            brojDana = 28;
        }
        break;

    default:
        cout << "Greska: nepostojeci mjesec!" << endl;
        return 0;
    }

    cout << "Mjesec " << mjesec << " u godini " << godina
        << " ima " << brojDana << " dana." << endl;

    return 0;
}
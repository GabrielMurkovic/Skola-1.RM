#include <iostream>
using namespace std;

int main() {

    int kilometri, potrosnjaNa100km, cijenaGoriva;
    int hrana, nocenje, cestarine;
    int brojNocenja;

    cout << "Unesite broj prijeđenih kilometara: ";
    cin >> kilometri;

    cout << "Unesite potrošnju vozila (litara na 100 km): ";
    cin >> potrosnjaNa100km;

    cout << "Unesite cijenu goriva po litri (u eurima): ";
    cin >> cijenaGoriva;

    int potrosenoGorivo = (kilometri * potrosnjaNa100km) / 100;

    int ukupniTrosakGoriva = potrosenoGorivo * cijenaGoriva;

    cout << "Potrošeno goriva: " << potrosenoGorivo << " litara" << endl;
    cout << "Ukupni trošak goriva za putovanje: " << ukupniTrosakGoriva << " eura" << endl;

    cout << "Unesite trošak hrane po osobi (u eurima): ";
    cin >> hrana;

    cout << "Unesite trošak noćenja po osobi (u eurima): ";
    cin >> nocenje;

    cout << "Unesite broj noćenja: ";
    cin >> brojNocenja;

    cout << "Unesite ukupne troškove cestarina (u eurima): ";
    cin >> cestarine;

    int ukupniTrosak = ukupniTrosakGoriva + (hrana * 2) + (nocenje * 2 * brojNocenja) + cestarine;

    cout << "Ukupni trošak putovanja: " << ukupniTrosak << " eura" << endl;

    return 0;
}
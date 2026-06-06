#include <iostream>
#include <algorithm> // Za funkciju sort()
using namespace std;

int main() {
    int a, b, c;

    // Unos tri broja
    cout << "Unesite tri broja: ";
    cin >> a >> b >> c;

    // Sortiraj brojeve u rastuæem redoslijedu
    int brojevi[3] = { a, b, c };
    sort(brojevi, brojevi + 3);

    // Nakon sortiranja, brojevi[0] je najmanji, brojevi[1] srednji, brojevi[2] najveæi
    a = brojevi[0];
    b = brojevi[1];
    c = brojevi[2];

    // Provjera Pitagorine trojke
    if (a * a + b * b == c * c) {
        cout << "Brojevi formiraju Pitagorinu trojku." << endl;
    }
    else {
        cout << "Brojevi ne formiraju Pitagorinu trojku." << endl;
    }

    return 0;
}

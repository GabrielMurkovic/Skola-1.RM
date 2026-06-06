#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int P, Q;
    cin >> P >> Q;

    // Određujemo dva kandidata s najviše glasova u prvom krugu
    int prvi, drugi;

    // Prvi maksimum
    if (a > b && a > c && a > d) prvi = 0;
    else if (b > a && b > c && b > d) prvi = 1;
    else if (c > a && c > b && c > d) prvi = 2;
    else prvi = 3;

    // Drugi maksimum
    if (prvi != 0 && ((a > b && a > c && a > d) || (a != glasovi[prvi]))) drugi = 0;
    else if (prvi != 1 && ((b > a && b > c && b > d) || (b != glasovi[prvi]))) drugi = 1;
    else if (prvi != 2 && ((c > a && c > b && c > d) || (c != glasovi[prvi]))) drugi = 2;
    else drugi = 3;

    // Određujemo abecedni red
    int manji = (prvi < drugi) ? prvi : drugi;
    int veci = (prvi > drugi) ? prvi : drugi;

    // Određujemo pobjednika drugog kruga
    char pobjednik = (P > Q) ? ('A' + manji) : ('A' + veci);

    cout << pobjednik << endl;
    return 0;
}

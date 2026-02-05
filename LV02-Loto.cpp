#include <iostream>
using namespace std;

int main() {
    // Deklaracija sedam varijabli za sedam izvučenih brojeva
    int b1, b2, b3, b4, b5, b6, b7;

    // Unos sedam brojeva koje unosimo redom kako su izvučeni
    cin >> b1;
    cin >> b2;
    cin >> b3;
    cin >> b4;
    cin >> b5;
    cin >> b6;
    cin >> b7;

    // Izdvajanje znamenki jedinica prvih šest brojeva
    // operator % 10 daje ostatak pri dijeljenju s 10, tj. zadnju znamenku broja
    int j1 = b1 % 10;
    int j2 = b2 % 10;
    int j3 = b3 % 10;
    int j4 = b4 % 10;
    int j5 = b5 % 10;
    int j6 = b6 % 10;

    // Zbrajanje svih znamenki jedinica
    int zbroj = j1 + j2 + j3 + j4 + j5 + j6;

    // Formiranje Joker broja od tih znamenki jedinica
    // Prva znamenka (od prvog broja) postaje znamenka stotisućica,
    // druga postaje desettisućica, i tako redom sve do zadnje znamenke jedinica.
    int joker = j1 * 100000 + j2 * 10000 + j3 * 1000 + j4 * 100 + j5 * 10 + j6;

    // Izračunavanje ostatka pri dijeljenju Joker broja sa 101
    // To se radi pomoću operatora % (modulo)
    int ostatak = joker % 101;

    // Ispis traženih vrijednosti
    // U prvom retku ispisuje se zbroj znamenki jedinica
    cout << zbroj << endl;
    // U drugom retku ispisuje se ostatak pri dijeljenju Joker broja sa 101
    cout << ostatak << endl;

    return 0; }// završetak programa 

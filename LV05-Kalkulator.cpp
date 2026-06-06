#include <iostream>
using namespace std;

int main() {
    double a, b, rezultat;
    char operacija;

    cout << "Unesi prvi broj: ";
    cin >> a;
    cout << "Unesi drugi broj: ";
    cin >> b;
    cout << "Unesi operaciju (+, -, *, /): ";
    cin >> operacija;

    if (operacija == '+') {
        rezultat = a + b;
        cout << "Rezultat je: " << rezultat << endl;
    }
    else if (operacija == '-') {
        rezultat = a - b;
        cout << "Rezultat je: " << rezultat << endl;
    }
    else if (operacija == '*') {
        rezultat = a * b;
        cout << "Rezultat je: " << rezultat << endl;
    }
    else if (operacija == '/') {
        if (b != 0) {
            rezultat = a / b;
            cout << "Rezultat je: " << rezultat << endl;
        }
        else {
            cout << "Greska: dijeljenje s nulom nije dozvoljeno!" << endl;
        }
    }
    else {
        cout << "Nepoznata operacija!" << endl;
    }

    return 0;
}

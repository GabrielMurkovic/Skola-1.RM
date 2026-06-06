#include <iostream>
using namespace std;

int main() {

    int a, b;
    char op;

    cout << "Unesite dva broja i operator: ";
    cin >> a >> b >> op;

    int rezultat;

    switch (op) {

    case '+':
        rezultat = a + b;
        break;

    case '-':
        rezultat = a - b;
        break;

    case '*':
        rezultat = a * b;
        break;

    case '/':
        if (b == 0) {
            cout << "Greska: dijeljenje s nulom!" << endl;
            return 0;
        }
        rezultat = a / b;
        break;

    case '%':
        if (b == 0) {
            cout << "Greska: modulo s nulom!" << endl;
            return 0;
        }
        rezultat = a % b;
        break;

    default:
        cout << "Greska: nepoznat operator!" << endl;
        return 0;
    }

    cout << a << op << b << "=" << rezultat << endl;

    return 0;
}
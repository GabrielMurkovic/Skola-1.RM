#include <iostream>
using namespace std;

int main() {

    char znak;

    cout << "Unesite jedan znak: ";
    cin >> znak;

    switch (znak) {

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        cout << "OPERATOR" << endl;
        break;

    case 'A': case 'E': case 'I': case 'O': case 'U':
    case 'a': case 'e': case 'i': case 'o': case 'u':
        cout << "SAMOGLASNIK" << endl;
        break;

    case '.':
    case ',':
    case ';':
    case ':':
    case '?':
    case '!':
        cout << "INTERPUNKCIJA" << endl;
        break;

    default:
        if (znak >= '0' && znak <= '9') {
            cout << "ZNAMENKA" << endl;
        }
        else {
            cout << "OSTALI ZNAKOVI" << endl;
        }
    }

    return 0;
}
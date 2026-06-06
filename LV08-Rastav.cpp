#include <iostream>
#include <string>
using namespace std;

int main() {
    string broj;
    cin >> broj;

    if (broj.length() != 6) {
        cout << "Pogresan unos!" << endl;
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            cout << ".";
        }

        cout << broj[i];

        for (int j = i + 1; j < 6; j++) {
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}
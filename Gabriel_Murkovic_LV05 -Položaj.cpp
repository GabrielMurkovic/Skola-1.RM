#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Unesi koordinate tocke (x y): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Prvi kvadrant" << endl;
    else if (x < 0 && y > 0)
        cout << "Drugi kvadrant" << endl;
    else if (x < 0 && y < 0)
        cout << "Treci kvadrant" << endl;
    else if (x > 0 && y < 0)
        cout << "Cetvrti kvadrant" << endl;
    else if (x == 0 && y == 0)
        cout << "Ishodiste" << endl;
    else if (x == 0)
        cout << "Os y" << endl;
    else if (y == 0)
        cout << "Os x" << endl;

    return 0;
}

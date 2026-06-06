#include <iostream>   

using namespace std;     

int main() {

    int dan;        
    cout << "Unesite redni broj dana u tjednu (1-7): ";
    cin >> dan;        

    if (dan < 1 || dan > 7) {
        cout << "Pogresan unos!" << endl;
        return 0;        
    }

    cout << "Dani od unesenog do kraja tjedna:" << endl;

    switch (dan) {

    case 1:
        cout << "PONEDJELJAK - ";
    case 2:
        cout << "UTORAK - ";
    case 3:
        cout << "SRIJEDA - ";
    case 4:
        cout << "CETVRTAK - ";
    case 5:
        cout << "PETAK - ";
    case 6:
        cout << "SUBOTA - ";
    case 7:
        cout << "NEDJELJA";
        break;

    default:
        cout << "Pogresan unos!";
    }

    cout << endl;
    return 0;  

}

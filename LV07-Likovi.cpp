#include <iostream>     
#include <cmath>       
using namespace std;     

int main() {

    char izbor;          

  
    cout << "IZBORNIK:" << endl;
    cout << "K - Krug" << endl;
    cout << "V - Kvadrat" << endl;
    cout << "R - Pravokutnik" << endl;
    cout << "T - Pravokutni trokut" << endl;
    cout << "Unesite odabir: ";
    cin >> izbor;        

    double a, b, r;      
    double povrsina, opseg; 

    switch (toupper(izbor)) { 

       
    case 'K':
        cout << "Unesite polumjer r: ";
        cin >> r;

        if (r <= 0) {   
            cout << "Pogresan unos polumjera!" << endl;
            return 0;
        }

        povrsina = 3.14159 * r * r;       
        opseg = 2 * 3.14159 * r;          
        cout << "Povrsina kruga = " << povrsina << endl;
        cout << "Opseg kruga = " << opseg << endl;
        break;

       
    case 'V':
        cout << "Unesite duljinu stranice a: ";
        cin >> a;

        if (a <= 0) {
            cout << "Pogresan unos stranice!" << endl;
            return 0;
        }

        povrsina = a * a;     
        opseg = 4 * a;       

        cout << "Povrsina kvadrata = " << povrsina << endl;
        cout << "Opseg kvadrata = " << opseg << endl;
        break;

      
    case 'R':
        cout << "Unesite stranice a i b: ";
        cin >> a >> b;

        if (a <= 0 || b <= 0) {
            cout << "Pogresan unos stranica!" << endl;
            return 0;
        }

        povrsina = a * b;        
        opseg = 2 * (a + b);     

        cout << "Povrsina pravokutnika = " << povrsina << endl;
        cout << "Opseg pravokutnika = " << opseg << endl;
        break;

        
    case 'T':
        cout << "Unesite katete a i b: ";
        cin >> a >> b;

        if (a <= 0 || b <= 0) {
            cout << "Pogresan unos kateta!" << endl;
            return 0;
        }

        
        double c;
        c = sqrt(a * a + b * b);

        povrsina = (a * b) / 2;     
        opseg = a + b + c;         

        cout << "Povrsina pravokutnog trokuta = " << povrsina << endl;
        cout << "Opseg pravokutnog trokuta = " << opseg << endl;
        break;

     
    default:
        cout << "Nepoznat odabir!" << endl;
    }

    return 0;   
}

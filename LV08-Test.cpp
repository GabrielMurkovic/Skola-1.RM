#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double sumaP = 0, sumaN = 0;
    int countP = 0, countN = 0;

    for (int i = 1; i <= N; i++) {
        double ocjena;
        cin >> ocjena;

        if (i % 2 == 0) {
            sumaP += ocjena;
            countP++;
        }
        else {
            sumaN += ocjena;
            countN++;
        }
    }

    double prosjekP = (countP > 0) ? sumaP / countP : 0;
    double prosjekN = (countN > 0) ? sumaN / countN : 0;

    cout << fixed << setprecision(2);
    cout << prosjekP << endl;
    cout << prosjekN << endl;

    if (prosjekP > prosjekN) {
        cout << "P" << endl;
    }
    else if (prosjekN > prosjekP) {
        cout << "N" << endl;
    }
    else {
        cout << "PN" << endl;
    }

    return 0;
}


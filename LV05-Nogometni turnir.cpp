#include <iostream>
#include <cmath> // za funkciju abs
using namespace std;

int main() {
    int goloviPrvaDom, goloviDrugaGost, goloviPrvaGost, goloviDrugaDom;

    cout << "Unesi golove (prva domaæin, druga gost, prva gost, druga domaæin): ";
    cin >> goloviPrvaDom >> goloviDrugaGost >> goloviPrvaGost >> goloviDrugaDom;

    int ukupnoPrva = goloviPrvaDom + goloviPrvaGost;
    int ukupnoDruga = goloviDrugaDom + goloviDrugaGost;

    int razlika = 0;
    string pobjednik;

    if (ukupnoPrva > ukupnoDruga) {
        pobjednik = "Prva ekipa";
        razlika = ukupnoPrva - ukupnoDruga;
    }
    else if (ukupnoDruga > ukupnoPrva) {
        pobjednik = "Druga ekipa";
        razlika = ukupnoDruga - ukupnoPrva;
    }
    else { // ukupnoPrva == ukupnoDruga
        if (goloviPrvaGost > goloviDrugaGost) {
            pobjednik = "Prva ekipa";
            razlika = goloviPrvaGost - goloviDrugaGost;
        }
        else if (goloviDrugaGost > goloviPrvaGost) {
            pobjednik = "Druga ekipa";
            razlika = goloviDrugaGost - goloviPrvaGost;
        }
        else { // izjednaèeno i po golovima u gostima
            pobjednik = "Jedanaesterci";
            razlika = 0;
        }
    }

    cout << pobjednik << " – razlika u golovima je " << razlika << endl;

    return 0;
}

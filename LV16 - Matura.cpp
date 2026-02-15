#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string dani[7] = { "ponedjeljak","utorak","srijeda","cetvrtak","petak","subota","nedjelja" };
    string predmeti[3] = { "Matematika","Hrvatski","Engleski" };

    double sati[7][3] = {
        {2,1,1},
        {1,2,1.5},
        {0.5,1,0},
        {0,2,0},
        {1.5,0,1.5},
        {0,0,0},
        {1,1.5,0}
    };

    double sum = 0;
    double sumMat = 0;
    double sumHrv = 0;
    double sumEng = 0;

    double minDan = 1000;
    int minDanIndex = 0;

    for (int i = 0; i < 7; i++) {
        double sumD = 0;
        for (int j = 0; j < 3; j++) {
            sum += sati[i][j];
            sumD += sati[i][j];
            if (j == 0) sumMat += sati[i][j];
            if (j == 1) sumHrv += sati[i][j];
            if (j == 2) sumEng += sati[i][j];
        }
        if (sumD < minDan) {
            minDan = sumD;
            minDanIndex = i;
        }
    }

    double minPred = sumMat;
    string minPredName = "Matematika";
    if (sumHrv < minPred) { minPred = sumHrv; minPredName = "Hrvatski"; }
    if (sumEng < minPred) { minPred = sumEng; minPredName = "Engleski"; }

    cout << fixed << setprecision(1);
    cout << "Najmanje je ucio " << minPredName << " " << minPred << " sati." << endl;
    cout << "Ukupno je ucio " << sum << " sati." << endl;
    cout << "Dan s najmanje ucenja: " << dani[minDanIndex] << " " << minDan << " sati." << endl;
}

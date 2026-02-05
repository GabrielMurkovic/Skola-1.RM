
#include <iostream>
using namespace std;

int main(){

int F[30]={};
int G[30] = {};
int n;
cout << "Unesite broj ucenika (max 30): ";
cin >> n;
if (n < 1 || n > 30) {
	cout << "Pogresan broj ucenika!";
	return 0;}

for (int i = 0; i < n; i++) {
cout << i+1 << " 1.F: ";
	cin >> F[i];
	if (F[i] > 5 || F[i] < 1) {
		cout << "Unijeli ste pogresnu ocjenu: ";
		return 0;
	}
cout << i+1 << " 1.G: ";
	cin >> G[i];

	if (G[i] > 5 || G[i] <1) {
		cout << "Unijeli ste pogresnu ocjenu: ";
		return 0;}
}

for (int i = 0; i < n; i++) {
	if (F[i] > G[i]) {
		cout << "1.F" << endl;
}
	else if (G[i] > F[i]) {
		cout << "1.G" << endl;
	}
	else {
	cout << "ISTO" << endl;
	}
}

}


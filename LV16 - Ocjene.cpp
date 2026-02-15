

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
string mjeseci[10] ={"rujan ","listopad","studeni","prosinac","sijecanj","veljaca","ozujak","travanj","svibanj","lipanj"};
int br = 0;
int br1 = 0;
int sum = 0;
int ocjene[10][3] = {
{0,0,0},
{5,0,4},
{0,0,2},
{0,2,0},
{0,0,0},
{5,0,0},
{0,3,5},
{0,0,0},
{4,0,4},
{0,2,0}
};
for (int i = 0; i < 10; i++) {
	cout << mjeseci[i] << ": ";
	for (int j = 0; j < 3; j++) {
		sum += ocjene[i][j];
		if (ocjene[i][j] > 0) {
			cout << ocjene[i][j] << " ";
			br1 ++;
		}
		if (ocjene[i][j] == 5) {
			br++;
		}
}
cout << endl;
}
double prosjek = (double)sum/br1;
int prosjecna = round(prosjek);

if (prosjecna == 5) {
	cout << "Odličan";
}
else if (prosjecna == 4) {
	cout << "Vrlo dobar ";
}
else if (prosjecna == 3) {
	cout << "Dobar ";
}
else if (prosjecna == 2) {
	cout << "Dovoljan ";
}
else {
	cout << "Nedovoljan";
}
}


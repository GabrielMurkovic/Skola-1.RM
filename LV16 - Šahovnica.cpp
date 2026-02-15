
#include <iostream>
using namespace std;

int main()
{
int n;
cout << "Unesi broj redaka: ";
cin >> n;
int matrix[20][20];

for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cin >> matrix[i][j];
	}
}
int promjeni0 = 0;
int promjeni1 = 0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if ((i + j) % 2 == 0) {
            if (matrix[i][j] != 0) promjeni0++;
            if (matrix[i][j] != 1) promjeni1++;
        }
        else {
            if (matrix[i][j] != 1) promjeni0++;
            if (matrix[i][j] != 0) promjeni1++;
        }
    }
}
if (promjeni0 < promjeni1){
    cout << promjeni0 << endl;}
else{
cout << promjeni1 << endl;
}

return 0;

}

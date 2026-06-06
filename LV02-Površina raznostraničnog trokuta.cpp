
#include <iostream>
#include <cmath>
using namespace std;

int main(){
 int a,b,c;
 cout << "Unesi a: ";
 cin >> a;
 cout << "Unesi b: ";
 cin >> b;
 cout << "Unesi c: ";
 cin >> c;
 if (a + b <= c || a + c <= b || b + c <= a) {
     cout << "Nevalidan trokut!" << endl;
     return 0;
 }

 
 double s =(a + b + c)/2.0;
double P = sqrt(s*(s-a)*(s-b)*(s-c));
cout << "Povrsina je: "<<P << endl;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
int n,a;
cout << "Unesi a: ";
cin >> n;
cout << "Unesi b: ";
cin >> a;
double h = (double) sqrt(pow(n,2)+pow(a,2));
double p = (double)(n*a)/2.0;
cout << "Hipotenuza je: " << h << endl;
cout << "Površina je: " << p << endl;
}

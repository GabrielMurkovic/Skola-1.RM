#include <iostream>
#include <string>
#include <stack>
using namespace std;

string bintodec(int broj) {
	stack <int> s;
	string binstring = "";
	while(broj>0) {
		int rem = broj%2;
		s.push(rem);
		broj = broj/2;

	}

	while(!s.empty()){
	binstring.append(to_string(s.top()));
	s.pop();
	}
	return binstring;
}
int main() {
	cout << bintodec(42);
}


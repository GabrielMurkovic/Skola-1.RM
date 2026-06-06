
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string bintodec(int decbroj) {
	stack <int> remstack;
	string binstring ="";

	while (decbroj > 0) {
		int rem = decbroj %2;
		remstack.push(rem);
		decbroj = decbroj /2;
	}
	while (!remstack.empty()) {
		binstring.append(to_string(remstack.top()));
		remstack.pop();
	}
	return binstring;
}
int main() {
	int unos;
	cin >> unos;
	cout << bintodec(unos);
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool izjednaceno(string izraz) {
	stack <char> s;
	int str_len = izraz.length();

	for (int i = 0; i < str_len; i++) {
	char znak = izraz[i];
	if (znak == '(') {
		s.push(znak);
		}
	else if (znak == ')') {
		if(s.empty()) return false;
		s.pop();
	}
	}
	return s.empty();
}
int main() {
	string unos;
	getline(cin, unos);

	if(izjednaceno(unos)){
	cout << "Izjednaceno";
	}
	else{
	cout << "Nije izjednaceno";}}

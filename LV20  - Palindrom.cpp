#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

bool jepalindrom(string izraz) {
	stack <char> s;
	int str_len = izraz.length();
	string filtrirano;

	for (int i = 0; i < str_len; i++) {
		char znak = izraz[i];
		if (isalpha(znak)) {
		filtrirano += tolower(znak);
		}
	}
	for (int i = 0; i < filtrirano.length(); i++) {
	s.push(filtrirano[i]);

	}
	for (int i = 0; i < filtrirano.length(); i++) {
	if(s.empty()  || filtrirano[i] != s.top()){
		
	return false;

	}
	s.pop();
	}
	return true;
}
int main(){
string unos;
getline(cin,unos);
if(jepalindrom(unos)){
cout << "palindrom";
}else{
cout << "Nije palindrom ";}}
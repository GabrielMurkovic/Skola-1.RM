
#include <iostream>
#include <string>
#include <queue>
using namespace std;

char prvoslovo(string Ime) {
  return Ime[0];
  }

int main(){
int brojimena = 0;
queue <string> Imena;

 while(true){
 string Ime;
 cin >> Ime;
 if(Ime != "Kraj"){
 Imena.push(Ime);
 brojimena++;}
 if(Ime == "Kraj"){
 break;
}}

 cout << brojimena << " ";
while(!Imena.empty()){
string Ime = Imena.front();
cout << prvoslovo(Ime) << ". ";
Imena.pop();
}

}



#include <iostream>
#include <queue>
#include <string>
#include <ctime>
using namespace std;

bool jetroznamenkast(int broj) {
	return (broj >= 100 && broj <= 999);
	
}
int main()
{

queue <int> red;
int n;
srand(time(0));

cin >> n;
for (int i = 0; i < n; i++) {
	int broj = rand() % 1000+1;
	red.push(broj);
}

while (!red.empty()) {
	int broj = red.front();
	if (jetroznamenkast(broj)) {
		cout << broj << " ";
	}
	red.pop();
}
}


#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

bool postoji(list<int>& l, int x) {
    for (int v : l)
        if (v == x) return true;
    return false;
}

list<int> generiraj() {
    list<int> l;
    while (l.size() < 7) {
        int x = rand() % 45 + 1;
        if (!postoji(l, x))
            l.push_back(x);
    }
    return l;
}

int podudaranja(list<int>& a, list<int>& b) {
    int br = 0;
    for (int x : a)
        for (int y : b)
            if (x == y) br++;
    return br;
}

int main() {
    srand(time(0));

    list<int> prva = generiraj();

    list<int> tvoja = { 1,2,3,4,5,6,7 };

    cout << "Podudaranja: " << podudaranja(prva, tvoja) << endl;

    // simulacija
    int count = 0;

    while (true) {
        count++;
        prva = generiraj();

        int p = podudaranja(prva, tvoja);

        if (p >= 3) {
            cout << "3+ podudaranja nakon: " << count << endl;
            break;
        }
    }

    return 0;
}
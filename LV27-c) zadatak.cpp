#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool palin(const vector<char>& v, int l, int r) {
    while (l < r) {
        if (v[l] != v[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s = "ersgecsasirimamirissrwerssaerdesrxmadamresokoffesfdsfsdds";

    vector<char> v(s.begin(), s.end());

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 2; j < v.size(); j++) {
            if (palin(v, i, j)) {
                for (int k = i; k <= j; k++)
                    cout << v[k];
                cout << endl;
            }
        }
    }

    return 0;
}


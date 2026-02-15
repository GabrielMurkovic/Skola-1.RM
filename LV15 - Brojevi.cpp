#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Koliko je brojeva: ";
    cin >> N;

    int n[9999];

    for (int i = 0; i < N; i++) {
        cin >> n[i];
    }

    int max = -1;
    int broj = -1;
    int max1 = -1;

    for (int i = 0; i < N; i++) {
        if (n[i] > max) {
            max = n[i];
            broj = i;
        }
    }

    for (int i = 0; i < N; i++) {
        if (n[i] != max && n[i] > max1) {
            max1 = n[i];
        }
    }

    if (max1 == -1)
        cout << 0;
    else
        cout << max1;

    return 0;
}




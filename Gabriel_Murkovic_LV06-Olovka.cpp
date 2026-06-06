#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int stotice = N / 100;       // znamenka stotica
    int jedinice = N % 10;       // znamenka jedinica

    if (jedinice > stotice) {
        cout << "DESNI NAGIB" << endl;
    }
    else if (jedinice < stotice) {
        cout << "LIJEVI NAGIB" << endl;
    }
    else {
        cout << "RAVNOTEZA" << endl;
    }

    return 0;
}

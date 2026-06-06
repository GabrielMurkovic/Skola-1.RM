#include <iostream>
using namespace std;

int main() {
    char slovo;
    cout << "Unesi jedno slovo: ";
    cin >> slovo;

    // Pretvorimo slovo u veliko radi jednostavnijeg usporeðivanja
    if (slovo >= 'a' && slovo <= 'z') {
        slovo = slovo - 'a' + 'A';
    }

    if (slovo == 'A') cout << "Alfa" << endl;
    else if (slovo == 'B') cout << "Bravo" << endl;
    else if (slovo == 'C') cout << "Charlie" << endl;
    else if (slovo == 'D') cout << "Delta" << endl;
    else if (slovo == 'E') cout << "Echo" << endl;
    else if (slovo == 'F') cout << "Foxtrot" << endl;
    else if (slovo == 'G') cout << "Golf" << endl;
    else if (slovo == 'H') cout << "Hotel" << endl;
    else if (slovo == 'I') cout << "India" << endl;
    else if (slovo == 'J') cout << "Juliett" << endl;
    else if (slovo == 'K') cout << "Kilo" << endl;
    else if (slovo == 'L') cout << "Lima" << endl;
    else if (slovo == 'M') cout << "Mike" << endl;
    else if (slovo == 'N') cout << "November" << endl;
    else if (slovo == 'O') cout << "Oscar" << endl;
    else if (slovo == 'P') cout << "Papa" << endl;
    else if (slovo == 'Q') cout << "Quebec" << endl;
    else if (slovo == 'R') cout << "Romeo" << endl;
    else if (slovo == 'S') cout << "Sierra" << endl;
    else if (slovo == 'T') cout << "Tango" << endl;
    else if (slovo == 'U') cout << "Uniform" << endl;
    else if (slovo == 'V') cout << "Victor" << endl;
    else if (slovo == 'W') cout << "Whiskey" << endl;
    else if (slovo == 'X') cout << "X-ray" << endl;
    else if (slovo == 'Y') cout << "Yankee" << endl;
    else if (slovo == 'Z') cout << "Zulu" << endl;
    else cout << "Nepozanto slovo!" << endl;

    return 0;
}

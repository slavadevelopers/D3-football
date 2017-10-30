#include <iostream>

using namespace std;

int main()
{
    short a;
    cin >> a;
    if (a == 0) {
        cout << "LOSE" << endl;
    }
    if (a == 1) {
        cout << "DRAW" << endl;
    }
    if (a == 3) {
        cout << "WIN" << endl;
    }
    return 0;
}

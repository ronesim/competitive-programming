#include <iostream>

using namespace std;

int main() {
    int t, a, b;
    cin >> t; 
    while (t --) {
        cin >> a >> b;
        if (abs(a - b) <= 1) cout << "Ok" << endl;
        else {
            if ((a + b) % 2) {
                cout << (a + b) / 2 << ' ' << (a + b) / 2 + 1 << endl;
            } else {
                cout << (a + b) / 2 << ' ' << (a + b) / 2 << endl;
            }
        }
    }
    return 0;
}
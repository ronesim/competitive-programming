#include <iostream>

using namespace std;

int main() {
    int xr, yr, xw, yw;
    cin >> xr >> yr >> xw >> yw;
    if (xr * xr + yr * yr > xw * xw + yw * yw) {
        cout << "Wil" << endl;
        return 0;
    }
    if (xr * xr + yr * yr < xw * xw + yw * yw) {
        cout << "Russo" << endl;
        return 0;
    }
    cout << "Empate" << endl;
    return 0;
}
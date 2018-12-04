// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, trees, col;
    char row, pos;
    cin >> n >> trees;
    int start = 0;
    for (int i = 0; i < trees; i++) {
        cin >> col >> row;
        if (row == 'M') {
            start = col - 2;
            if (start >= n) cout << "Yes" << endl;
            else cout << "No" << endl;
            return 0;
        }

        if (start > 0 && col - start <= 3 && pos == row) {
            cout << "No" << endl;
            return 0;
        }

        if (start == col) {
            cout << "No" << endl;
            return 0;
        }

        start = col;
        if (row == 'S') pos = 'H';
        else pos = 'S';

        if (start >= n) {
            break;
        }
    }
    cout<< "Yes" << endl;
    return 0;
}
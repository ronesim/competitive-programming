// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int start = 1, end = 1e9;
    char ans;
    while (1) {
        int mid = (start + end) / 2;
        cout << "Q " << mid <<endl;
        cout.flush();
        cin >> ans;
        if (ans == '=') break;
        if (ans == '<') end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}
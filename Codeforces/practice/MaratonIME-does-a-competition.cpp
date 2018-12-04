#include <iostream>

using namespace std;

int v[4];

int main() {
    int n, problems, ans = 0;
    char sol = 'A';
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> problems;
        v[i % 4] += problems;
    }

    for (int i = 0; i < 4; i++) {
        if (v[i] > ans) {
            ans = v[i];
            sol = 'A' + i;
        }
    }

    cout << sol << endl;
    return 0;
}
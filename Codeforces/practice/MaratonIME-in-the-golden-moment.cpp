// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, x;
    long long sum = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans = ans + (x * sum);
        sum += x;
    }
    
    cout << ans << endl;
    return 0;
}
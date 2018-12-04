#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    cout << (long long int) n * (n - 1) / 2 + 1 << endl;
    return 0;
}
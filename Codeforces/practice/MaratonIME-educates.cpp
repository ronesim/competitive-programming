#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, people;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> people;
        sum += people;
    }

    cout << sum / 5 + (sum % 5 != 0) << endl;
    return 0;    
}
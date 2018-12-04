// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

vector<tuple<int, int, int>> dishes; 
int main() {
    int n, x, y, r;
    char type;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> type >> x >> y >> r;
        if (type == 'R') {
            /*
            for (vector<tuple<int, int, int> >::iterator it = v.begin(); it != v.end(); it++) {
                if (get<0>(it) ...)
            }
            */
            auto it = remove_if(dishes.begin(), dishes.end(), [x, y, r](tuple<int, int, int> dish) {
                return get<0>(dish) == x && get<1>(dish) == y && get<2>(dish) == r;
            });
            if (it != dishes.end()) {
                cout << "Ok" << endl;
                dishes.erase(it, dishes.end());
            } else {
                cout << "No" << endl;
            }
            continue;
        }

        bool found = false;
        for (auto const& dish : dishes) {
            if ((get<0>(dish) - x) * (get<0>(dish) - x) + (get<1>(dish) - y) * (get<1>(dish) - y) >= (r + get<2>(dish)) * (r + get<2>(dish))) 
                continue;
            found = true;
        }
        if (!found) {
            cout << "Ok" << endl;
            dishes.push_back(std::make_tuple(x, y, r));
        } else cout << "No" << endl;
    }
    return 0;
}
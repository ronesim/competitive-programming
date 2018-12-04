// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

vector<tuple<int, int> > problems;
int main() {
    int n, t, e;
    long long int ans = 0, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> t >> e;
        problems.push_back(make_tuple(t, e));
    }
    sort(problems.begin(), problems.end(), [](tuple<int, int> a, tuple<int, int> b) {
        if (get<0>(a) == get<0>(b)) return get<1>(a) < get<1>(b);
        return get<0>(a) < get<0>(b);
    });

    for (auto const& prob : problems) {
        s += get<0>(prob);
        ans += s - get<1>(prob);
    }
    cout << ans << endl;
    return 0;
}
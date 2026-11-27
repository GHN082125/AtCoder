#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k, x;
    cin >> n >> k >> x;
    long long t;
    vector<long long> r;
    while (n--) {
        cin >> t;
        if (t>=x) r.push_back(t);
    }
    if ((long long)r.size()<k) cout << -1;
    else {
        sort(r.rbegin(), r.rend());
        for (int i = 0; i < k; i++) {
            cout << r[i];
        }
    }
}
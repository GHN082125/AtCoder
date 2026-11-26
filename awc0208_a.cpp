#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    long long x;
    long long re=0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        re+=min(m, x/100);
    }
    cout << re;
}
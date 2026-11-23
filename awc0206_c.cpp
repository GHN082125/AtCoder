#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, g;
    cin >> n >> m >> g;
    long long re=n;
    long long x;
    for (int i = 0; i < m; i++) {
        cin >> x;
        re=gcd(re, x);
    }
    if (g%re==0) cout << "Yes";
    else cout << "No";
}
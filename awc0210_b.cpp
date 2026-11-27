#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long re=0;
    for (int i = 0; i < n; i++) {
        if (s[i]=='W') re+=3;
        else re=max(0LL, re-1);
    }
    cout << re;
}
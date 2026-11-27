#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long cnt=0;
    for (int i = 0; i < n; i++) {
        cnt+=s[i]=='7';
    }
    if (cnt>=k) cout << "Yes";
    else cout << "No";
}
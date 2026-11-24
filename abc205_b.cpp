#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long x;
    bool check=true;
    vector<bool> mark(n+1, false);
    while (n--) {
        cin >> x;
        if (mark[x]) check=false;
        mark[x]=true;
    }
    if (check) cout << "Yes";
    else cout << "No";
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b;
    cin >> a >> b;
    if (abs(a-b)==1||abs(a-b)==9) cout << "Yes";
    else cout << "No";
}
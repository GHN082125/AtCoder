#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long re=0;
    long long x;
    while (n--) {
        cin >> x;
        re+=max(0LL, x-10);
    }
    cout << re;
}
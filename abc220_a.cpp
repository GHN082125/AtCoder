#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    cin >> a >> b >> c;
    long long re=-1;
    for (int i = a; i <= b; i++) {
        if (i%c==0) {
            re=i;
            break;
        }
    }
    cout << re;
}
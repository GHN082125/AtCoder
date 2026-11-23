#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long x;
    string re="";
    while (n--) {
        cin >> x;
        if (x==0) re+="-";
        else if (x==10) re+="X";
        else re+=to_string(x);
    }
    cout << re;
}
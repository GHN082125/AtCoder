#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    string s=to_string(n);
    long long re=0;
    for (int i = 2; i < (long long)s.size(); i+=2) {
        re+=9*pow(10, (i/2)-1);
    }
    if (!((long long)s.size()&1)) {
        string first=s.substr(0, (long long)s.size()/2);
        string second=s.substr((long long)s.size()/2);
        string base="1";
        for (int i = 1; i < (long long)s.size()/2; i++) {
            base+="0";
        }
        long long nfirst=stoll(first);
        long long nsecond=stoll(second);
        long long nbase=stoll(base);
        re+=nfirst-nbase+(nfirst<=nsecond);
    }
    cout << re;
}
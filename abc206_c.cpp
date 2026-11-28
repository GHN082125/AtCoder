#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> a(n);
    unordered_map<long long, long long> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    long long re=n*(n-1)/2;
    for (auto i: freq) {
        re-=i.second*(i.second-1)/2;
    }
    cout << re;
}
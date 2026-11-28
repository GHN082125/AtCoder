#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    long long x;
    cin >> x;
    long long re=x/sum*n;
    x-=sum*(x/sum);
    for (int i = 0; x>=0&&i<n; i++) {
        re++;
        x-=a[i];
    }
    cout << re;
}
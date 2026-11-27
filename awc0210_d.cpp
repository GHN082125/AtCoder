#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, x;
    cin >> n >> m >> x;
    long long a, b;
    vector<vector<long long>> dp(n+1, vector<long long>(m, 0));
    dp[0][0]=1;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        for (int j = 0; j < m; j++) {
            long long u=(j+a)%m;
            long long v=(j-b%m+m)%m;
            dp[i][u]=(dp[i][u]+dp[i-1][j])%mod;
            dp[i][v]=(dp[i][v]+dp[i-1][j])%mod;
        }
    }
    cout << dp[n][x];
}
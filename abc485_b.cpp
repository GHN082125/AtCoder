#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));
    long long x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
            if (s[i][j]=='x') {
                x=i;
                y=j;
            }
        }
    }
    long long dx[4]={-1, 1, 0, 0};
    long long dy[4]={0, 0, -1, 1};
    for (int k = 0; k < 4; k++) {
        long long nx=x+dx[k];
        long long ny=y+dy[k];
        if (nx>=0&&nx<n&&ny>=0&&ny<m&&s[nx][ny]=='x') {
            if (k<2) cout << "Drain " << y+1;
            else cout << "Faucet " << x+1;
            return 0;
        }
    }
}
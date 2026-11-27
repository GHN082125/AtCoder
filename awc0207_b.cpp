#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        bool check=false;
        for (int j = 0; j < m; j++) {
            if (s[i][j]=='o') {
                check=true;
                cout << j+1;
                break;
            }
        }
        if (!check) cout << -1;
        cout << "\n";
    }
}
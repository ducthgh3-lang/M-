#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;

        int a;                              
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a;

        vector<vector<long long>> dp(m, vector<long long>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) dp[i][j] = 1;  
                else {
                    if (i > 0) dp[i][j] += dp[i - 1][j];  
                    if (j > 0) dp[i][j] += dp[i][j - 1];   
                }
            }
        }

        cout << dp[m - 1][n - 1] << "\n";
    }
    return 0;
}

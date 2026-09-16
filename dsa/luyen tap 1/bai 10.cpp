#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {             
        vector<vector<int>> c(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> c[i][j];

        const long long INF = LLONG_MAX / 4;
        int full = 1 << n;

   
        vector<vector<long long>> dp(full, vector<long long>(n, INF));
        dp[1][0] = 0;

        for (int mask = 1; mask < full; mask++) {
            if (!(mask & 1)) continue;     
            for (int i = 0; i < n; i++) {
                if (dp[mask][i] == INF) continue;
                if (!(mask & (1 << i))) continue;
                for (int j = 0; j < n; j++) {
                    if (mask & (1 << j)) continue;
                    int nmask = mask | (1 << j);
                    long long nc = dp[mask][i] + c[i][j];
                    if (nc < dp[nmask][j]) dp[nmask][j] = nc;
                }
            }
        }

        long long ans = INF;
        for (int i = 0; i < n; i++)
            if (dp[full - 1][i] != INF)
                ans = min(ans, dp[full - 1][i] + c[i][0]);

        if (n == 1) ans = 0;

        cout << ans << "\n";
    }
    return 0;
}

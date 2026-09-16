#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, s;
    while (cin >> n >> k >> s) {
        if (n == 0 && k == 0 && s == 0) break;   

        vector<vector<long long>> dp(k + 1, vector<long long>(s + 1, 0));
        dp[0][0] = 1;

        for (int v = 1; v <= n; v++)                
            for (int j = k; j >= 1; j--)             
                for (int t = s; t >= v; t--)
                    dp[j][t] += dp[j - 1][t - v];

        cout << dp[k][s] << "\n";
    }
    return 0;
}

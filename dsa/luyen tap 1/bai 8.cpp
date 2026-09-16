#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> x(k);
        for (auto &e : x) cin >> e;
        sort(x.begin(), x.end());       

        bool isFirst = true;
        for (int i = 0; i < k; i++)
            if (x[i] != i + 1) { isFirst = false; break; }

        if (isFirst) {
            for (int i = 0; i < k; i++)
                cout << (n - k + 1 + i) << (i + 1 < k ? " " : "\n");
            continue;
        }

        int i = k - 1;
        while (i >= 0) {
            int low = (i == 0) ? 1 : x[i - 1] + 1;
            if (x[i] > low) break;       
            i--;
        }

        x[i]--;                             
        for (int j = i + 1; j < k; j++)    
            x[j] = n - k + 1 + j;

        for (int j = 0; j < k; j++)
            cout << x[j] << (j + 1 < k ? " " : "\n");
    }
    return 0;
}

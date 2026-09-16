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

        vector<int> cur(k);
        for (int i = 0; i < k; i++) cin >> cur[i];  

        int i = k - 1;
        while (i >= 0 && cur[i] == n - k + 1 + i) i--;

        if (i < 0) {
            
            cout << k << "\n";
        } else {
            vector<int> nxt = cur;
            nxt[i]++;                             
            for (int j = i + 1; j < k; j++)
                nxt[j] = nxt[j - 1] + 1;          

            set<int> s(nxt.begin(), nxt.end());
            int rest = 0;
            for (int x : cur)
                if (!s.count(x)) rest++;

            cout << rest << "\n";
        }
    }
    return 0;
}

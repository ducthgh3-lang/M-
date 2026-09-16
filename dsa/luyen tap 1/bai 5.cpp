#include <bits/stdc++.h>
using namespace std;

int n;
int a[15][15];
vector<string> paths;
string cur;

void dfs(int i, int j) {
    if (i == n - 1 && j == n - 1) {      
        paths.push_back(cur);
        return;
    }
    if (i + 1 < n && a[i + 1][j] == 1) {     
        cur.push_back('D');
        dfs(i + 1, j);
        cur.pop_back();
    }
    if (j + 1 < n && a[i][j + 1] == 1) {     
        cur.push_back('R');
        dfs(i, j + 1);
        cur.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        paths.clear();
        cur.clear();
        if (a[0][0] == 1) dfs(0, 0);         

        if (paths.empty()) {
            cout << -1 << "\n";
        } else {
            for (size_t k = 0; k < paths.size(); k++)
                cout << paths[k] << (k + 1 < paths.size() ? " " : "\n");
        }
    }
    return 0;
}

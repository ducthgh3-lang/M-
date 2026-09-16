#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<string> names;    
vector<string> cur;

void gen(int start) {
    if ((int)cur.size() == k) {
        for (int i = 0; i < k; i++)
            cout << cur[i] << (i + 1 < k ? " " : "\n");
        return;
    }
    for (int i = start; i < (int)names.size(); i++) {
        cur.push_back(names[i]);
        gen(i + 1);
        cur.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    vector<string> raw(n);
    for (int i = 0; i < n; i++) cin >> raw[i];

    set<string> s(raw.begin(), raw.end());
    names.assign(s.begin(), s.end());   

    gen(0);
    return 0;
}

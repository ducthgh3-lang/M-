#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        int total = 1 << n;           
        for (int i = 0; i < total; i++) {
            int g = i ^ (i >> 1);      

            string s = "";
            for (int b = n - 1; b >= 0; b--)  
                s += ((g >> b) & 1) ? '1' : '0';

            cout << s;
            if (i < total - 1) cout << ' ';    
        }
        cout << "\n";
    }
    return 0;
}

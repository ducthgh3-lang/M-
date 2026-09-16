#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(const vector<int>& a, int idx, long long current_val) {
 
    if (idx == 5) {
        return current_val == 23;
    }
    
    if (check(a, idx + 1, current_val + a[idx])) return true;
    
    if (check(a, idx + 1, current_val - a[idx])) return true;
    
    if (check(a, idx + 1, current_val * a[idx])) return true;

    return false;
}

void solve() {
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    bool possible = false;
    

    do {
     
        if (check(a, 1, a[0])) {
            possible = true;
            break; 
        }
    } while (next_permutation(a.begin(), a.end()));

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

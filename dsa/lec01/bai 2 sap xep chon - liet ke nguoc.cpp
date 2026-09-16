#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<string> steps;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);

        string s = "Buoc " + to_string(i + 1) + ":";
        for (int k = 0; k < n; k++) {
            s += " " + to_string(a[k]);
        }
        steps.push_back(s);
    }

    for (int i = steps.size() - 1; i >= 0; i--) {
        cout << steps[i] << "\n";
    }

    return 0;
}

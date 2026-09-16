#include <iostream>
#include <vector>
#include <string>

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

    string step0 = "Buoc 0: " + to_string(a[0]);
    steps.push_back(step0);

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        string current_step = "Buoc " + to_string(i) + ":";
        for (int k = 0; k <= i; k++) {
            current_step += " " + to_string(a[k]);
        }
        steps.push_back(current_step);
    }

    for (int i = steps.size() - 1; i >= 0; i--) {
        cout << steps[i] << "\n";
    }

    return 0;
}

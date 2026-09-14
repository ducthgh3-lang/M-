#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    double sum = 0;
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (isPrime(a[i])) {
            sum += a[i];
            count++;
        }
    }
    
    double avg = sum / count;
    cout << fixed << setprecision(3) << avg << "\n";
    
    return 0;
}

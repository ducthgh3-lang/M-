#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    cin >> x; 
    
    int behon = 0;
    int lonhon = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] < x) {
            behon++;
        } else if(a[i] > x) {
            lonhon++;
        }
    }
    
    cout << behon << "\n"
         << lonhon << "\n";
         
    return 0;
}

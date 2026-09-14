#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int max_val = a[0];
    for(int i = 0; i < n; i++){
        if(max_val < a[i]){
            max_val = a[i];
        }
    }
    
    int count = 0;
    for(int i = 0; i < n; i++){
        if(max_val == a[i]){
            count++;
        }
    }
    
    cout << count << "\n";
    return 0;
}

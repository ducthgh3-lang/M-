#include <bits/stdc++.h>
using namespace std;

int A[8][8];
bool col[8], d1[15], d2[15];  
int best;

void solve(int row, int sum) {
    if (row == 8) {                
        best = max(best, sum);
        return;
    }
    for (int c = 0; c < 8; c++) {
        int i1 = row + c;          
        int i2 = row - c + 7;      
        if (col[c] || d1[i1] || d2[i2]) continue;   
        col[c] = d1[i1] = d2[i2] = true;
        solve(row + 1, sum + A[row][c]);
        col[c] = d1[i1] = d2[i2] = false;           
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> A[i][j];

        for (int i = 0; i < 8; i++) col[i] = false;
        for (int i = 0; i < 15; i++) d1[i] = d2[i] = false;

        best = 0;
        solve(0, 0);

        cout << "Test " << t << ": " << best << "\n";
    }
    return 0;
}

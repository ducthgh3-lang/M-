#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("DT.INP");
    ofstream fout("DT.OUT");

    if (!fin) {
        cout << "Khong the mo tep DT.INP" << endl;
        return 0;
    }

    int t, n, m;
    fin >> t >> n >> m;

    if (t == 1) {

        vector<int> degree(n + 1, 0); 
        
        for (int i = 0; i < m; ++i) {
            int u, v;
            fin >> u >> v;
            degree[u]++; 
            degree[v]++; 
        }

        for (int i = 1; i <= n; ++i) {
            fout << degree[i] << (i == n ? "" : " ");
        }
        fout << "\n";
    } 
    else if (t == 2) {

        vector<vector<int>> A(n + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; ++i) {
            int u, v;
            fin >> u >> v;
            A[u][v] = 1;
            A[v][u] = 1; 
        }

        fout << n << "\n";

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                fout << A[i][j] << (j == n ? "" : " ");
            }
            fout << "\n";
        }
    }

    fin.close();
    fout.close();
    return 0;
}

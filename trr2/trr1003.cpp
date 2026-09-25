#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("DT.INP");
    ofstream fout("DT.OUT");

    int t, n;
    fin >> t >> n;

    if (t == 1) {
        for (int i = 0; i < n; ++i) {
            int degree = 0, x;
            for (int j = 0; j < n; ++j) {
                fin >> x;
                degree += x; 
            }
            fout << degree << (i == n - 1 ? "" : " ");
        }
    } 
    else if (t == 2) {
        vector<pair<int, int>> edges;
        int x;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                fin >> x;
                if (i < j && x == 1) {
                    edges.push_back({i, j});
                }
            }
        }
        
        int m = edges.size();
        fout << n << " " << m << "\n";
    
        for (int i = 0; i < n; ++i) {
            for (int e = 0; e < m; ++e) {
                if (edges[e].first == i || edges[e].second == i) fout << 1 << " ";
                else fout << 0 << " ";
            }
            fout << "\n";
        }
    }

    fin.close();
    fout.close();
    return 0;
}

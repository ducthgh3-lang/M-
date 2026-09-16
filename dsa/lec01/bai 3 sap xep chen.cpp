#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false)p;
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i= 0; i < n; i++){
		cin >> a[i];
	}
	cout << "Buoc 0:" << a[0] << "\n";
	for (int i = 1; i < n; i++){
		int key = a[i];
		int j = i -1;
		while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
	}
	a[j + 1] = key;
	cout << "buoc " << i << ":";
	for(int k = 0; k < n ; k++){
		cout << " " << a[k];
	}
	cout << "\n";
}

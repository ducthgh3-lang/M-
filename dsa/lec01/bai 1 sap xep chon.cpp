#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int min =i;
		for(int j = 0; j < n; j++){
			if (a[j] < a[min]) min = j;
		}
		swap(a[i], a[min] );
		cout << "Buoc " << i+1 << ":";
		for (int i =0; i < n ; i++){
			cout << a[i];
		}
		cout << "\n";
	}
	return 0;
}

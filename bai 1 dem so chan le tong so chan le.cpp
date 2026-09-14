#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> a(n);
	long long sochan = 0;
	long long sole = 0;
	long long tongsochan=0;
	long long tongsole=0;
	
	for(int i = 0; i < n; i++){
		cin >> a[i]
		if(a[i] % 2 == 0){
			sochan++;
			tongsochan = tongsochan + a[i];
		}
		else{
			sole ++;
			tongsole = tongsole + a[i];
		}
	}
	cout << sochan << "\n"
		<< so le << "\n"
		<< tongsochan << "\n"
		<< tongsole << "\n"
return 0;
}

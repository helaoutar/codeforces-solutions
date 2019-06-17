#include <bits/stdc++.h>
using namespace std;
int n;
long long f[100001];
int main(){
	long long x,maxi=0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		f[x] += x;
		maxi = max(maxi, x);
	}
	for (int i = 2; i <= n; i++)
		f[i] = max(f[i] + f[i - 2], f[i - 1]);
	cout << f[maxi] << endl;
	return 0;
}
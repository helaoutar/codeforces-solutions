#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k = 0, last = 0, ans = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] > last) k++;
		else k = 1;
		last = a[i];
		ans = max(ans, k);
	}
	cout << ans << endl;
	return 0;
}
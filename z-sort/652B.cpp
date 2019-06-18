#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	vector<int> Q;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a;
		Q.push_back(a);
	}
	sort(Q.begin(), Q.end());
	for (int i = 0; i < n/2; i++){
		cout << Q[i] << " " << Q[n - 1 - i]<<" ";
	}
	if ((n % 2))
		cout << Q[n / 2 ];
	//system("pause");
	return 0;
}
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
	int a, n;
	cin >> n >> a;
	a--;
	vector<int> v(n);
	rep(i, n){
		cin >> v[i];
	}

	int cnt = 0;
	rep(i, n){
		if ((2 * a - i) >= 0 && (2 * a - i)< n)
			cnt += (v[i]&&v[2 * a - i]);
		else
			cnt += v[i];
	}

	cout << cnt << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<int(n);i++)
#define forAb(i,a,b) for(int i=int(a);i<int(b);i++)
#define forAB(i,a,b) for(int i=int(a);i<=int(b);i++)
typedef long long ll;
using namespace std;
int a[501];
int main(){
	int n, k,ans=0;
	cin >> n >> k;
	rep(i, n) cin >> a[i];
	if (n == 1) 
		cout << 0 << endl<<a[0]<<endl;
	else{
		for (int i = 1; i < n; i++){
			int temp = k - (a[i] + a[i - 1]);
			a[i] += (temp>= 0 ? temp: 0);
			ans += (temp >= 0 ? temp : 0);
		}
		cout << ans << endl;
		rep(i, n)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
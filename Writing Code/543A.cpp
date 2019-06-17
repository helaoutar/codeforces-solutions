#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dp[501][501];
ll a[501];
int main(){
	int n, m, b;
	ll mod;
	cin >> n >> m >> b >> mod;
	for (int i = 0; i < n; i++) cin >> a[i];
	dp[0][0] = 1;
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= m; j++)
			for (int k = a[i]; k <= b; k++)
				dp[j][k] = (dp[j][k] + dp[j - 1][k - a[i]]) % mod;
	ll ans = 0;
	for (int i = 0; i <= b; i++) ans = (ans + dp[m][i]) % mod;
	cout << ans << endl;
	//system("pause");
	return 0;
}
#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll dp1[101];
ll dp2[101];

int main()
{
	int n, k, d;
	cin >> n >> k >> d;
	dp1[0] = dp2[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= min(i, k); j++)
			dp1[i] = (dp1[i] + dp1[i - j]) % MOD;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= min(i, d - 1); j++)
			dp2[i] = (dp2[i] + dp2[i - j]) % MOD;
	cout << (dp1[n] - dp2[n] + MOD) % MOD << endl;
	//system("pause");
	return 0;
}
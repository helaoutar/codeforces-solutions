#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
	int n, a;
	vector<int> A;
	cin >> n;
	vector<ull> dp(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		A.push_back(--a);
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] == i)
			dp[i] = 2;
		else
		{
			for (int j = A[i]; j < i; j++)
				dp[i] = (dp[i] + dp[j]) % 1000000007;
			dp[i] = (dp[i] + 2);
		}
		//	cout << dp[i] << endl;
	}
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = (ans + dp[i]) % 1000000007;
	}
	cout << ans << endl;
	//	system("pause");

	return 0;
}
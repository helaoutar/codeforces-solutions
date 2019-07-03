#include <bits/stdc++.h>
using namespace std;
int n;
long long maxi = 0;
long long f[100001];
long long memo[100001];
long long fe(int i)
{
	if (i > maxi)
		return 0;
	if (i == maxi)
		return maxi * f[maxi];
	if (memo[i] != -1)
		return memo[i];
	return memo[i] = max(i * f[i] + fe(i + 2), fe(i + 1));
}
int main()
{
	long long x;
	cin >> n;
	memset(memo, -1, sizeof(memo));
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		maxi = max(maxi, x);
		f[x]++;
	}
	cout << fe(1) << endl;
	return 0;
}
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;

	long long x, y, z, t, u, v;
	cin >> n >> x >> y >> z >> t;

	vector<long long> X(n), Y(n);
	REP(i, n)
	{
		cin >> u >> v;
		X[i] = u;
		Y[i] = v;
	}
	X.push_back(x);
	Y.push_back(y);
	long long ans = LLONG_MAX;

	REP(i, n + 1)
	{
		long long r1 = (X[i] - x) * (X[i] - x) + (Y[i] - y) * (Y[i] - y);
		long long r2 = 0;
		REP(j, n + 1)
		{
			if ((X[j] - x) * (X[j] - x) + (Y[j] - y) * (Y[j] - y) > r1)
				r2 = r2 > ((X[j] - z) * (X[j] - z) + (Y[j] - t) * (Y[j] - t)) ? r2 : ((X[j] - z) * (X[j] - z) + (Y[j] - t) * (Y[j] - t));
		}
		ans = min(ans, r1 + r2);
	}
	cout << ans;

	return 0;
}
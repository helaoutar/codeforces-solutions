#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repa(i, a, n) for (int i = a; i < n; i++)
#define repinv(i, n) for (int i = n - 1; i >= 0; i--)
#define MOD 1000000007
#define set(a) memset(a, -1, sizeof(a))
#define clear(a) memset(a, 0, sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INF LLONG_MAX
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<ull> G(n + 1);
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2))
			G[i] = min(x + G[i - 1], G[(i + 1) / 2] + y + x);
		else
			G[i] = min(G[i / 2] + y, G[i - 1] + x);
	}
	cout << G[n] << endl;
	//system("pause");
	return 0;
}
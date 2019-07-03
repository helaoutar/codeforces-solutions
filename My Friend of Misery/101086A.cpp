#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define INF INT_MAX
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int mini = INF;
		cin >> n;
		vector<int> v(n);
		vector<char> c(n);
		rep(i, n)
				scanf("%d %c", &v[i], &c[i]);
		rep(i, n)
		{
			if (c[i] == '-')
				mini = min(mini, v[i] + 25);
			if (c[i] == '+' && mini != INF)
				mini -= (v[i] + 25);
		}
		printf("%d\n", mini);
	}
	//system("pause");
	return 0;
}
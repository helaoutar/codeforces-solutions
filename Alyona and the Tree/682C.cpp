#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<long, int> pli;
typedef vector<pli> vpli;
typedef vector<vpli> Tree;

ll a[100001], ans = 0, b[100001];
Tree tree;
void dfs(int src, int parent, ll dist)
{
	forAb(i, 0, tree[src].size())
	{
		if (tree[src][i].second != parent)
		{
			if (dist + tree[src][i].first > a[tree[src][i].second])
				ans += b[tree[src][i].second] + 1;
			else
			{
				if ((dist + tree[src][i].first) <= 0)
					dfs(tree[src][i].second, src, 0);
				else
					dfs(tree[src][i].second, src, dist + tree[src][i].first);
			}
		}
	}
}

int dfs1(int src, int parent)
{
	ll number = 0;
	bool e = false;
	forAb(i, 0, tree[src].size())
	{
		if (tree[src][i].second != parent)
		{
			e = true;
			number += dfs1(tree[src][i].second, src);
		}
	}
	b[src] = e ? number : 0;
	return b[src] + 1;
}
int main()
{
	int n;
	ll p, c;
	cin >> n;
	tree.resize(n + 1);
	forAB(i, 1, n)
					cin >>
			a[i];
	forAB(i, 1, n - 1)
	{
		cin >> p >> c;
		tree[p].pb(mp(c, i + 1)), tree[i + 1].pb(mp(c, p));
	}
	dfs1(1, -1);
	dfs(1, -1, 0);
	cout << ans << endl;
	//system("pause");
	return 0;
}
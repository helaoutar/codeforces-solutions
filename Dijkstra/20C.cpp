#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define xi first
#define yi second
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> Graph;
int n, m, x, y, z;
const long long INF = 1000000000000L;
void dijkstra(int src, Graph &v, vector<int> &parent, vector<ll> &dist)
{
	dist[src] = 0;
	priority_queue<pii, vpii, greater<pii>> q;
	q.push(make_pair(0, src));
	while (!q.empty())
	{
		pii top = q.top();
		q.pop();
		int v1 = top.second;
		ll d = top.first;
		if (d > dist[v1])
			continue;
		rep(i, v[v1].size())
		{
			ll cost = v[v1][i].xi;
			int v2 = v[v1][i].yi;
			if ((dist[v1] + cost) < dist[v2])
			{
				dist[v2] = dist[v1] + cost;
				q.push(mp(dist[v2], v2));
				parent[v2] = v1;
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	Graph v(n);
	vector<int> parent(n, -1);
	vector<ll> dist(n, INF);
	rep(i, m)
	{
		cin >> x >> y >> z;
		x--, y--;
		v[x].push_back(make_pair(z, y)), v[y].push_back(make_pair(z, x));
	}
	dijkstra(0, v, parent, dist);
	if (dist[n - 1] == INF)
		cout << -1 << endl;
	else
	{
		stack<int> ans;
		ans.push(n - 1);
		int w = n - 1;
		while (parent[w] != -1)
		{
			ans.push(parent[w]);
			w = parent[w];
		}
		while (!ans.empty())
		{
			cout << ans.top() + 1 << " ";
			ans.pop();
		}
	}
	//system("pause");
	return 0;
}
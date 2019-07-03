#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repa(i, a, n) for (int i = a; i <= n; i++)
#define repinv(i, n) for (int i = n - 1; i >= 0; i--)
#define MOD 1000000007
#define set(a) memset(a, -1, sizeof(a))
#define clear(a) memset(a, 0, sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INF LLONG_MAX

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, m, iss, jss;
bool cycle;
char grid[51][51];

bool isValid(int x, int y)
{
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int is, int js, int k, char c, vector<vector<bool>> &visited)
{
	visited[is][js] = true;
	for (int i = -1; i <= 1 && !cycle; i++)
	{
		for (int j = -1; j <= 1 && !cycle; j++)
		{
			if (abs(i) != abs(j))
			{
				int x = is + i;
				int y = js + j;
				if (x == iss && y == jss && k >= 3)
					cycle = true;
				else if (isValid(x, y) && !visited[x][y] && grid[x][y] == c)
					dfs(x, y, k + 1, c, visited);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	rep(i, n)
					rep(j, m)
							cin >>
			grid[i][j];

	rep(i, n)
			rep(j, m) if (!cycle)
	{
		vector<vector<bool>> visited(n, vector<bool>(m));
		iss = i, jss = j;
		dfs(i, j, 0, grid[i][j], visited);
	}
	cout << (cycle ? "Yes" : "No") << endl;
	//	system("pause");
	return 0;
}
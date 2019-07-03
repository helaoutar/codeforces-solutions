#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

struct cell
{
	int x;
	int y;
	int dist;
};

char grid[1001][1001];
bool visited[1001][1001];
int dist[1001][1001];
int r, c;
cell s, e;

bool isValid(int i, int j)
{
	return i >= 0 && i < r && j >= 0 && j < c;
}

void bfs(cell s)
{
	visited[s.x][s.y] = true;
	queue<cell> q;
	s.dist = 0;
	q.push(s);
	while (!q.empty())
	{
		cell top = q.front();
		q.pop();
		forAB(i, -1, 1)
				forAB(j, -1, 1)
		{
			if (abs(i) != abs(j))
			{
				int x = top.x + i;
				int y = top.y + j;
				if (isValid(x, y) && grid[x][y] != 'T' && !visited[x][y])
				{
					visited[x][y] = true;
					dist[x][y] = top.dist + 1;
					q.push({x, y, dist[x][y]});
				}
			}
		}
	}
}
int main()
{
	cin >> r >> c;
	rep(i, r)
			rep(j, c)
	{
		cin >> grid[i][j];
		dist[i][j] = 1e10;
		if (grid[i][j] == 'E')
			e = {i, j};
		else if (grid[i][j] == 'S')
			s = {i, j};
	}
	bfs(e);
	int ans = 0;
	rep(i, r)
			rep(j, c)
	{
		if (isdigit(grid[i][j]) && grid[i][j] - '0' && dist[i][j] <= dist[s.x][s.y])
		{
			ans += (grid[i][j] - '0');
		}
	}
	cout << ans << endl;
	//system("pause");
	return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define forAb(i,a,b) for(int i=a;i<b;i++)
using namespace std;

bool gr[101][101][101];
bool visited[101];
bool found = 0;
void dfs(int s,int d,vector<vector<int> >& v,int color){
	if (s == d) {
		found = true;
	}
	visited[s] = true;
	for (int i = 0; i<v[s].size() && !found;i++) {
		if (!visited[v[s][i]] && gr[s][v[s][i]][color])
			dfs(v[s][i], d, v, color);
	}
}
int main(){
	int n, m,q,x,y,z;
	cin >> n >> m;
	vector<vector<int> > v(n);
	rep(i, m){
		cin >> x >> y >> z;
		x--, y--, --z;
		gr[x][y][z] = gr[y][x][z] = true;
		v[x].push_back(y); v[y].push_back(x);
	}


	cin >> q;
	rep(i, q) {
		int ans = 0;
		cin >> x >> y;
		x--, y--;
		rep(j, m)
		{
			memset(visited, false, sizeof visited);
			found = false;
			dfs(x, y, v, j);
			ans += found;
		}
		cout << ans << endl;
	}
	//system("pause");
	return 0;
}
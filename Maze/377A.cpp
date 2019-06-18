#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define repa(i,a,n) for(int i=a;i<=n;i++)
#define repinv(i,n) for(int i=n-1;i>=0;i--)
#define MOD 1000000007
#define set(a) memset(a,-1,sizeof(a))
#define clear(a) memset(a,0,sizeof(a))
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define INF LLONG_MAX
#define INFI INT_MAX
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

struct cell{
	int x;
	int y;
};
char grid[501][501];
bool visited[501][501];
int row[] = { 0, -1, 0, 1 };
int ans = 0;

bool isValid(int i, int j, int n, int m){
	return i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(cell star,int n,int m,int k){
	for(int i=0;i<4 && ans<=k;i++){
		int x = star.x + row[i];
		int y = star.y + row[(i + 1) % 4];
		if (isValid(x, y, n, m) && grid[x][y]!='#' && !visited[x][y]){
			visited[x][y] = true;
			dfs({ x, y }, n, m,k);
		}
	}
	ans++;
	if (ans<=k)
	grid[star.x][star.y] = 'X';
}
int main(){
	int n, m, k,is,js;
	bool a = false;
	cin >> n >> m >> k;
	rep(i,n)
		rep(j, m){
		cin >> grid[i][j];
		if (grid[i][j] == '.' && !a)
			is = i, js = j, a = true;
	}
	visited[is][js] = true;
	dfs({ is, js }, n, m,k);
	rep(i, n){
		cout << endl;
		rep(j, m){
			cout << grid[i][j];
		}
	}
//	system("pause");
	return 0;
}
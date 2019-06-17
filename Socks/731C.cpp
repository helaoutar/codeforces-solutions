#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<int(n);i++)
using namespace std;
typedef vector<int> vi;
typedef vector<vi> Gr;
int colors[200001];
bool visited[200001];
vector<int> x;
int n,m,k;
void dfs(int src,Gr& g){
	visited[src] = true;
	x.push_back(colors[src]);
	for (int i = 0; i < g[src].size(); i++)
		if (!visited[g[src][i]])
			dfs(g[src][i], g);
}

int main(){
	int l, r,ans=0;
	cin >> n >> m >> k;
	Gr g(n);
	rep(i, n) cin >> colors[i];
	rep(i, m){
		cin >> l >> r;
		l--, r--;
		g[l].push_back(r);
		g[r].push_back(l);
	}
	for (int i = 0; i < n; i++){
		if (!visited[i]){
			x.clear();
			dfs(i, g);
			sort(x.begin(), x.end());
			int curr = 1;
			int maxi = 1;
			for (int j = 1; j < x.size(); j++){
				if (x[j] == x[j - 1]) curr++;
				else curr = 1;
				maxi = max(maxi, curr);
			}
			ans += (x.size() - maxi);
		}
	}
	cout << ans << endl;
	return 0;
}
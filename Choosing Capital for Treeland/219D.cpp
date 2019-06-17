#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define forAb(i,a,b) for(int i=a;i<b;i++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;
int a[200001];
int mini = INT_MAX;
int dfs(int src, int parent, vii& t, map<pii, bool>& m){
	rep(i, t[src].size()){
		if (t[src][i] != parent){
			a[src] += dfs(t[src][i], src, t, m)+!m[mp(src,t[src][i])];
		}
	}
	return a[src];
}

void dfs1(int src, int parent, vii& t, map<pii, bool>& m){
	if (src != 1)
	{
		if (m[mp(src, parent)])
			a[src] = a[parent] - 1;
		else
			a[src] = a[parent] + 1;
	}
	mini = min(mini, a[src]);
	rep(i, t[src].size()){
		if (t[src][i] != parent){
			dfs1(t[src][i], src, t, m);
		}
	}
}
int main(){
	int n,x,y;
	cin >> n;
	vii t(n+1);
	map<pii,bool> m;
	rep(i, n - 1){
		cin >> x >> y;
		t[x].pb(y), t[y].pb(x);
		m[make_pair(x,y)] = true;
	}
	dfs(1, -1, t, m);
	dfs1(1, 0, t, m);
	cout << mini << endl;
	forAB(i, 1, n)
		if (a[i] == mini)
			cout << i << " ";
//	system("pause");
	return 0;
}
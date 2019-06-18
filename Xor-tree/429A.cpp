#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define repa(i,a,n) for(int i=a;i<n;i++)
#define repinv(i,n) for(int i=n-1;i>=0;i--)
#define MOD 1000000007
#define set(a) memset(a,-1,sizeof(a))
#define clear(a) memset(a,0,sizeof(a))
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define INF LLONG_MAX
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool C[100001];
bool Goal[100001];
vector<int> ans;

void dfs(vector<vector<int> >& G,int root,int parent,bool a,bool b){
	if ((C[root] == Goal[root]) == a){
		ans.pb(root);
		a = !a;
	}

	for (int i = 0; i < G[root].size(); i++){
		if (G[root][i]!=parent)
			dfs(G, G[root][i],root, b, a);
	}
}

int main() {
	int n,x,y;
	cin >> n;
	vector<vector<int> > G(n+1);
	rep(i, n-1){
		cin >> x >> y;
		G[y].pb(x);
		G[x].pb(y);
	}
	rep(i, n){
		cin >> C[i+1];
	}

	rep(i, n){
		cin >> Goal[i + 1];
	}
	dfs(G, 1, -1,0, 0);
	cout << ans.size()<<endl;
	rep(i, ans.size()){
		cout << ans[i] << endl;
	}
	//system("pause");
	return 0;
}
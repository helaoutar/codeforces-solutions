#include <bits/stdc++.h>
#define INF 1e9+1000
typedef long long ll;
using namespace std;
int dp[5001][5001];
int parent[5001][5001];
int n, m, t;
int main(){
	int x, y,z;
	for (int i = 0; i <= 5000;i++) 
		for (int j = 0; j <= 5000; j++)
		{
		dp[i][j] = INF;
			parent[i][j] = -1;
		}

	cin >> n >> m >> t;
	vector<vector<pair<int,int>>> v(n + 1);
	for (int i = 0; i < m; i++){
		cin >> x >> y>>z;
		v[y].push_back(make_pair(z,x));
	}
		dp[1][1] = 0;
	for (int k = 2; k <= n; k++){
		for (int i = 1; i <= n; i++){
			for (int j = 0; j < v[i].size(); j++)
			{
				int u = v[i][j].second;
				int d = v[i][j].first;
				if (dp[i][k] > (dp[u][k - 1] + d)) {
					parent[i][k] = u;
					dp[i][k] = dp[u][k - 1] + d;
				}
			}
		}
	}
	int i;
	for (i = n; i >= 1; i--){
		if (dp[n][i] <= t) {
			cout << i<<endl;
			break;
		}
	}
	stack<int> s;
	s.push(n);
	while (parent[n][i] != -1){
		s.push(parent[n][i]);
		n = parent[n][i--];
	}
	while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}
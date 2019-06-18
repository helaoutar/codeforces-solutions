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

ll dp[100001][2];
ll v[100001];
string s[100001][2];

int main() {
	int n;
	bool a = false;
	cin >> n;
	rep(i, n)
		cin >> v[i];
	dp[0][0] = 0;
	dp[0][1] = v[0];
	rep(i, n)
	{
		cin >> s[i][0];
		s[i][1] = s[i][0];
		reverse(s[i][1].begin(), s[i][1].end());
	}
	repa(i, 1, n) {
		dp[i][0] = min(s[i][0]>=s[i - 1][0] ? dp[i - 1][0] : INF, s[i][0]>=s[i - 1][1] ? dp[i - 1][1] : INF);
		dp[i][1] = v[i]+min(s[i][1]>=s[i - 1][0] ? dp[i - 1][0] : INF, s[i][1]>=s[i - 1][1] ? dp[i - 1][1] : INF);
		if (dp[i][1] < 0)
			dp[i][1] = INF;
	}
		cout << (min(dp[n - 1][0], dp[n - 1][1]) == INF ? -1 : min(dp[n - 1][0], dp[n - 1][1]))<<endl;
	//system("pause");
	return 0;
}
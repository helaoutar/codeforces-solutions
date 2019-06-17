#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<int(n);i++)
using namespace std;
typedef long long ll;
int n;
int arr[200001];
int dp[200001][2];
bool f(int i, int a){
	if (i == n)	return !a;
	if (arr[i] - a < 0) return false;
	if (dp[i][a] != -1) return dp[i][a];
	if ((arr[i] - a) % 2) return dp[i][a]=f(i + 1, 1);
	else return dp[i][a]=f(i + 1, 0);
}

int main(){
	cin >> n;
	memset(dp, -1, sizeof(dp));
	rep(i, n) cin >> arr[i];
	cout << (f(0, 0)?"YES":"NO" )<< endl;
	return 0;
}
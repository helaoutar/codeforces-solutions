#include <bits/stdc++.h>
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define forAb(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007 
#define mp make_pair
#define pb push_back
#define INF INT_MAX
using namespace std;
typedef long long ll;

int main(){
	int n, mini = INF, maxi = 0;
	ll k1 = 0, k2 = 0;
	cin >> n;
	vector<int> v(n);
	rep(i, n)
	{
		cin >> v[i];
		mini = min(mini, v[i]);	maxi = max(maxi, v[i]);
	}
	rep(j, n){
		k1 += v[j] == mini;
		k2 += v[j] == maxi;
	}
	if (maxi == mini)
		cout << "0 "<<k1*(k1-1) / 2 << endl;
	else
	cout << maxi - mini << " " << k1*k2 << endl;
	//system("pause");
	return 0;
}
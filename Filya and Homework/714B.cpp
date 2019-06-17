#include <bits/stdc++.h>
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define forAb(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007 
#define mp make_pair
#define pb push_back
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<long, int> pli;
typedef vector<pli> vpli;
typedef vector<vpli> Tree;


int main(){
	int n;
	ll x;
	set<ll> s;
	vector<ll> v;
	cin >> n;
	rep(i, n){
		cin >> x;
		s.insert(x);
	}
	if (s.size() > 3)
		cout << "NO" << endl;
	else{
		if (s.size() <= 2)
			cout << "YES" << endl;
		else
		{
			for (set<ll>::iterator it = s.begin(); it != s.end(); it++)
				v.push_back((*it));
			cout << ((v[1]-v[0])!=(v[2]-v[1])? "NO" : "YES") << endl;
		}
	}

	//system("pause");
	return 0;
}
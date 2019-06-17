#include <bits/stdc++.h>
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define forAb(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define INF INT_MAX
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
template<class T>T gcd(T a, T b){ return (b == 0) ? a : gcd(b, a%b); }
template<class T>T lcm(T a, T b){ return (a*b) / gcd(a, b); }

struct cell{
	int x;
	int y;
};


int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i, n)
		cin >> v[i];
	if (v[n - 1] == 0) cout << "UP" << endl;
	else
		if (v[n - 1] == 15) cout << "DOWN" << endl;
		else{
			if (n == 1) cout << -1 << endl;
			else{
				if (v[n - 1] > v[n - 2] && v[n - 1] < 15)
					cout << "UP" << endl;
				else
					cout << "DOWN" << endl;
			}
		}
	//system("pause");
	return 0;
}
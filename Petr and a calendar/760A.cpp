//#pragma warning(disable : 4996)
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	int m, d;
	cin >> m >> d;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d >= 6) cout << 6 << endl;
		else cout << 5 << endl;
	}
	else
	{
		if (m == 2)
		{
			if (d > 1) cout << 5 << endl;
			else cout << 4 << endl;
		}
		else{
			if (d >= 7) cout << 6 << endl;
			else cout << 5 << endl;
		}
	}
	return 0;
}
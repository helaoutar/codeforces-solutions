#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
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

int main()
{
	int t, x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		cout << max(x, y) * max(x, y) << endl;
	}

	//system("pause");
	return 0;
}
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
	int t, n;
	char c;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> ans(n);
		rep(i, 3)
				rep(j, 3 * n)
		{
			cin >> c;
			ans[j / 3] += (c == '*') * 4;
		}
		cout << *max_element(ans.begin(), ans.end()) << endl;
	}

	//system("pause");
	return 0;
}
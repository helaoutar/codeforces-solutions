#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repa(i, a, n) for (int i = a; i < n; i++)
#define repinv(i, n) for (int i = n - 1; i >= 0; i--)
#define MOD 1000000007
#define set(a) memset(a, -1, sizeof(a))
#define clear(a) memset(a, 0, sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)

typedef unsigned long long ull;
typedef long long ll;

using namespace std;
bool tab[1001][1001];
int main()
{
	int n, m, sum = 0;
	bool a = false;
	cin >> n >> m;
	vector<int> raw(n);
	vector<int> col(m);
	char c;
	rep(i, n)
			rep(j, m)
	{
		cin >> c;
		if (c == '*')
		{
			raw[i]++;
			col[j]++;
			tab[i][j] = true;
			sum++;
		}
	}
	rep(i, n)
			rep(j, m)
	{
		if ((raw[i] + col[j] - tab[i][j]) == sum)
		{
			a = true;
			cout << "YES" << endl;
			cout << (i + 1) << " " << (j + 1) << endl;
			i = n;
			break;
		}
	}

	if (!a)
		cout << "NO" << endl;
	//system("pause");
	return 0;
}
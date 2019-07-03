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
	int n;
	cin >> n;
	string a = "I hate";
	string b = "I love";
	for (int i = 0; i < n - 1; i++)
	{
		if (!(i % 2))
			cout << a << " that ";
		else
			cout << b << " that ";
	}
	if (n % 2)
		cout << a << " it" << endl;
	else
		cout << b << " it" << endl;
	//system("pause");
	return 0;
}
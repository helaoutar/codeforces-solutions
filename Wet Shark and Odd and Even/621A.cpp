#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define mp make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
	int n, x;
	ull ans = 0;
	vector<int> I;
	cin >> n;
	rep(i, n)
	{
		cin >> x;
		if (!(x % 2))
			ans += x;
		else
			I.push_back(x);
	}
	if (!(I.size() % 2))
		for (int i = 0; i < I.size(); i++)
			ans += I[i];
	else
	{
		sort(I.begin(), I.end(), std::greater<int>());
		for (int i = 0; i < I.size() - 1; i++)
			ans += I[i];
	}

	cout << ans << endl;

	//	system("pause");
	return 0;
}
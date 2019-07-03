#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define rep(i, n) for (int i = 0; i < n; i++)
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;
	int ans = 0;
	rep(i, n)
	{
		int x = 0, y = 0;
		if (str[i] == 'U')
			y++;
		if (str[i] == 'L')
			x--;
		if (str[i] == 'D')
			y--;
		if (str[i] == 'R')
			x++;
		for (int j = i + 1; j < n; j++)
		{
			if (str[j] == 'U')
				y++;
			if (str[j] == 'L')
				x--;
			if (str[j] == 'D')
				y--;
			if (str[j] == 'R')
				x++;

			if (!x && !y)
				ans++;
		}
	}
	cout << ans << endl;
	//system("pause");

	return 0;
}
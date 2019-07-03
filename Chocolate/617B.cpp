#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, c, j = 1;
	unsigned long long ans = 1;
	cin >> n;
	bool a = false;
	REP(i, n)
	{
		cin >> c;
		if (c)
		{
			if (a)
				ans *= j;
			a = true;
			j = 1;
		}

		else
			j++;
	}
	cout << (a == true ? ans : 0);
	return 0;
}
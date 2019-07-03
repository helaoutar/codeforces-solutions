#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (!(n % 5))
	{
		cout << n / 5;
	}
	else
		cout << n / 5 + 1;

	return 0;
}
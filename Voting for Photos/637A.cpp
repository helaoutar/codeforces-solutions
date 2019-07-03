#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	cin >> n;
	map<int, int> Q;
	int p = 0;
	int bestsofar = 1;
	while (n--)
	{
		cin >> a;
		Q[a]++;
		if (Q[a] > p)
		{
			p++;
			bestsofar = a;
		}
	}
	cout << bestsofar;
	//	system("pause");
	return 0;
}
#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define mp make_pair
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	stack<int> P;

	cin >> n;
	int i = 1;
	while (n)
	{
		if (n % 2)
			P.push(i);
		n /= 2;
		i++;
	}
	while (!P.empty())
	{
		cout << P.top() << " ";
		P.pop();
	}

	//	system("pause");

	return 0;
}
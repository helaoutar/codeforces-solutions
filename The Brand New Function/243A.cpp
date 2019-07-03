#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int n, a;
	cin >> n;
	set<ll> A, B, C;

	for (int i = 0; i < n; i++)
	{
		A.clear();
		cin >> a;
		A.insert(a);
		for (set<ll>::iterator it = B.begin(); it != B.end(); it++)
		{
			A.insert(*it | a);
		}
		B = A;
		C.insert(B.begin(), B.end());
	}

	cout << C.size() << endl;
	//	system("pause");
	return 0;
}
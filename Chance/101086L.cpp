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

int isPrime(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}
int countBits(int x)
{
	int i = 0;
	while (x)
	{
		if (x & 1)
			i++;
		x >>= 1;
	}
	return i;
}

int ans[100001];
int main()
{
	int t, l, r;
	cin >> t;
	for (int i = 1; i <= 100000; i++)
	{
		ans[i] = ans[i - 1] + isPrime(countBits(i));
	}
	while (t--)
	{
		cin >> l >> r;
		cout << (ans[r] - (l > 0 ? ans[l - 1] : 0)) << endl;
	}
	//system("pause");
	return 0;
}

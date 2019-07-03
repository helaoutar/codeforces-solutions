#include <bits/stdc++.h>
using namespace std;
int n, x, ans = 0;
int v[100001];
void bs(int v[], int n, int val)
{
	ans++;
	if (v[n / 2] == val)
	{
		return;
	}
	if (v[n / 2] < val)
		bs(v + (n / 2) + 1, n - (n / 2) - 1, val);
	else
		bs(v, n - (n / 2) - 2, val);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	bs(v, n - 1, v[n - 1]);
	cout << ans << endl;
	return 0;
}
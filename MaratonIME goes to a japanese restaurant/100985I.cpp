#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int n, t, j = 0, k = 0;
	long long sum1 = 0, sum2 = 0;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum1 += a[i];
		if (sum1 <= t)
			k++;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		sum2 += a[i];
		if (sum2 <= t)
			j++;
		else
			break;
	}
	if (k > j)
		cout << "Yan" << endl;
	else if (k < j)
		cout << "Nathan" << endl;
	else
		cout << "Empate" << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double l, r;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf", &l, &r);
		cout << setprecision(12) << (((1 / l) - 1 / (r + 1))) << endl;
	}

	return 0;
}
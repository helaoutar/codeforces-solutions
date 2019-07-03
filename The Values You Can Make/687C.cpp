#include <iostream>
#include <vector>
using namespace std;

bool dp[501][501];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0][0] = true;
	int n, choc, c;
	cin >> n >> choc;

	for (int i = 0; i < n; i++)
	{
		cin >> c;

		for (int j = 500 - c; j >= 0; j--)
			for (int k = 0; k <= j; k++)
				if (dp[j][k])
				{
					dp[j + c][k] = true;
					dp[j + c][k + c] = true;
				}
	}

	vector<int> result;

	for (int k = 0; k <= 500; k++)
		if (dp[choc][k])
			result.push_back(k);

	cout << result.size() << '\n';
	for (auto c : result)
		cout << c << ' ';
	cout << '\n';
	return 0;
}
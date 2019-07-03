#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repa(i, a, n) for (int i = a; i < n; i++)
#define repinv(i, n) for (int i = n - 1; i >= 0; i--)
#define MOD 1000000007
#define set(a) memset(a, -1, sizeof(a))
#define clear(a) memset(a, 0, sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int findMax(vector<int> &height, int a)
{
	int max = 0;
	bool b = false;
	for (int i = 0; i < height.size(); i++)
	{
		if (height[i] != a || b)
		{
			max = height[i];
			break;
		}
		if (height[i] == a)
			b = true;
	}
	return max;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> dimensions;
	vector<int> height(n);
	int w, h;
	ll sum = 0;
	rep(i, n)
	{
		cin >> w >> h;
		dimensions.pb(mp(w, h));
		height[i] = h;
		sum += w;
	}

	sort(height.begin(), height.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		cout << (sum - dimensions[i].first) * height[height[0] == dimensions[i].second ? 1 : 0] << " ";
	}

	return 0;
}
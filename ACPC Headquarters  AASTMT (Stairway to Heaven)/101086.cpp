#include <bits/stdc++.h>
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define f first
#define INF INT_MAX
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main()
{
	int t, n, s, e, v;
	cin >> t;
	while (t--)
	{
		string cn, vn;
		map<string, vector<pair<int, int>>> M;
		cin >> n;
		rep(i, n)
		{
			cin >> cn >> s >> e >> v;
			rep(j, v)
			{
				cin >> vn;
				M[vn].push_back(make_pair(s, e));
			}
		}
		vector<string> ans;
		for (map<string, vector<pair<int, int>>>::iterator it = M.begin(); it != M.end(); it++)
		{
			if (it->second.size() >= 2)
			{
				bool a = false;
				sort(it->second.begin(), it->second.end(), cmp);
				for (int i = 0; i < it->second.size() - 1 && !a; i++)
				{
					if (it->second[i].second >= it->second[i + 1].first)
					{
						ans.push_back(it->first);
						a = true;
					}
				}
			}
		}
		cout << ans.size() << endl;
		rep(i, ans.size())
						cout
				<< ans[i] << endl;
	}

	//system("pause");
	return 0;
}
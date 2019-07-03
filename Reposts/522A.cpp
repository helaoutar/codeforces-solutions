#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	map<string, int> Tree;
	string a, b, c;
	cin >> n;
	int depth = 0;
	REP(i, n)
	{
		cin >> a >> b >> c;
		transform(a.begin(), a.end(), a.begin(), ::tolower);
		transform(c.begin(), c.end(), c.begin(), ::tolower);
		Tree[a] = Tree[c] + 1;

		depth = max(depth, Tree[c]);
	}

	cout << depth + 2;
	return 0;
}
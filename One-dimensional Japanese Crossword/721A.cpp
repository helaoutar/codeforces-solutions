#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define forAb(i, a, b) for (int i = a; i < b; i++)
#define forAB(i, a, b) for (int i = a; i <= b; i++)
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MAX INT_MAX
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;

int main()
{
	int n, k = 0;
	vector<int> v;
	string s;
	cin >> n;
	cin >> s;
	rep(i, s.size())
	{
		if (s[i] == 'W')
		{
			if (k)
				v.push_back(k);
			k = 0;
		}
		else
		{
			k++;
		}
	}
	if (k)
		v.push_back(k);
	cout << v.size() << endl;
	rep(i, v.size())
					cout
			<< v[i] << " ";
	//system("pause");
	return 0;
}
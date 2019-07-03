#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < int(n); i++)
#define INF 1000000000
using namespace std;
bool matchP(string pattern, string str)
{
	if (pattern.length() != str.length())
		return false;
	bool a = true;
	rep(i, pattern.length())
	{
		if (pattern[i] == '?')
			continue;
		if (pattern[i] != str[i])
		{
			a = false;
			break;
		}
	}
	return a;
}
bool isSameLength(vector<string> &p)
{
	bool a = true;
	int j = p[0].length();
	rep(i, p.size())
	{
		if (p[i].length() != j)
		{
			a = false;
			break;
		}
	}
	return a;
}
string getPattern(vector<string> &p)
{
	string str;
	int l = p[0].length();
	rep(j, l)
	{
		set<char> s;
		rep(i, p.size())
		{
			s.insert(p[i][j]);
		}
		if (s.size() != 1)
			str += '?';
		else
			str += p[0][j];
	}
	return str;
}

bool a[201];
int main()
{
	int n, m, x;
	cin >> n >> m;
	vector<string> v(n);
	vector<string> c1;
	vector<string> c2;
	rep(i, n)
					cin >>
			v[i];
	rep(i, m)
	{
		cin >> x;
		c1.push_back(v[x - 1]);
		a[x - 1] = true;
	}

	rep(i, n) if (!a[i]) c2.push_back(v[i]);

	if (!isSameLength(c1))
	{
		cout << "No" << endl;
	}
	else
	{
		string patt = getPattern(c1);
		bool k = true;
		for (int i = 0; i < c2.size(); i++)
		{
			if (matchP(patt, c2[i]))
			{
				k = false;
				break;
			}
		}
		if (k)
			cout << "Yes" << endl
					 << patt << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
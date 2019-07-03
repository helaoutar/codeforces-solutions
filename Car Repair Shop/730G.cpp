#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
	int n, s, d;
	cin >> n;
	queue<pair<int, int>> q;
	queue<pair<int, int>> temporary;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
	p.push(make_pair(1, (int)(pow(10, 9) + 5 * pow(10, 6))));
	rep(i, n)
	{
		cin >> s >> d;
		q.push(make_pair(s, s + d - 1));
	}
	while (!q.empty())
	{
		pair<int, int> top1 = q.front();
		q.pop();
		bool a = false;
		while (!a && !p.empty())
		{
			pair<int, int> top2 = p.top();
			p.pop();
			if (top2.first <= top1.first && top2.second >= top1.second)
			{
				if (top1.first - 1 >= top2.first)
					p.push(make_pair(top2.first, top1.first - 1));
				if (top1.second + 1 <= top2.second)
					p.push(make_pair(top1.second + 1, top2.second));
				cout << top1.first << " " << top1.second << endl;
				a = true;
			}
			else
				temporary.push(top2);
		}
		while (!temporary.empty())
		{
			p.push(temporary.front());
			temporary.pop();
		}
		if (!a)
		{
			while (!p.empty())
			{
				pair<int, int> top2 = p.top();
				p.pop();
				if ((top2.second - top2.first) >= (top1.second - top1.first))
				{
					if ((top2.first + top1.second - top1.first + 1) <= top2.second)
					{
						p.push(make_pair(top2.first + top1.second - top1.first + 1, top2.second));
						//cout << "second case : " << top2.first + top1.second - top1.first + 1 << ";" << top2.second << endl;
					}
					cout << top2.first << " " << top2.first + top1.second - top1.first << endl;
					break;
				}
				else
					temporary.push(top2);
			}
			while (!temporary.empty())
			{
				p.push(temporary.front());
				temporary.pop();
			}
		}
	}

	return 0;
}
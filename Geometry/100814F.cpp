#include <bits/stdc++.h>
#define a first
#define b second
#define rep(i, n) for (int i = 0; i < int(n); i++)
#define pb(a) push_back(a)
#define mp make_pair
using namespace std;

int main()
{
	int t, w, h;
	cin >> t;
	while (t--)
	{
		cin >> w >> h;
		cout << (w == h ? "Square" : "Rectangle") << endl;
	}
	return 0;
}
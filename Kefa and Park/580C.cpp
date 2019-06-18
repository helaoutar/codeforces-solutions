#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n;i++)


using namespace std;


int ans = 0;
vector<int> cats;




int  DFS(vector<vector<int> >& Tree, int root,int p, int m, int j)
{
	
	if (cats[root]) j++;
	else j = 0;

	if (j > m) return 0;
	if (Tree[root].size() == 1 && root != 0)
		ans++;
	for (int i = 0; i < Tree[root].size(); i++)
	{
		if (Tree[root][i] != p)
		{
			DFS(Tree, Tree[root][i], root, m, j);
		}
	}


}



int main()
{
	int n, m,a,x,y;
	cin >> n >> m;
	vector<vector<int> > Tree(n);
	REP(i, n)
	{
		cin >> a;
		cats.push_back(a);
	}
	REP(i, n - 1)
	{
		cin >> x >> y;
		Tree[--x].push_back(--y);
		Tree[y].push_back(x);
	}
	DFS(Tree, 0,0, m, 0);
	cout << ans << endl;
//system("pause");
	return 0;
}
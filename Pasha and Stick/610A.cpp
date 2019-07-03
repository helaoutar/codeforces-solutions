#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <utility>
#include <functional>

#define REP(i, n) for (int i = 0; i < n; i++)
#define REP1(i, n, x) for (int i = x; i < n; i++)
#define mp(a) make_pair(a)
#define pb(a) push_back(a)
int n, k, x, source = -1, zeros = 0;
using namespace std;

void DFS(int node, map<int, vector<int>> &d, int level = 1, int child = 0, int debut = 0)
{

    map<int, vector<int>> G;
    if (pow(k, level) < d[level].size())
    {
        cout << "-1";
        system("pause");
    }
    else
    {
        int i;
        for (i = debut; i < min(k, (int)d[level].size()); i++)
        {
            G[node].push_back(d[level][i]);
            G[d[level][i]].push_back(node);
        }
        if (i == d[level].size())
            DFS(d[level][0], d, level + 1);
        else
            DFS(d[level][0], d, level - 1, child + 1);
    }
}

int main()
{
    long long n;
    cin >> n;

    if (n % 2)
        return cout << 0, 0;
    n /= 2;
    if (n % 2)
        cout << n / 2;
    else
        cout << (n / 2) - 1;
    return 0;
}
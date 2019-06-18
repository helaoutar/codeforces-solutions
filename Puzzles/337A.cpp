#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb(a) push_back(a)
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> N;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        N.pb(a);
    }
    sort(N.begin(), N.end());
    int min=N[n-1]-N[0];
    for (int i = 1; i <=m - n; i++)
    {
        min = min > N[n - 1 + i] - N[i] ? N[n - 1 + i] - N[i] : min;
    }

    cout << min;

    return 0;
}
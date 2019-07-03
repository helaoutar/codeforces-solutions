#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n = 0;
    long long a = 0;
    map<int, long long> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        for (int j = 1; j <= 32; j++)
        {
            if (pow(2, j) > t && v.find(pow(2, j) - t) != v.end())
            {
                a += v[pow(2, j) - t];
            }
        }
        v[t]++;
    }
    cout << a << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v[26];
  int i, j, k, n, q;
  string x;
  cin >> n >> q >> x;
  for (int var = 1; var <= n; ++var)
  {
    v[x[var - 1] - 'a'].push_back(var);
  }

  for (int t = 0; t < q; ++t)
  {
    cin >> i >> j >> k;
    int r = i;
    if (k)
    {
      for (int var = 0; var < 26; ++var)
      {
        int low = lower_bound(v[var].begin(), v[var].end(), i) - v[var].begin();
        int up = upper_bound(v[var].begin(), v[var].end(), j) - v[var].begin();

        for (int d = low; d < up; ++d)
          v[var][d] = r++;
      }
    }
    else
    {
      for (int var = 25; var >= 0; --var)
      {
        int low = lower_bound(v[var].begin(), v[var].end(), i) - v[var].begin();
        int up = upper_bound(v[var].begin(), v[var].end(), j) - v[var].begin();

        for (int d = low; d < up; ++d)
          v[var][d] = r++;
      }
    }
  }

  for (int var = 0; var < 26; ++var)
  {
    for (int h = 0; h < v[var].size(); ++h)
    {
      x[v[var][h] - 1] = (char)('a' + var);
    }
  }
  cout << x << endl;
}
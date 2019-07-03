#include <iostream>
using namespace std;

int main()
{
  long long n, m, res = 0;
  cin >> n >> m;
  long long tab[m + 1];
  tab[0] = 1;
  for (int i = 1; i <= m; ++i)
    cin >> tab[i];

  for (int i = 0; i < m; ++i)
    res += n * (tab[i + 1] - tab[i] >= 0 ? 0 : 1) + (tab[i + 1] - tab[i]);
  cout << res;
}
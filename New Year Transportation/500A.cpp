#include <iostream>

using namespace std;
int main()
{
  int n, t, a = 1;

  cin >> n >> t;
  int tab[n], i = 1;

  for (; i <= n - 1; ++i)
    cin >> tab[i];

  while (a < t)
  {
    a += tab[a];
  }

  cout << (a == t ? "YES" : "NO");
}
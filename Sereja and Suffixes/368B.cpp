#include <iostream>

using namespace std;

bool a[100000] = {0};

int main()
{
  int n, m, one = 0;
  cin >> n >> m;
  int tab[n];
  int tab1[n];

  for (int i = 0; i < n; ++i)
    cin >> tab[i];

  for (int i = 0; i < n; ++i)
    tab1[i] = 0;

  for (int i = n - 1; i >= 0; i--)
  {

    if (!a[tab[i]])
    {
      a[tab[i]] = 1;
      one++;
      tab1[i] = one;
    }
    else
      tab1[i] = one;
  }
  int l;
  for (int i = 0; i < m; ++i)
  {
    cin >> l;
    cout << tab1[--l] << endl;
  }
}
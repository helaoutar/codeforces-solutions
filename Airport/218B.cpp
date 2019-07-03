#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, min = 0, max = 0, j = 0, k = 0;
  cin >> n >> m;
  int tab1[m], tab2[m];
  for (int i = 0; i < m; ++i)
  {
    cin >> tab1[i];
    tab2[i] = tab1[i];
  }

  for (int i = 0; i < n; ++i)
  {
    sort(tab1, tab1 + m);
    sort(tab2, tab2 + m, std::greater<int>());
    if (!tab1[j])
      j++;
    if (!tab2[k])
      k++;

    min += tab1[j]--;
    max += tab2[k]--;
  }

  cout << max << endl
       << min;
}
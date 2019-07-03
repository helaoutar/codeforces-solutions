#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int tab1[n + 1], tab2[n + 1], tab3[n + 1];
  for (int i = 1; i <= n; ++i)
  {
    cin >> tab1[i];
    tab2[i] = tab1[i];
    tab3[i] = 1;
  }
  for (int i = 1; i <= n; ++i)
  {
    while (tab1[i] != -1)
    {
      tab1[i] = tab1[tab1[i]];
      tab3[i]++;
    }
    tab1[i] = tab2[i];
  }

  cout << *max_element(tab3 + 1, tab3 + n + 1);
}
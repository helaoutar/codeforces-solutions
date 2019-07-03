#include <iostream>

using namespace std;

int main()
{
  int n;
  int tab[2000];
  fill_n(tab, 2000, 1);
  cin >> n;
  int val[n];
  for (int i = 0; i < n; i++)
    cin >> val[i];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (val[j] > val[i])
        tab[i]++;

  for (int i = 0; i < n; i++)
    cout << tab[i] << " ";
}
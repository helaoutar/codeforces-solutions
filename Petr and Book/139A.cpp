#include <iostream>

using namespace std;

int main()
{
  int n, i = -1;
  cin >> n;
  int tab[n];
  for (int i = 0; i < 7; ++i)
    cin >> tab[i];

  while (n > 0)
  {
    (++i) %= 7;
    n -= tab[i];
  }
  cout << i + 1;
}
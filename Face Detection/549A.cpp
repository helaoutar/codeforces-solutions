#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int n, m, counter = 0;
  string S;

  cin >> n >> m;
  char tab[n][m];

  for (int i = 0; i < n; ++i)
  {

    cin >> tab[i];
  }

  for (int i = 0; i < n - 1; ++i)
  {
    for (int j = 0; j < m - 1; ++j)
    {

      S += tab[i][j];
      S += tab[i + 1][j + 1];
      S += tab[i][j + 1];
      S += tab[i + 1][j];

      sort(S.begin(), S.end());
      if (S == "acef")
        counter++;

      S.clear();
    }
  }

  cout << counter;
}
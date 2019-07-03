
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
  int n, m, x = 0;
  cin >> n >> m;

  for (int i = 1; i <= n; ++i)
  {
    if (i % 2)
    {
      for (int j = 1; j <= m; ++j)
        cout << "#";
    }

    else
    {
      for (int j = 1; j <= m; ++j)
      {

        if (!x)
        {
          if (!(i % 2) && j != m)
            cout << ".";
          if (!(i % 2) && j == m)
            cout << "#";
        }
        else
        {
          if (!(i % 2) && j != 1)
            cout << ".";
          if (!(i % 2) && j == 1)
            cout << "#";
        }
      }
      x = 1 - x;
    }

    cout << endl;
  }

  return 0;
}
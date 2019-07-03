#include <iostream>

using namespace std;

int main()
{
  int n, i = 0;
  cin >> n;
  while (true)
  {
    n -= i * (i + 1) / 2;
    if (n < 0)
      return cout << (i - 1), 0;
    i++;
  }
}
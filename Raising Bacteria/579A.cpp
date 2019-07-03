#include <iostream>

using namespace std;

int main()
{
  int n, count = 0;
  cin >> n;

  do
  {
    if (n & 1)
      count++;
  } while (n = n >> 1);
  cout << count;
}

#include <iostream>
using namespace std;

int main()
{
  int a, b, i, var = 0;
  cin >> a >> b;
  i = a;
  while (i)
  {
    var += i;

    a = (i = a / b) + a % b;
  }
  cout << var;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, mini;
  cin >> a >> b >> c;
  mini = min(min(c / 4, b / 2), a);
  cout << mini + mini * 2 + mini * 4 << endl;
  return 0;
}
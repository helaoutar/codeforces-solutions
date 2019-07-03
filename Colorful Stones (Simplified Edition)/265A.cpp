#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, t;
  int i = 0, j;
  cin >> s >> t;
  for (int j = 0; j < t.length(); ++j)
    if (t[j] == s[i])
      i++;

  cout << (++i);
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_pal(string s)
{
  int i = 0, j = s.length() - 1;
  bool a = true;
  for (; i < j && a; ++i, --j)
  {
    if (s[i] != s[j])
    {
      a = false;
      break;
    }
  }
  return a;
}

int main()
{
  int k;
  string s;
  bool a = true;
  cin >> s >> k;
  if (s.length() % k)
    return cout << "NO", 0;
  for (int i = 0; i < s.length() && a; i += s.length() / k)
    if (!is_pal(s.substr(i, s.length() / k)))
      a = false;

  cout << (a ? "YES" : "NO");
}
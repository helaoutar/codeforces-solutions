#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  int k, j = 0, off = 0, t;
  set<char> myset;
  cin >> k;
  t = k;
  string S[k], a;
  cin >> a;
  while (k)
  {
    myset.insert(a[off]);
    j++;
    while (j < a.length() && myset.find(a[j]) != myset.end())
      j++;
    if (j == a.length() + 1)
      return cout << "NO", 0;

    if (k == 1)
      S[k - 1] = a.substr(off, string::npos);
    else
      S[k - 1] = a.substr(off, j - off);
    off = j;

    k--;
  }

  cout << "YES" << endl;
  for (int i = 0; i < t; ++i)
  {
    cout << S[t - i - 1] << endl;
  }

  return 0;
}
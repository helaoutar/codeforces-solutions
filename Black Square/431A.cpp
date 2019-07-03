#include <iostream>
#include <string>

using namespace std;

int main()

{
  int n = 0, tab[4];
  string S;
  for (int i = 0; i < 4; ++i)
    cin >> tab[i];

  cin >> S;
  for (int i = 0; i < S.length(); ++i)
    n += tab[(int)S[i] - 49];
  cout << n;
}
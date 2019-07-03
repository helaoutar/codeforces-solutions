#include <iostream>
#include <map>

using namespace std;
int main()
{
  map<int, int> m;
  int a;
  for (int i = 0; i < 6; ++i)
  {
    cin >> a;
    m[a]++;
  }

  if (m.size() == 1)
    cout << "Elephant";

  if (m.size() == 2)
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
      if (it->second == 1)
      {
        cout << "Bear";
        return 0;
      }
      if (it->second == 2)
      {
        cout << "Elephant";
        return 0;
      }
      if (it->second == 3)
      {
        cout << "Alien";
        return 0;
      }
    }

  if (m.size() == 3)
  {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
      if (it->second == 4)
      {
        cout << "Bear";
        return 0;
      }
      if (it->second == 2)
      {
        cout << "Alien";
        return 0;
      }
    }
  }

  if (m.size() > 3)
    cout << "Alien";
}

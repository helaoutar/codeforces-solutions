#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
  long d1, d2, d3;
  cin >> d1 >> d2 >> d3;
  vector<int> Q;
  Q.push_back(d1 + d2 + d3);
  Q.push_back(d1 * 2 + d2 * 2);
  Q.push_back(d1 * 2 + d3 * 2);
  Q.push_back(d2 * 2 + d3 * 2);
  cout << *min_element(Q.begin(), Q.end());
  return 0;
}
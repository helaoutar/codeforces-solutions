#include <iostream>
#include <string>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cstring>
#include <iomanip>
#include <list>
#include <bitset>
#define ff first
#define ss second
#define mod 1000000007
#define SET(a) memset(a, -1, sizeof(a))
#define CLEAR(a) memset(a, 0, sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<int, LL> pil;
typedef pair<LL, int> pli;
typedef pair<LL, LL> pll;
typedef vector<LL> vl;
typedef vector<int> vi;
typedef vector<vi> vii;
template <class T>
T gcd(T a, T b) { return (b == 0) ? a : gcd(b, a % b); }

int main()
{
    string a, b;
    cin >> a >> b;
    int m = b.length();
    int n = a.length();
    vector<int> Q(b.length(), 0);

    Q[0] = b[0] == '1' ? 1 : 0;
    for (int i = 1; i < b.length(); i++)
    {
        Q[i] = b[i] == '1' ? Q[i - 1] + 1 : Q[i - 1];
    }
    long long ans = 0;

    for (int i = 0; i < a.length(); i++)
    {
        long long res = (m == n ? (b[i] == '1' ? 1 : 0) : Q[m - n + i] - Q[i] + b[i] - 48);
        ans += (a[i] == '0' ? res : m - n + 1 - res);
    }
    cout << ans << endl;

    return 0;
}
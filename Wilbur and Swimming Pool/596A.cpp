#include <iostream>
#include <string>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
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
template <class T>
T gcd(T a, T b) { return (b == 0) ? a : gcd(b, a % b); }
template <class T>
T lcm(T a, T b) { return (a * b) / gcd(a, b); }
template <class T>
T powmod(T a, T b)
{
    T res = 1;
    if (a >= mod)
        a %= mod;
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a;
        if (res >= mod)
            res %= mod;
        a = a * a;
        if (a >= mod)
            a %= mod;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << -1;
    else
    {
        if (n == 2)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 == x2 || y1 == y2)
                return cout << -1, 0;
            else
                return cout << abs(x1 - x2) * abs(y1 - y2), 0;
        }
        else
        {
            int x1, y1;
            vector<int> V1, V2;
            for (int i = 0; i < 3; i++)
            {
                cin >> x1 >> y1;
                V1.push_back(x1);
                V2.push_back(y1);
            }
            return cout << abs(*max_element(V1.begin(), V1.end()) - *min_element(V1.begin(), V1.end())) * abs(*max_element(V2.begin(), V2.end()) - *min_element(V2.begin(), V2.end())), 0;
        }
    }

    return 0;
}
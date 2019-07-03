#include <iostream>
#include <string>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
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
#define loop(i, n) for (int i = 0; i < n; i++)
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

int main()
{
    string s;
    int n, p, q;
    cin >> n >> p >> q;
    cin >> s;

    int m = n;
    int k = 0, k1 = 0;
    while (m > 0 && (m % q))
    {
        m -= p;
        k++;
    }
    if (m < 0)
        cout << -1;
    else
    {
        k1 = k;
        k += m / q;
        cout << k << endl;
        int last = 0;
        for (int i = 0; i < k1; i++)
        {

            cout << s.substr(last, p) << endl;
            last += p;
        }
        for (int i = 0; i < k - k1; i++)
        {
            cout << s.substr(last, q) << endl;
            last += q;
        }
    }

    return 0;
}
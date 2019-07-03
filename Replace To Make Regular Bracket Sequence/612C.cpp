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
    stack<char> P;
    map<char, char> M;
    bool impo = false;
    M['<'] = '>';
    M['{'] = '}';
    M['['] = ']';
    M['('] = ')';

    string s;
    cin >> s;
    int ans = 0;
    if (s.length() == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < s.length() && !impo; i++)
    {
        char c = s[i];
        if (c == '>' || c == '}' || c == ']' || c == ')')
        {
            if (P.empty())
                impo = true;
            else
            {
                char p = P.top();
                P.pop();
                if (M[p] != c)
                    ans++;
            }
        }
        else
            P.push(c);
    }
    if (impo || !P.empty())
        cout << "Impossible" << endl;
    else
        cout << ans;

    return 0;
}
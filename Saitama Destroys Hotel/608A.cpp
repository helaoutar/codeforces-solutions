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
#define SET(a) memset(a,-1,sizeof(a))
#define CLEAR(a) memset(a,0,sizeof(a))
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
using namespace std;
typedef long long LL;
typedef pair< int, int > pii;
typedef pair< int, LL> pil;
typedef pair< LL, int>pli;
typedef pair< LL, LL> pll;
typedef vector< LL >vl;
typedef vector< int > vi;
typedef vector< vi > vii;
template<class T>T gcd(T a, T b){ return (b == 0) ? a : gcd(b, a%b); }

int main()
{
    map<int, int, std::greater<int> > m;

    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int f, t;
        cin >> f >> t;
        m[f] = max(t,m[f]);
    }
    int top = s;
    int ans=(top-m.begin()->first) > (m.begin()->second)?top-m.begin()->first:m.begin()->second;
    top = m.begin()->first;

    for (map<int, int>::iterator it =++(m.begin()); it != m.end(); it++)
    {
        ans += top - it->first;
        top = it->first;
        if (ans < it->second)
            ans += it->second - ans;
    }
    ans += top;

    cout << ans;
    return 0;
}
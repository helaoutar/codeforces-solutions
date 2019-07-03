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
    int n, x, ans = 0;
    long long sum = 0, sum1;
    cin >> n;
    vector<int> Q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Q.pb(x);
        sum += x;
    }
    sum1 = sum;
    sum /= n;
    sort(Q.begin(), Q.end());

    for (int i = 0; i < n; i++)
    {
        if ((i + sum1 % n) >= n)
            sum = sum1 / n + 1;
        if (Q[i] <= sum)
            ans += (sum - Q[i]);
        else
            break;
    }

    cout << ans;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, m = 0;
    cin >> t;
    long long n;

    while (t--)
    {
        cin >> n;
        while (pow(2, m) <= n)
            m++;
        printf("%I64d\n", (n * (n + 1) / 2 - (long long)(2 * (pow(2, m) - 1))));
        m = 0;
    }
    return 0;
}
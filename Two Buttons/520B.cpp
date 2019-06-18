#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, c=0;
    cin >> n >> m;

    if (n >= m)
        return cout << n - m, 0;

    do
    {
        if (m % 2)
            m++;
        else
            m /= 2;
        c++;
    } while (m > n);

    cout << n - m + c;

    return 0;
}
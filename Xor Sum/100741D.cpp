#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long ans = 0;
    int temp;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        ans^=temp;
    }

    cout << ans;

    return 0;
}
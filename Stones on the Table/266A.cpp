#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int n, ans = 0;
    string S;
    cin >> n >> S;
    for (int i = 0; i < n - 1; i++)
        if (S[i] == S[i + 1])
            ans++;
    cout << ans;
    return 0;
}
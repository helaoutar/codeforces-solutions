#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n, x, m;
    char move;
    string s;
    cin >> n >> x >> s >> m;
    cout << s[--x];
    for (int i = 0; i < m; i++)
    {
        cin >> move;
        cout << s[x += move == 'R' ? 1 : -1];
    }
    return 0;
}
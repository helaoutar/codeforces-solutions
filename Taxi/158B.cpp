#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tab[5] = {0};
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        tab[a]++;
    }
    int c = 0;
    tab[1] = tab[3] >= tab[1] ? 0 : (tab[1] - tab[3]);
    tab[2] += tab[1] / 2;
    if (tab[2] % 2 || tab[1] % 2)
        c = 1;
    tab[2] /= 2;

    cout << c + tab[2] + tab[3] + tab[4];

    return 0;
}
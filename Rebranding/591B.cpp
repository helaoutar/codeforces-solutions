#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main()
{
    int n, m;
    string abc;
    char x, y;
    cin >> n >> m >> abc;
    vvi lettres(26);
    for (int i = 0; i < n; i++)
        lettres[abc[i] - 'a'].push_back(i);

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        lettres[x - 'a'].swap(lettres[y - 'a']);
    }
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < lettres[i].size(); j++)
            abc[lettres[i][j]] = 'a' + i;

    cout << abc;
}
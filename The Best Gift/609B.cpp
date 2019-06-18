#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n, m,x;
    cin >> n >> m;
    vector <long long > Q(m,0);
    vector<int> M(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Q[--x]++;
        M[x]++;
    }

    for (int i =1; i <m;i++)
    {
        Q[i] += Q[i - 1];
    }

    long long ans = 0;
    for (int i = 0; i < m-1; i++)
    {
        ans += M[i] * (Q[m-1]-Q[i+1]+M[i+1]);
    }
    cout << ans<<endl;
    return 0;
}
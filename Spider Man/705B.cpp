#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define repa(i,a,n) for(int i=a;i<n;i++)
#define repinv(i,n) for(int i=n-1;i>=0;i--)
#define MOD 1000000007
#define set(a) memset(a,-1,sizeof(a))
#define clear(a) memset(a,0,sizeof(a))
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)

typedef unsigned long long ull;
typedef long long ll;

using namespace std;
bool tab[1001][1001];
int main(){
	int n,x,sum=0;
	cin >> n;
	int lastWinner =2;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (x == 1)
			cout <<lastWinner<< endl;
		else
		{
			sum += x;
			if (sum%2)
			{
				cout << (lastWinner=2) << endl;
			}
			else
			{
				cout << (lastWinner=1) << endl;
			}
			sum--;
		}
	}
	//system("pause");
	return 0;
}
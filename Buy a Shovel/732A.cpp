
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<int(n);i++)
#define forAb(i,a,b) for(int i=int(a);i<int(b);i++)
#define forAB(i,a,b) for(int i=int(a);i<=int(b);i++)
typedef long long ll;
using namespace std;
int main(){
	int k,r,i=1,temp;
	cin >> k >> r;
	while (true){
		temp = k*i;
		if (!(temp % 10) || !((temp - r) % 10)) break;
		i++;
	}
	cout << i << endl;
	return 0;
}
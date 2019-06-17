#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[100001];
int main(){
	int n, k;
	ll sum = 0;
	cin >> n>>k;
	for (int i = 0; i < n; i++) scanf("%I64d",&arr[i]);
	for (int j = 1; sum < k; j++)
	{
		if ((sum + j)>=k) break;
		sum += j;
	}
	cout << arr[k-sum-1] << endl;
	return 0;
}
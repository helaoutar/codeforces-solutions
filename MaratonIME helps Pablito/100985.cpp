#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	return b == 0 ? a : gcd(b, a%b);
}
bool isPrime(ull n)
{	if (n <= 1)  return false;
	if (n <= 3)  return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i*i <= n; i = i + 6)
		if (n%i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main(){
	int n;
	ull a, b;
	cin >> n;
	while (n--){
		scanf("%I64d %I64d", &a, &b);
		if ((isPrime(a) && isPrime(b) && a!=b) || (gcd(a, b) == 1))cout << "Nao" << endl;
		else cout << "Sim" << endl;
	}
	return 0;
}
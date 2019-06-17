#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<int(n);i++)
using namespace std;
typedef long long ll;

int main(){
	string s;
	cin >> s;
	int ans = 0;
	int f = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] - 'a' >= f) ans += min(s[i] - 'a' - f, f - (s[i] - 'a') + 26);
		else ans += min(f-(s[i] - 'a'), (s[i] - 'a')-f + 26);
		f = s[i]-'a';
	}
	cout << ans << endl;
	return 0;
}
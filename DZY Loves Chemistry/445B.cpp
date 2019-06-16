#include <bits/stdc++.h>
using namespace std;
int n, m;
int vset[51];
int cnt[51];
void init(){ for (int i = 0; i < 51; i++) vset[i] = i,cnt[i]=1; }
int findS(int i){ return vset[i] == i ? i : vset[i]=findS(vset[i]) ; }
void unionS(int i, int j){
	if (findS(i) != findS(j))
	cnt[findS(j)] += cnt[findS(i)];
	vset[findS(i)] = findS(j);
}

int main(){
	init();
	int x, y,ans=0;
	set<int> s;
	cin >> n >> m;
	for (int i = 1; i <= m; i++){
		cin >> x >> y;
		unionS(x, y);
	}
	for (int i = 1; i <= n; i++) s.insert(findS(i));
	
	for (set<int>::iterator it = s.begin(); it != s.end(); it++){
		ans += cnt[*it];
		ans--;
	}
	cout << (long long)pow(2, ans) << endl;
	return 0;
}
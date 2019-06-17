
 #include <bits/stdc++.h>
using namespace std;
void init(vector<int>& v){ for (int i = 0; i < v.size(); i++) v[i] = i; }
int findSet(int i, vector<int>& v){ return v[i] == i ? i : v[i] = findSet(v[i],v); }
void unionSet(int i, int j, vector<int> &v){ v[findSet(i,v)] = findSet(j,v);}
int countSet(vector<int>& v){
	set<int> s;
	for (int i = 0; i < v.size(); i++) s.insert(findSet(v[i],v));
	return s.size();
}
typedef long long ll;
int main(){
	ll n,k;
	cin >> n >> k;
	k--;
	if ((1 + 2 *k)>n) cout << ((1 + 2 * k) % n+!(n%2));
	else cout <<1+2*k<<endl;
	return 0;
}
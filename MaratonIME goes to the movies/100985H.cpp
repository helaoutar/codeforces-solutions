#include <bits/stdc++.h>
using namespace std;
int n,x;
double dist(vector<int>& v1,vector<int>& v2){
	double sum = 0;
	for (int i = 0; i < v1.size(); i++)
		sum += (pow(v1[i]-v2[i], 2));
	return sqrt(sum);
}

int main(){
	cin >> n;
	vector<int> v[3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < n; j++){
			cin >> x;
			v[i].push_back(x);
		}
	}
	if (dist(v[0], v[1]) <= dist(v[0], v[2])) cout << "Yan" << endl;
	else cout << "MaratonIME" << endl;
	return 0;
}
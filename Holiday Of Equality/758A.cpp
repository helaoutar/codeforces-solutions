#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,maxi,ans=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) 
        cin >> v[i];
    maxi=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++) 
        ans+=(maxi-v[i]);
    cout << ans << endl;
    
    return 0;
}
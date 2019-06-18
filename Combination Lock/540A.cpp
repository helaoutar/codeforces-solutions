#include<iostream>
using namespace std;

int mini(int a,int b){
    if(a<b)
        return a;
    return b;
}

int main(){
    int n,mv=0,i;
    string s1,s2;

    cin>>n;
    cin>>s1;
    cin>>s2;
    for(i=0;i<n;i++)
        mv+=mini(abs(s1[i]-'0'-(s2[i]-'0')),10-abs(s1[i]-'0'-(s2[i]-'0')));
    cout<<mv;
    return 0;
}
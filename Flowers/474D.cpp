#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int t,k,a,b;
long long dp[100001];
int main(){
   scanf("%d %d",&t,&k);
   dp[0]=1;
   for(int i=1;i<100001;i++)
    dp[i]=(dp[i-1]+(i-k>=0?dp[i-k]:0))%MOD;
    for(int i=1;i<100001;i++)
        dp[i]=(dp[i]+dp[i-1])%MOD;
   while(t--){
        scanf("%d %d",&a,&b);
        printf("%I64d\n",(dp[b]-dp[a-1]+MOD)%MOD);
   }
return 0;
}
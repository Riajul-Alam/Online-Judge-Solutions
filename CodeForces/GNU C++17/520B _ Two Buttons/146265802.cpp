//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[20005],n,m;
int f(int root)
{
 if(root>=m) return dp[root]=(root-m);
 if(dp[root]!=-1)return dp[root];
 
 dp[root]=INT_MAX-3;
 int ret1=INT_MAX-3,ret2=INT_MAX-3;
 ret1=min(ret1,f(root*2)+1);
 if(root-1>0)ret2=min(ret2,f(root-1)+1);
 dp[root]=min(ret1,ret2);
 return dp[root];
}
void solve()
{
    ll x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    ans=f(n);
    cout<<ans<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //ll t;cin>>t;while(t--) 
   solve();          
}
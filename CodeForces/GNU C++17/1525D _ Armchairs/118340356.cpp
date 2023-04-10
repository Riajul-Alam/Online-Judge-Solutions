//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
vector<ll>ar,br;
ll dp[5005][5005];
ll f(ll i,ll j){
 if(i==ar.size()) return 0;
 else if(j==br.size()) return INT_MAX;
 
 if(dp[i][j]!=-1){return dp[i][j];}
 dp[i][j]=INT_MAX;
 
 dp[i][j]=min(dp[i][j],f(i+1,j+1)+abs(ar[i]-br[j]));
 dp[i][j]=min(dp[i][j],f(i,j+1));
  return dp[i][j];
}
 
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     cin>>x;
     if(x==1){ar.push_back(i+1);}
     else br.push_back(i+1);
   }
   memset(dp,-1,sizeof(dp));
   ans=f(0,0);
   cout<<ans<<endl;
 
 }
}
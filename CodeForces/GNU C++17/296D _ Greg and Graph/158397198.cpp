//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0;
    cin>>n;
    vector<vector<ll>>dist(n,vector<ll>(n,0));
    //ll dist[n+5][n+5];
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
      cin>>x;dist[i][j]=x;
     }
    }
    vector<ll>order(n),ans;
    for(int i=0;i<n;i++)cin>>order[i];
    reverse(all(order));
 for(int k=0;k<n;k++)
 {
  ll kv=order[k]-1;
  //FW part
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
    ll ndist=dist[i][kv]+dist[kv][j];
    dist[i][j]=min(dist[i][j],ndist);
   }
  }
  sum=0;
  // all pair sum
  for(int i=0;i<=k;i++)
  {
   for(int j=0;j<=k;j++)
   {
    sum+=dist[order[i]-1][order[j]-1];
   }
  }
  ans.pb(sum);
 }
 reverse(all(ans));
 for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   solve();          
}
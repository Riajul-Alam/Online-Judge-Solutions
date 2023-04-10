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
#define debug cout<<"OK"<<endl;
vector<vector<ll>>adj;
vector<bool>visited;
ll n,m,Count=0;
 bool dfs(ll i,ll j)
 {
    if(visited[i]){return false;}
    visited[i]=true;
    for(ll q=0;q<adj[i].size();q++)
    {
     if(adj[i][q]!=j)
     {
      Count++;
      if(dfs(adj[i][q],i)==false)
       return false;
     }
    }
    return true;
 }
int main()
{
  cin>>n>>m;
     adj.resize(n+1);
     visited.resize(n+1,false);
 
   for(ll i=0;i<m;i++)
   {
    ll x,y;
     cin>>x>>y;
     adj[x].push_back(y);
     adj[y].push_back(x);
   }
   ll p=0;
   for(ll i=1;i<=n;i++)
   {
    Count=0;
    if(!visited[i])
    {
     bool f=dfs(i,-1);
     //cout<<f<<endl;
     if(f==false && Count%2!=0)
     {
      p++;
     }
    }
   }
   if((n-p)%2)
   {
    p++;
   }
   cout<<p<<endl;
   return 0;
}
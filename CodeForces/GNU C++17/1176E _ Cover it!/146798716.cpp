//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll level[200005];
void bfs(ll node,vector<vector<ll>>a,vector<bool>&vis)
{
  queue<ll>q;
  q.push(node);
  vis[node]=1;
  level[node]=0;
  while(!q.empty())
  {
    ll u=q.front();
    q.pop();
    for(int v=0;v<(a[u].size());v++)
    {
      ll next=a[u][v];
      if(!vis[next]){
       level[next]=level[u]+1;
       vis[next]=1;
       q.push(next);  
      }
      
    }
  }
}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<vector<ll>>a(n+5);
    vector<bool>vis(n+5);
    level[n+5]={};
    for(int i=0;i<m;i++)
    {
     cin>>x>>y;
     a[x].push_back(y);
     a[y].push_back(x);
    }
    bfs(1LL,a,vis);
    vector<ll>odd,even;
    for(int i=1;i<=n;i++)
    {
     if(level[i]%2)odd.push_back(i);
     else even.push_back(i);
    }
    if(odd.size()>even.size()){
     cout<<even.size()<<endl;
     for(int i=0;i<even.size();i++)cout<<even[i]<<" ";
    }
    else if(odd.size()<even.size()){
     cout<<odd.size()<<endl;
     for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";
    }
    else{
     cout<<even.size()<<endl;
     for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";
    }
 cout<<endl;
    
 
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   ll t;cin>>t;while(t--) 
   solve();          
}
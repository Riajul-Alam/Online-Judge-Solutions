//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 500005
vector<ll>g[M];
ll dfs(int u)
{
 ll dep=0;
 for(auto v:g[u])
 {
  dep=max(dep,dfs(v)+1LL);
 }
 return dep;
}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];g[i+1].clear();
    }
    queue<ll>q;
    q.push(1);
    ll ind=1;
    c1=1;
    //ll level[n+5]={};
   // level[1]=0;
    while(!q.empty())
    {
/*     ll crCount=0;
     for(int i=0;i<c1;i++)
     {*/
      ll u=q.front();
      q.pop();
      ll last=-1;
      while(((ind<n)&&(a[ind]>last)))
      {
       g[u].push_back(a[ind]);
       //g[a[ind]].push_back(u);
       //level[a[ind]]=level[u]+1;
       last=a[ind];q.push(last);
       ind++;//crCount++;
      }
     //}
     //c1=crCount;
    }
    cout<<dfs(1)<<endl;
   // cout<<level[a[n-1]]<<endl;
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
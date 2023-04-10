//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvl vector<vl>
 
#define f0(b) for(int i=0;i<(b);i++)
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
#define N 300005
 
vector<vl>g,tree;
vector<ll>subsize;
vector<bool>vis;
 
ll dfs(ll node)
{
  ll ans=0;
  if(sz(tree[node])==0)return 0;
  if(sz(tree[node])>1){
    ans=subsize[tree[node][1]]+dfs(tree[node][0]);
    ans=max(ans,subsize[tree[node][0]]+dfs(tree[node][1]));
  }else{
    ans=subsize[tree[node][0]];
  }
  return ans;
}
 
ll dfs1(ll node)
{
  vis[node]=1;
  ll ans=0;
  for(int i=0;i<sz(g[node]);i++)
  {
    ll next=g[node][i];
    if(!vis[next]){
      ans+=(1+dfs1(next));
      tree[node].pb(next);
    }
  }
  subsize[node]=ans;
  return subsize[node];
}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    g.resize(n+5);
    tree.resize(n+5);
    subsize.resize(n+5,0);
    vis.resize(n+5,0);
    f0(n+1){ vis[i]=0;subsize[i]=0;g[i].clear();tree.clear();}
 
    for(int i=0;i<n-1;i++)
    {
      cin>>x>>y;
      g[x].pb(y);
      g[y].pb(x);
    }
    f0(n+1){vis[i]=0;}
    dfs1(1);
    f0(n+1){vis[i]=0;}
    if(sz(g[1])==1){
      cout<<subsize[1]-1<<endl;return;
    }
    ans=dfs(1);
    cout<<ans<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast;
   ll t;cin>>t;while(t--) 
   solve();           
}
//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define eb emplace_back
#define ppb pop_back
#define ppf pop_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fnd(a,x) find(all(a),x) // indicate FO index=(pos-a.begin())
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
/*ll dp[500005],mx=0;
ll dfs(set<ll>g[],ll n,ll node,vector<ll>&vis,vector<ll>&dp,vector<ll>&tmp)
{
 vis[node]=1;
 ll ans=1;
 mx++;tmp.pb(node);
 for(auto q:g[node])
 {
  if(!vis[q])
  {
   dfs(g,n,q,vis,dp,tmp);
  }
 }
 dp[node]=max(dp[node],mx);
 return mx;
}
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m;
   set<ll>g[n+1];
   vector<ll>vis(n+1,0);
   vector<ll>dp(n+5,1);
   for(int i=1;i<=n;i++){
    g[i].in(i);
   }
   for(int i=0;i<m;i++)
   {
    cin>>k;
    if(k>0)cin>>x;
    for(int j=0;j<k-1;j++)
    {
     cin>>y;
     g[x].in(y);
     g[y].in(x);
     x=y;
    }
   }
   vis=vector<ll>(n+5,0);
   for(int i=n;i>=1;i--)
   {
    if(!vis[i])
    {
     vector<ll>tmp;mx=0;
     mx=dfs(g,n,i,vis,dp,tmp);
     for(int j=0;j<sz(tmp);j++)
     {
      dp[tmp[j]]=mx;
     }
    }
   }
   for(int i=1;i<=n;i++)
   {
    cout<<dp[i]<<" ";
   }cout<<endl;
 
 }
}*/
struct DSU{
    int n;
    vector<int>par,_size;
    DSU(int N)
    {
      n=N;
      par.assign(n+1,-1);
      for(int i=0;i<=n;i++)
      {
        par[i]=i;
      }
    }
    int FindP(int u){
      if(par[u]==u) return u;
      return par[u]=FindP(par[u]);
    }
    void Merge(int u,int v)
    {
      u=FindP(u);
      v=FindP(v);
      if(u==v)return;
      par[v]=u;
    }
};
void solve()
{
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m;
   DSU ob(n);
   for(int i=0;i<m;i++)
   {
    cin>>k;
    if(k>0)cin>>x;
    for(int j=1;j<k;j++)
    {
     cin>>y;
     ob.Merge(x,y);
     x=y;
    }
   }
   vector<ll>group(n+5);
   for(int i=1;i<=n;i++){
    group[ob.FindP(i)]++;// increase parent size 
   }
   for(int i=1;i<=n;i++)
   {
    cout<<group[ob.FindP(i)]<<" ";// parent size= all child Size cause they are in same group
   }cout<<endl;
 
 } 
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
//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define ppb pop_back
#define ppf pop_front
#define nl '\n'
#define sp ' '
 
#define vi vector<int>
#define vl vector<ll>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ppp pair<pair<ll,ll>,pair<ll,ll>>
 
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(b) for(int i=1;i<=(b);i++)
#define f11(b) for(int j=1;j<=(b);j++)
#define f2(a,b) for(int i=(a);i<=(b);i++)
#define f22(a,b) for(int j=(a);j<=(b);j++)
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define mem(a,b) memset(a,b,sizeof(a))
#define Find(a,x) find(all(a),x)
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(vector<vector<T>> &v){cerr << "[ ";for (auto i : v){_print(i);}cerr << " ]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
#define N 300005
void dfs2(ll node,vector<vector<ll>>&g,vector<vector<ll>>&tree,vector<bool>&vis)
{
  vis[node]=1;
  for(int i=0;i<sz(g[node]);i++)
  {
    ll next=g[node][i];
    if(!vis[next]){
      dfs2(next,g,tree,vis);
      tree[node].pb(next);
    }
  }
}
ll dfs(ll node,vector<vector<ll>>&tree,vector<ll>&subsize)
{
  ll ans=0;
  if(sz(tree[node])==0)return 0;
  if(sz(tree[node])>1){
   ans=subsize[tree[node][1]]+dfs(tree[node][0],tree,subsize);
   ans=max(ans,subsize[tree[node][0]]+dfs(tree[node][1],tree,subsize));
  }else{
   ans=subsize[tree[node][0]];
  }
  return ans;
}
ll dfs1(ll node,vector<vector<ll>>&g,vector<ll>&subsize,vector<bool>&vis)
{
  vis[node]=1;
  ll ans=0;
  for(int i=0;i<sz(g[node]);i++)
  {
    ll next=g[node][i];
    if(!vis[next]){
      ans+=(1+dfs1(next,g,subsize,vis));
    }
  }
  subsize[node]=ans;
  return subsize[node];
}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
 //vector<ll>g[n+5],tree[n+5];
 vector<vector<ll>>g(n+5),tree(n+5);
 vector<ll>subsize(n+5);
 vector<bool>vis(n+5);
    f0(n+1){
     vis[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
      cin>>x>>y;
      g[x].pb(y);
      g[y].pb(x);
    }
    // f1(n){
    //  cout<<i<<" --> ";
    //  f00(sz(g[i])){
    //   cout<<g[i][j]<<" ";
    //  }cout<<endl;
    // }
    dfs2(1,g,tree,vis);
    // f1(n){
    //  cout<<i<<" --> ";
    //  f00(sz(tree[i])){
    //   cout<<tree[i][j]<<" ";
    //  }cout<<endl;
    // }
    f0(n+1){vis[i]=0;}
    dfs1(1,g,subsize,vis);
    f0(n+1){vis[i]=0;}
    if(sz(g[1])==1){
     cout<<subsize[1]-1<<endl;return;
    }
    ans=dfs(1,tree,subsize);
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
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
ll modInverse(ll a,ll b)
{
    ll ans= 1;
    while (b) {
 
        if(b&1) { //right most bit set or not 
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b >>= 1;// right shift 1 ,basically divide by 2
    }
    return ans;
} 
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return modInverse(a,mod-2) ; }
inline ll modDiv(ll a,ll b){return modMul(a,modInv(b));}
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   //ll a[n+5];
   vector<ll>a(n+5),b(n+5);
   map<ll,ll>mp;
   for(int i=1;i<=n;i++)
   {
     cin>>a[i];mp[a[i]]=i;
   }
   for(int i=1;i<=n;i++)
   {
    cin>>b[i];
   }
   bool vis[n+5]={};
   for(int i=1;i<=n;i++)
   {
    if(!vis[i]){
     ans++;
     //vis[i]=1;
     y=mp[b[i]];
     while(!vis[y]){
      vis[y]=1;
      y=mp[b[y]];
     }
    }
   }
   ans=modInverse(2,ans);
   cout<<ans<<endl;
 }
}
const ll Max=400005;
vector<ll>graph[Max];
bool visited[Max];
void dfs(ll node){
 visited[node]=1;
 for(auto x:graph[node]){
  if(!visited[x]){
   dfs(x);
  }
 }
 return;
}
void solve2()
{
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   vector<ll>a(n+5),b(n+5);
   for(ll i=1;i<=n;i++)
   {
     cin>>a[i];
   }
   for(ll i=1;i<=n;i++)
   {
    cin>>b[i];
   }
   for(ll i=1;i<=n;i++){
    x=a[i],y=b[i];
    graph[x].pb(y);
    graph[y].pb(x);
   }
   for(ll i=1;i<=n;i++)
   {
    if(!visited[i]){
     ans++;
     dfs(i);
    }
   }
   ans=modInverse(2,ans);
   cout<<ans<<endl;
   for(int i=1;i<=n+5;i++){
    graph[i].clear();visited[i]=0;
   }
   
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
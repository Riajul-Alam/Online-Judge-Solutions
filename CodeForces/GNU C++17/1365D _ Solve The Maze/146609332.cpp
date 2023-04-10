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
#define nline "\n"
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fnd(a,x) find(all(a),x)
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
template <class T>void _print(vector<vector<T>> &v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(vector<vector<T>> &v){cerr << "[ ";for (auto i : v){_print(i);}cerr << " ]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
#define Max 60
int vis[Max][Max];
int g[Max][Max];
int n,m;
void dfs(int i,int j)
{
   if(i<0 || j<0 || i >= n || j >= m || vis[i][j]==1 || g[i][j]==1){
    return;
   }
    vis[i][j]=1;
 if (i<n-1)dfs(i+1,j);
 if (i>0)dfs(i-1,j);
 if (j>0)dfs(i,j-1);
 if (j<m-1)dfs(i,j+1);
}
void solve()
{
    int x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;    
    memset(g,0,sizeof(g));
    memset(vis,0,sizeof(vis));
    char a[60][60];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++){
       cin>>a[i][j];
      }
    }
 
    int found=0;
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
    if (g[i][j] == 0 && (a[i][j] == '#' || a[i][j] == 'B')) {
     g[i][j] = 1;
    }
 
    if (a[i][j] == 'B') {
     if (i < n - 1)
      g[i + 1][j] = 1;
     if (j < m - 1)
      g[i][j + 1] = 1;
     if (i > 0)
      g[i - 1][j] = 1;
     if (j > 0)
      g[i][j - 1] = 1;
    }
 
    if (a[i][j] == 'B') {
     if (i < n - 1 && a[i + 1][j] == 'G')
      found = 1;
     if (j < m - 1 && a[i][j + 1] == 'G')
      found = 1;
     if (i > 0 && a[i - 1][j] == 'G')
      found = 1;
     if (j > 0 && a[i][j - 1] == 'G')
      found = 1;
    }
 
     }
    }
 if (found) {
   cout << "No" <<endl;
  } else {
   found = 0;
   dfs(n - 1, m - 1);
 
   for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
     if (a[i][j] == 'G' && vis[i][j] != 1) {
      found =1;
      break;
     }
    }
 
    if (found)
     break;
   }
 
   if (found) {
    cout << "No" << endl;
   } else {
    cout << "Yes" <<endl;
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
   ll t;cin>>t;while(t--) 
   solve();          
}
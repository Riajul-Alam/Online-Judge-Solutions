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
#define fnd(a,x) find(all(a),x)
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
#define eps 1e-10
#define INF 1e18
 
void solve()
{
    ll n,m,d,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>d;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vector<vector<ll>>chains;
    map<ll,bool>visited;
    int found=0;
    // Creating all chain
    for(int i=0;i<n;i++)
    {
     int cur=i;
     if(visited[cur])continue;
     vector<ll>chain;
     while(!visited[cur]){
      chain.pb(a[cur]);
      visited[cur]=1;
      cur=(d+cur)%n;
     }
     chains.pb(chain);
    }
    // explored all chain for
    // finding max adjacent 1 
    ll rotation=0;
    for(auto chain:chains)
    {
     ll zero=0,one=0;
     for(auto node:chain){
      if(node)one=1;
      else zero=1;
     }
     ll nn=sz(chain);
     if(one && !zero){found=1;break;}
     if(zero && one){
      // normal case 
      for(int i=0;i<nn;i++)
      {
       ll j=i;
       ll len=0;
       while(j<nn && chain[j]==1){
        j++;len++;
       }
       i=j;
       rotation=max(rotation,len);
      }
      // special case 1 1 1 0 0 0 1 1 -->ans=5
      // chain n'th and 1st one are adjacent
      ll startLen=0,j=0;
      while(j<nn && chain[j]==1)
      {
       startLen++,j++;
      }
      ll backLen=0;j=nn-1;
      while(j>=0 && chain[j]==1)
      {
       backLen++;j--;
      }
      x=startLen+backLen;
      rotation=max(rotation,x);
     }
    }
    if(found)cout<<-1<<endl;
    else cout<<rotation<<endl;
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
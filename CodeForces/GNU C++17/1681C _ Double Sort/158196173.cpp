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
 
bool Sorted(vector<ll>&a,vector<ll>&b)
{
 for(int i=1;i<sz(a);i++){
  if(a[i]<a[i-1]){
   return 0;
  }
 }
 for(int i=1;i<sz(b);i++){
  if(b[i]<b[i-1]){
   return 0;
  }
 }
 return 1;
}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n),b(n),c,d,aa,bb;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
     cin>>b[i];
    }
    c=a,d=b;
    sort(all(c));
    sort(all(d));
    vector<pll>an,an1;
    for(int i=0;i<n;i++){
     if(c[i]!=a[i]){
     for(int j=i+1;j<n;j++)
     {
      if(c[i]==a[j]){
       if(i!=j)an.pb({j+1,i+1});
       swap(a[i],a[j]);
       swap(b[i],b[j]);break;
      }
     }
      }
    }
    debug(a)
    debug(b)
    if(Sorted(a,b)){
     cout<<sz(an)<<endl;
     for(auto p:an){
      cout<<p.ff<<" "<<p.ss<<endl;
     }return;
    }
    for(int i=0;i<n;i++){
     if(d[i]!=b[i]){
     for(int j=i+1;j<n;j++)
     {
      if(d[i]==b[j]){
       if(i!=j)an.pb({j+1,i+1});
       swap(a[i],a[j]);
       swap(b[i],b[j]);break;
      }
     }
      }
    }
    debug(a)
    debug(b)
 
    if(Sorted(a,b)){
     cout<<sz(an)<<endl;
     for(auto p:an){
      cout<<p.ff<<" "<<p.ss<<endl;
     }return;
    }
    cout<<-1<<endl;
 
 
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
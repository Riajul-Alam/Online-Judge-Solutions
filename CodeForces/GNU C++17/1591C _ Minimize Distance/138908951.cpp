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
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>k;
    vector<ll>a(n),b,c;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>0)b.pb(a[i]);
      else if(a[i]<0)c.pb(abs(a[i]));
    }
    sort(all(a));
    sort(all(b));    
    reverse(all(b));
    sort(all(c));
    reverse(all(c));
    debug(b)
    debug(c)
    for(int i=0;i<sz(b);i++)
    {
     ans+=((b[i])*2);
     debug(b[i])
     if(i+k-1<sz(b)){
      i+=(k-1);
     }
     else{
      i=sz(b);
     }//debug(i)
     //debug(b[i]);
    }
    //debug(ans)
    for(int i=0;i<sz(c);i++)
    {
     ans+=(c[i]*2);
     if(i+k-1<sz(c)){
      i+=(k-1);
     }
     else{
      i=sz(c);
     }
    }
    //debug(ans)
    if(sz(c)>0 && sz(b)>0)
    {
      debug(c[0]*2)
      debug(b[0]*2)
     if(b[0]*2<=(abs(c[0])*2)){
      ans-=(abs(c[0]));
     }
     else{
      ans-=(abs(b[0]));
     }
    }
    else if(sz(c)>0)
    {
     ans-=(abs(c[0]));
    }
    else if(sz(b)>0)
    {
     ans-=(abs(b[0]));
    }
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
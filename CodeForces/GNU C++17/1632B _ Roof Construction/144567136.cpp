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
ll Pow(ll a,ll b){ll ans=1;while(b){if(b%2==0){a=a*a;b/=2;}else{ans*=a;b--;}} return ans;}
void solve()
{
    ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    if(n==1){
     cout<<0<<endl;return;
    }else if(n==2){
     cout<<0<<" "<<1<<endl;return;
    }
    else if(n==3){
     cout<<2<<" "<<0<<" "<<1<<endl;return;
    }
    deque<ll>b,c;
    b.pb(1);b.pb(2);b.pb(3);
    c1=4;
    x=4;
    bool ok=0;
    for(int i=2;i<100;i++)
    {
     y=Pow(2,i);
     for(int j=1;j<y;j++)
     {
      if(c1==n){
       c2++;break;
      }
      if(ok){
       b.pb(x);
      }else{
       b.pf(x);
      }
      c1++;
      x++;
     }
     if(ok)ok=0;
     else ok=1;
     if(c2)break;
    }
    ll mx=0,ind=0;
    for(int i=1;i<n-1;i++)
    {
     if((b[i]^b[i-1])>mx){
      mx=(b[i]^b[i-1]);
      ind=i;
     }
    }
    for(int i=0;i<n-1;i++){
     if(i==ind){
      cout<<0<<" "<<b[i]<<" ";
     }else{
      cout<<b[i]<<" ";
     }
    }cout<<endl;
    
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
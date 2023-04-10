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
const ll MAXN = 300010;
ll fact[MAXN], inverse[MAXN];
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
void preCompute()
{
    fact[0] = 1;
    inverse[0] = 1;
 for (ll i = 1; i <= 300002; i++) {
  fact[i] = (fact[i - 1] * i ) % mod;
        inverse[i] =modInverse(fact[i], mod - 2);  
 }
}
// ncr = ( n*(n-1)*(n-2)*.....(n-r+1) ) * mod_inverse(fact[r],p);
ll nCr(ll n, ll r) {
/* if(n==0 && r==0) return 1;
 if(r>n) return 0;*/ 
    if (r==0) {
        return 1;
    }
 
    ll ans = fact[n];
    ans = (ans * inverse[n - r]) % mod;
    ans = (ans * inverse[r]) % mod;
 
    return ans;
}
/* Call preCompute Initially*/
void solve()
{   
 int t=1;
 //cin>>t;
 preCompute();
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=1;
   cin>>n>>m>>k;
   ll L=0,G=0;
   ll l=0,r=n;
   while(l<r)
   {
    ll mid=(l+r)/2;
    if(mid==k){l=mid+1;c1++;}
    else if(mid<k){l=mid+1;L++;}
    else{ r=mid; G++;}
   }
   debug(L)debug(G)
 if(l>0 && (l-1)==k){
  ll leftPossible=0;
  if(m-1>=0 && m-L-1>=0)leftPossible=modMul(fact[m-1],modInv(fact[m-L-1]));
  ll tmp=(m-1);
  debug(tmp) //debug((m-1))
  debug(leftPossible)
  ll rightPossible=0;
  if(n-m>=0 && n-m-G>=0)rightPossible=modMul(fact[n-m],modInv(fact[n-m-G]));
  ll disPossible=fact[n-G-L-1];
  debug(rightPossible)
  ll totalPossible=(disPossible%mod)%mod;
  totalPossible=modMul(totalPossible,leftPossible);
  totalPossible=modMul(totalPossible,rightPossible);
  cout<<totalPossible<<endl;
 }else{
  cout<<0<<endl;
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
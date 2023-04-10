//Bismillahir Rahmanir Raheem
//#include<bits/stdc++.h>
#include<iostream>
#include<numeric>
#include<tuple>
#include<bitset>
#include<iomanip>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<math.h>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<string.h>
#include<deque>
#include<set>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define  mem(a,b)   memset(a,b,sizeof(a))
#define dbg(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
 
const ll mod = 1000000007;
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
    if (r==0) {
        return 1;
    }
 
    ll ans = fact[n];
    ans = (ans * inverse[n - r]) % mod;
    ans = (ans * inverse[r]) % mod;
 
    return ans;
}
/* Call preCompute Initially*/
ll bigmod(ll a,ll b,ll m){
    if(b==0)return 1%m;
    ll x=bigmod(a,b/2,m)%m;
    x=(x*x)%m;
    if(b%2)x=(x*a)%m; // odd check
    return x;
}
void solve()
{   
 preCompute();
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=1;
   cin>>n;
   ans=fact[2*n];
   cout<< modMul(inverse[2],ans)<<endl;
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
//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
 
void solve()
{
    ll n,m,k,final=0;
    cin>>n;
    vector<ll>brr(n);
    for(ll i=0;i<n;i++)cin>>brr[i];
    final=brr[0];
    for(ll i=1;i<n;i++)final=__gcd(brr[i],final);
    if(final==1){cout<<0<<endl;return;}
    final=INF;
    for(ll i=0;i<n;i++){
      ll x=__gcd(brr[i],i+1);
      ll gcd=0;
      for(ll j=0;j<n;j++){
        if(i==j){
          gcd=__gcd(x,gcd);
        }else{
          gcd=__gcd(gcd,brr[j]);
        }
      }
      if(gcd==1){
        final=min(final,(n-i));
      }
    }
    final=min(final,3LL);
    cout<<final<<endl;return;
 
 
 
 
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
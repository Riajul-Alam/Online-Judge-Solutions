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
 
void solve()
{
    ll n,m,a,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
    cin>>x>>y>>a;
    if(y%a==0){
     if(y-1>=x)ans=max((y-1)%a+((y-1)/a),ans);
    }
    ans=max(ans,((y/a)+(y%a)));
 n=(y/a);
 if((y+1)%a==0){
  ans=max((y/a)+(a-1),ans);
 }
 if(n>0){
  ll tm=a-1;
  y=(n*a);
  if(y-1>=x)ans=max(ans,(a-1)+((y-1)/a));
 }else{
  ans=max(y,ans);
 }
 ans=max(ans,(x/a)+x%a);
 cout<<ans<<endl;
 return;
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
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
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define vpls vector<pair<ll,string>
#define vpsl vector<pair<string,ll>>
 
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(i,l,r) for(int i=l;i<r;i++)
#define rf1(i,r,l) for(int i=r-1;i>=l;i--)
#define f2(i,l,r) for(int i=l;i<=r;i++)
#define rf2(i,r,l) for(int i=r;i>=l;i--)
#define print1(x) cout<<x<<endl;
#define print2(x,y) cout<<x<<" "<<y<<endl;
#define print3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define mem(a,b) memset(a,b,sizeof(a))
#define Find(a,x) find(all(a),x)
#define LB(a,X) lower_bound(all(a),X)-a.begin()
#define UB(a,X) upper_bound(all(a),X)-a.begin()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define bug2(x,y) cerr<<#x<<" "<<#y<<endl; _print(x);cerr<<" ";_print(y);cerr<<endl;
#define bug3(x,y,z) cerr<<#x<<" "<<#y<<" "<<#z<<endl; _print(x);cerr<<" ";_print(y);cerr<<" ";_print(z);cerr<<endl;
#else
#define debug(x)
#define bug2(x,y)
#define bug3(x,y,z)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>void _print(vector<vector<T>> &v){cerr << "[ ";for (auto i : v){_print(i);}cerr << " ]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T,class V> void printpair(vector<pair<T,V>>p){for(auto q:p)cout<<q.ff<<" "<<q.ss<<endl;}
template <class T> void print(vector<T>v){for (T i : v) {cout<<i<<" ";}cout<<endl;}
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
ll check(vector<pll>c,vector<pll>d,ll n){
      ll sum=0;
      ll i=0,j=0;
      vector<pll>tmp;
      while(i<sz(c) && j<sz(d)){
        tmp.pb(d[j]);tmp.pb(c[i]);i++,j++;
      }
      while(j<sz(d)){
        tmp.pb(d[j]);j++;
      }
      while(i<sz(c)){
        tmp.pb(c[i]);i++;
      }
      i=0,j=0;
      sum+=tmp[0].ff;
      for(ll i=1;i<n;i++){
        if(tmp[i-1].ss!=tmp[i].ss){
          sum+=(tmp[i].ff*2);
        }else{
          sum+=tmp[i].ff;
        }
      }
      return sum;
}
void solve()
{
    ll n,m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n),b(n);
    vector<pll>c,d;
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(ll i=0;i<n;i++){cin>>b[i];sum+=b[i];}
    for(ll i=0;i<n;i++){
      if(a[i]==0){
        c.pb({b[i],a[i]});
      }else{
        d.pb({b[i],a[i]});
      }
    }
    sort(rall(c));sort(rall(d));
    if(sz(c)==n){
      cout<<sum<<endl;return;
    }
    else if(sz(d)==n){
      cout<<sum<<endl;return;
    }
    x=0,y=0;
    x=check(c,d,n),y=check(d,c,n);
    ans=max(x,y);c1=0;
    if(c1==0){
      sum=0;
      i=0,j=0;
      vector<pll>tmp;
      tmp.pb(c[sz(c)-1]);
      while(i<sz(c)-1 && j<sz(d)){
        tmp.pb(d[j]);tmp.pb(c[i]);i++,j++;
      }
      while(i<sz(c)-1){
        tmp.pb(c[i]);i++;
      }
      while(j<sz(d)){
        tmp.pb(d[j]);j++;
      }
      i=0;
      sum+=tmp[0].ff;
      for(int i=1;i<n;i++){
        if(tmp[i-1].ss!=tmp[i].ss){
          sum+=(tmp[i].ff*2);
        }else{
          sum+=tmp[i].ff;
        }
      }
      ans=max(ans,sum);
    }c1=0;
    if(c1==0){
      sum=0;
      i=0,j=0;
      vector<pll>tmp;
      tmp.pb(d[sz(d)-1]);
      while(i<sz(c) && j<sz(d)-1){
        tmp.pb(c[i]);tmp.pb(d[j]);i++,j++;
      }
      while(i<sz(c)){
        tmp.pb(c[i]);i++;
      }
      while(j<sz(d)-1){
        tmp.pb(d[j]);j++;
      }
      i=0;
      sum+=tmp[0].ff;
      for(int i=1;i<n;i++){
        if(tmp[i-1].ss!=tmp[i].ss){
          sum+=(tmp[i].ff*2);
        }else{
          sum+=tmp[i].ff;
        }
      }
      ans=max(ans,sum);
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
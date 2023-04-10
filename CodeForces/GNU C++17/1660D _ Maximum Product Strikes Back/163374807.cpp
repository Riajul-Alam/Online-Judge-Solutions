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
vector<ll>f(vector<ll>a)
{
 ll n=sz(a);
 ll st=0,end=0,sum=1,minus=0,total=0;
 vector<ll>tmp;
 for(int i=0;i<n;i++){if(a[i]<0)minus++;if(abs(a[i])==2)total++;}
 if(minus%2==0){tmp.pb(st);tmp.pb(end);tmp.pb(total);return tmp;}
 ll sum1=0,sum2=0,x,c1=0;
 for(int i=0;i<sz(a);i++){
  st++;
  if(abs(a[i])==2)sum1++;
  if(a[i]<0){
   c1++;
   break;
  }
 }
 for(int i=sz(a)-1;i>=0;i--){
  end++;
  if(abs(a[i])==2)sum2++;
  if(a[i]<0){
   c1++;
   break;
  }
 }
 if(c1==0){
  tmp.pb(sz(a));
  tmp.pb(0);
  tmp.pb(0);return tmp;
 }
 if(sum1<sum2){
  tmp.pb(st);
  tmp.pb(0);
  tmp.pb(total-sum1);
 }else{
  tmp.pb(0);
  tmp.pb(end);
  tmp.pb(total-sum2);
 }
 return tmp;
}
void solve()
{
    ll n,m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vector<pll>vp;
    map<pll,ll>mp;
    map<ll,pll>mp1;
    vector<ll>tm;
    ll stind=0,endind=0;
    for(int i=0;i<n;i++)
    {
     if(a[i]==0){
      vector<ll>xx=f(tm);
      vp.pb({stind+(xx[0]),endind-(xx[1])});
      mp[{stind+(xx[0]),endind-(xx[1])}]=xx[2];
      tm.clear();
      stind=endind=i+1;continue;
     }
     tm.pb(a[i]);endind=i+1;
    }
    if(sz(tm)>0){
  vector<ll>xx=f(tm);
  vp.pb({stind+(xx[0]),endind-(xx[1])});
  mp[{stind+(xx[0]),endind-(xx[1])}]=xx[2];  
    }
    for(auto q:mp){
     mp1[q.ss]={q.ff.ff,q.ff.ss};
    }
    debug(mp)
    auto q=mp1.end();q--;
    cout<<(q->ss.ff)<<sp<<n-(q->ss.ss)<<endl;
/*    ans=0;
    for(int i=0;i<sz(vp);i++){
     if(mp[{vp[ans].ff,vp[ans].ss}]<mp[{vp[i].ff,vp[i].ss}])ans=i;
    }
    cout<<vp[ans].ff<<sp<<vp[ans].ss<<endl;*/
 
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
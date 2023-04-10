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
    ll n,m,x,y,z,k,sum=INF,c1=0,c2=0,ans=INF,ans1=0;
    cin>>n>>k;
    vector<ll>a(n),b;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll tmpk=k;
    sort(rall(a));
    ll last=0;
    for(int i=0;i<n;i+=2)
    {
     if(k>0)
     {
      if(c1==0){ans=0;c1++;}
      ans+=(a[i+1]/a[i]);k--;last=i+2;
     }
     else {break;}
    }
    debug(ans)
    for(int i=last;i<n;i++)
    {
     if(c1==0){c1++,ans=0;}
     ans+=a[i];
    }
/*    c1=0;
    ll i=0,j=n-1;
    while(i<=j)
    {
     if(i==j){
      if(c1==0){
       c1++,sum=0;
      }
      sum+=a[i];break;
     }
     if(tmpk>0)
     {
      if(c1==0){
       sum=0,c1++;
      }
      sum+=(a[j]/a[i]);tmpk--;i++,j--;
     }
     else{
      if(c1==0){
       sum=0,c1++;
      }
      sum+=(a[i]+a[j]);i++,j--;
     }
    }*/
    c1=0;
    for(int i=0;i<tmpk;i++)b.pb(a[i]);
    for(int i=0;i<tmpk;i++)
    {
     if(c1==0){c1++;ans1=0;}
     ans1+=(a[i+tmpk]/a[i]);
    }
    for(int i=2*tmpk;i<n;i++)
    {
     if(c1==0){
      c1++,ans1=0;
     }
     ans1+=a[i];
    }
    if(ans1==INF && ans==INF)
    {
     cout<<0<<endl;
    }
    else if(ans1!=INF && ans!=INF){
     cout<<min(ans1,ans)<<endl;
    }
    else if(ans1==INF)
    {
     cout<<ans<<endl;
    }
    else if(ans==INF)
    {
     cout<<ans1<<endl;
    }   
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
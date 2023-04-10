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
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,sum=0,c1=0,c2=0;
   cin>>n;
   //ll a[n+5];
   vector<ll>a(n);
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];mp[a[i]]++;
   }
   ll q;cin>>q;
   vector<pair<ll,pair<ll,ll>>>vp;
  // vector<A>v();
   ll j=0;
   ll tmp=q;
   while(q--)
   {
    cin>>x>>y;
    vp.pb({y,{x,j}});j++;
    //vp.pb({y,x});
   }
   sort(all(vp));
   vector<ll>fi,ans(tmp);
   ll last=0;
   for(int i=0;i<tmp;i++)
   {
    if((vp[i].ff)==last)
    {
     ans[vp[i].ss.ss]=a[vp[i].ss.ff-1];continue;
    }
    else if(c2!=0)
    {
    ans[vp[i].ss.ss]=a[vp[i].ss.ff-1];continue;
    }
    vector<ll>tm(n);
    for(int j=last+1;j<=vp[i].ff;j++)
    {
     for(int k=0;k<n;k++)
     {
      tm[k]=mp[a[k]];
     }
     c1=0;
     mp.clear();
     for(int k=0;k<n;k++)
     {
      mp[tm[k]]++;
      if(a[k]!=tm[k])
      {
       c1++;
      }
      a[k]=tm[k];
     }
     if(c1==0)
     {
      c2++;break;
     }
     last=j;
    }
    ans[vp[i].ss.ss]=a[vp[i].ss.ff-1];
   }
   for(int i=0;i<tmp;i++)
   {
    cout<<ans[i]<<'\n';
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
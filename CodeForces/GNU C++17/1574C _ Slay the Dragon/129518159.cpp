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
typedef unsigned long long ull;
typedef long double lld;
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
ll LO(vector<ll>&a,ll val)
{
 ll l=-1,r=a.size();
 while(l+1<r)
 {
  ll mid=(l+r)/2;
  if(a[mid]<=val){
   l=mid;
  }
  else if(a[mid]>val){
   r=mid;
  }
 }
 return l+1;
}
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n;
   //ll a[n+5];
   vector<ll>a;
   for(int i=0;i<n;i++)
   {
    cin>>x;
     a.pb(x);sum+=a[i];
   }
   cin>>m;
   vector<pair<ll,ll>>vp;
   for(int i=0;i<m;i++)
   {
    cin>>x>>y;
    vp.pb({x,y});
   }
   sort(all(a));
   for(int i=0;i<m;i++)
   {
    ll tmpSum=sum,need=0;
    ans=0;
    auto q=LO(a,vp[i].ff);
    ll current=0;
    if(q==n){
     current=a[n-1];tmpSum-=current;
     if(tmpSum<vp[i].ss)
     {
      need=need+(vp[i].ss-tmpSum);
     }
     if(current<vp[i].ff)
     {
      need=need+vp[i].ff- current;
     }
     ans=need;
    }else{
     if(q>=n){
      current=a[n-1];tmpSum-=current;
      if(tmpSum<vp[i].ss)
      {
       need=need+(vp[i].ss-tmpSum);
      }
      if(current<vp[i].ff)
      {
       need=need+vp[i].ff- current;
      } 
         ans=need;
     }else{
      ll need1=0,need2=0;
      ll tmp1=tmpSum,tmp2=tmpSum;
      ll current1,current2;
      current1=a[q-1];tmp1-=current1;
      current2=a[q];tmp2-=current2;
      if(tmp1<vp[i].ss)
      {
       need1=need1+(vp[i].ss-tmp1);
      }
      if(current1<vp[i].ff)
      {
       need1=need1+vp[i].ff- current1;
      }
      if(tmp2<vp[i].ss)
      {
       need2=need2+(vp[i].ss-tmp2);
      }
      if(current2<vp[i].ff)
      {
       need2=need2+vp[i].ff- current2;
      }
      ans=min(need1,need2);
     }
     
    }
    cout<<ans<<endl;
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
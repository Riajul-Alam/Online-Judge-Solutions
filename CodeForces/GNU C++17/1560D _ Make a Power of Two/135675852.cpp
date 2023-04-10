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
ll Pow(ll a,ll b){ll ans=1;while(b){if(b%2==0){a=a*a;b/=2;}else{ans*=a;b--;}} return ans;}
void solve()
{   
 int t=1;
 cin>>t;
 vector<string>stp;
 for(int i=0;i<63;i++)
 {
  ll tmp=Pow(2,i);
  string tm=tostr(tmp);
  stp.pb(tm);
 }
 debug(stp)
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=INF;
   string s;cin>>s;
   for(int i=sz(stp)-1;i>=0;i--)
   {
    c1=0,c2=0;
     ll ii=0,jj=0;
     while(jj<stp[i].size() && ii<s.size())
     {
      if(s[ii]==stp[i][jj])
      {
       c1++;ii++,jj++;
      }
      else {
       ii++;
      }
     }
     /*if(sz(s)>sz(stp[i]))
     {
      c2+=(sz(s)-sz(stp[i]));
     }
     else{
      sum+=(sz(stp[i])-sz(s));
     }*/
     sum=(sz(stp[i])+sz(s)-(2*c1));
     if(sum<ans){
      debug(c1)
      debug(c2)
      debug(sum)
     }
     ans=min(ans,sum);
   }
   cout<<min(ans,(s.size()+1LL))<<endl;
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
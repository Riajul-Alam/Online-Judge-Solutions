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
   ll n,m,x,y,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m;
   string s;cin>>s;
   x=n+m;
   ll zero=n,one=m;
   ll l=0,r=0;
   if(x%2){
    r=(x+1)/2;
    l=(x)/2;l--;
   }else{
    r=(x/2);
    l=r-1;
   }
   debug(l)debug(r)
   ll t1=l,t2=r;
   for(int i=0;i<(x/2);i++,r++,l--){
    if(s[l]=='?' && s[r]=='?'){
     continue;
    }else if(s[l]=='0' && s[r]=='?'){
     s[r]='0';zero-=2;
    }else if(s[r]=='0' && s[l]=='?'){
     s[l]='0';zero-=2;
    }else if(s[l]=='1' && s[r]=='?'){
     s[r]='1';one-=2;
    }else if(s[r]=='1' && s[l]=='?'){
     s[l]='1';one-=2;
    }else if(s[l]=='0' && s[r]=='0'){
     zero-=2;
    }else if(s[l]=='1' && s[r]=='1'){
     one-=2;
    }else if(s[l]=='0' && s[r]=='1'){
     c2++;
    }else if(s[l]=='1' && s[r]=='0'){
     c2++;
    }
   }
   for(int i=0;i<(x/2);i++,t1--,t2++)
   {
    if(s[t1]=='?' && s[t2]=='?'){
     if(zero>one){
      s[t1]=s[t2]='0';zero-=2;
     }else{
      one-=2;
      s[t1]=s[t2]='1';
     }
    }
   }
   if(x%2){
    if(s[x/2]=='?'){
     if(zero>one){
      s[x/2]='0';zero--;
     }else{
      s[x/2]='1';one--;
     }
    }else if(s[x/2]=='1')one--;
    else zero--;
   }
   debug(zero)debug(one)
   ll z=0,o=0;
   for(int i=0;i<x;i++){
    if(s[i]=='?'){c1++;break;}
    else if(s[i]=='1')o++;
    else z++;
   }
   debug(s);
   ll i=0,j=x-1;
   while(i<j){
    if(s[i]!=s[j]){
     c1++;break;
    }
    i++,j--;
   }
   if(c2){cout<<-1<<endl;continue;}
   if(zero==0 && one==0){
    cout<<s<<endl;
   }
   else{
    cout<<-1<<endl;
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